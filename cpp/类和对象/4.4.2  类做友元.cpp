//
// Created by 沐雲 on 2022/2/28.
//

#include<iostream>
using namespace std;

class Building;

class goodGay
{
public:
    void visit(); // 参观函数 访问building 中的属性
    goodGay();
private:
    Building * building;
};

class Building{
    // 告诉编译器 goodGay类Building类的好朋友，可以访问Building类中私有类容
    friend class goodGay;
public:
    Building();
public:
    string m_SittingRoom; // 客厅
private:
    string m_BedRoom; // 卧室
};

Building::Building()
{
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
}
goodGay::goodGay()
{
    cout << "好基友正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
    goodGay gg;
    gg.visit();
}
int main()
{
    test01();
    return 0;
}
