//
// Created by 沐雲 on 2022/3/29.
//

#include<iostream>
using namespace std;

class Student{
public:
    void setAge(int _age)
    {
         age = _age;
    }
    int getAge()
    {
        return age;
    }
    void study()
    {

    }
private:
    string name;
    int age;
};


