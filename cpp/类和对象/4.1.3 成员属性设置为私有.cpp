//
// Created by 沐雲 on 2022/1/26.
//
//#include<iostream>
//using namespace std;
//
//class Person{
//public:
//    // 姓名设置可读可写
//    void setName(string name)
//    {
//        m_Name = name;
//    }
//    string getName()
//    {
//        return m_Name;
//    }
//    // 获取年龄
//    int getAge()
//    {
//        return m_Age;
//    }
//
//    void setAge(int age)
//    {
//        if (age < 0 || age > 150)
//        {
//            cout << "你个老妖精" << endl;
//        }
//        m_Age = age;
//    }
//    void setLover(string lover)
//    {
//        m_lover = lover;
//    }
//
//private:
//    string m_Name; // 可读可写 姓名
//
//    int m_Age; // 只读 年龄
//
//    string m_lover; // 只写 情人
//
//};
//
//int main()
//{
//    Person p;
//    // 姓名设置
//    p.setName("张三");
//    cout << "姓名：" << p.getName() << endl;
//
//    // 年龄设置
//    p.setAge(50);
//    cout << "年龄：" << p.getAge() << endl;
//
//    // 情人设置
//    p.setLover("苍井");
//    // cout << "清热：" << p.m_lover << endl; // 只写属性，不可以读取
//
//    return 0;
//}