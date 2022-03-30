//
// Created by 沐雲 on 2022/3/29.
//

#include<iostream>
#include<string>
using namespace std;

/****************************************************
 * 定义类：Student
 * 数据成员：m_strName
 * 数据成员的封装函数：setName(), getName()
 ****************************************************/

class Student{
public:
    void setName(string _name)
    {
        m_strName = _name;
    }

    string getName()
    {
        return m_strName;
    }
private:
    string m_strName; // 定义Student类私有数据成员 m_strName
};

int main()
{
    Student *str = new Student();
    str->setName("SB");
    cout << str->getName() << endl;

    delete str;
    str = NULL;
    cout << "str: " << str << endl;

    cin.get();
    return 0;
}
