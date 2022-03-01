//
// Created by 沐雲 on 2022/2/8.
//

//#include<iostream>
//using namespace std;
//
//class Person{
//public:
//    // 无参（默认）构造函数
//    Person()
//    {
//        cout << "无参构造函数！" << endl;
//    }
//    // 有参构造函数
//    Person(int a)
//    {
//        age  = a;
//        cout << "有参构造函数" << endl;
//    }
//    // 拷贝构造函数
//    Person(const Person& p)
//    {
//        age = p.age;
//        cout << "拷贝构造函数" << endl;
//    }
//    // 析构函数
//    ~Person()
//    {
//        cout << "析构函数" << endl;
//    }
//public:
//    int age;
//};
//
//// 1. 使用一个已经创建完毕的对象来初始化一个新对象
//
//void test01()
//{
//    Person man(100);  // p对象已经创建完毕
//    Person newman(man); // 调用拷贝构造函数
//    Person newman2 = man; // 拷贝构造
//}
//
//// 2. 值传递的方式给函数参数传递
//// 相当于Person p1 = p;
//void doWork(Person p1){}
//void test02(){
//    Person p;
//    doWork(p);
//}
//
//// 3. 以值方式返回局部对象
//Person doWork2()
//{
//    Person p1;
//    cout << (int *)&p1 << endl;
//    return p1;
//}
//
//void test03()
//{
//    Person p = doWork2();
//    cout << (int *)&p << endl;
//}
//
//int main()
//{
//    test01();
//    test02();
//    test03();
//    return 0;
//}
