//
// Created by 沐雲 on 2022/1/24.
//

//#include<iostream>
//using namespace std;
//// 圆周率
//const double PI = 3.14;
//
//// 1. 封装的意义
//// 将属性和行为作为一个整体，用来表现生活中的事物
//
//// 封装一个园类，求圆的周长
//// class代表设计一个类，后面跟着的是类名
//class CIRCLE
//{
//public: // 访问权限，公共的权限
//    // 属性
//    int m_r; // 半径
//    // 行为
//    // 获取到圆的周长
//    double calcurateZC()
//    {
//        // 2 * pi * r
//        // 获取圆的周长
//        return 2 * PI * m_r;
//    }
//};
//
//class Student {
//public:
//    void setName(string name)
//    {
//        m_name = name;
//    }
//
//    void setID(int id)
//    {
//        m_id = id;
//    }
//    void showStudent()
//    {
//        cout << "name:" << m_name << "ID:" << m_id << endl;
//    }
//public:
//    string m_name;
//    int m_id;
//};
//int main()
//{
//    // 通过圆类，创建圆的对象
//    // cl就是一个具体的圆
//    CIRCLE cl;
//    cl.m_r = 10;  // 给圆对象的半径 进行赋值操作
//
//    // 2 * pi * 10 == 62.8
//    cout << "圆的周长为：" << cl.calcurateZC() << endl;
//
//    Student stu;
//    stu.setName("德玛西亚");
//    stu.setID(250);
//    stu.showStudent();
//
//    return 0;
//}
