//
// Created by 沐雲 on 2022/3/29.
//

//#include<iostream>
//using namespace std;
//
//// 定义 Coordinate类
//class Coordinate
//{
//public:
//    int x;
//    int y;
//
//    void printX()
//    {
//        cout << x << endl;
//    }
//    void printY()
//    {
//        cout << y << endl;
//    }
//};
//
//int main()
//{
//    // 用栈访问类
//    Coordinate coor;
//    coor.x = 10;  //赋值
//    coor.y = 20;
//    coor.printX(); // 调用类中的成员函数
//    coor.printY();
//
//    cout << "______________" << endl;
//
//    // 用堆访问类
//    Coordinate *p = new Coordinate();
//    cout << "sizeof(coor):\t" << sizeof(coor) << endl;
//    cout << "sizeof(*p):\t" << sizeof(*p) << endl;
//    if (NULL==p)
//    {
//        return 0;
//    }
//    p->x = 100; // 赋值
//    p->y = 200;
//    p->printY();// 调用类中的成员函数
//    p->printX();
//}
