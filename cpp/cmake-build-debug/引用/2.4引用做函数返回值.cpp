////
//// Created by 沐雲 on 2022/1/23.
////
//
//#include<iostream>
//using namespace std;
//
//// 引用做函数的返回值
//// 1. 不要返回局部变量的引用
//// 2. 函数的调用可以作为左值
//
//int& test01()
//{
//    int a = 10;   // 局部变量存放在四区中的 栈区
//    return a;
//}
//
//int& test02()
//{
//    static int a = 10; // 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
//    return a;
//}
//
//int main()
//{
//    int &ref1 = test01();
//    cout << " ref1= " << ref1 << endl;
//
//    int &ref2 = test02();
//    cout << " ref2= " << ref2 << endl;
//
//    test02() = 1000;  // 如果函数的返回值是引用，这个函数调用可以作为左值
//    cout << " ref2= " << ref2 << endl;
//}