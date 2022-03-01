//
// Created by 沐雲 on 2022/2/28.
//

//#include<iostream>
//using namespace std;
//
//// 建筑物类
//class Building {
//    // goodGay全局函数是building的郝鹏宇哦，可以访问类的私有内容。
//    friend void goodGay(Building *building);
//public:
//    Building()
//    {
//        m_SittingRoom = "客厅";
//        m_BedRoom = "卧室";
//    }
//    string m_SittingRoom; // 客厅
//private:
//    string m_BedRoom;
//
//};
//
//void goodGay(Building *building)
//{
//    cout << "好基友全局函数 正在访问：" << building ->m_SittingRoom << endl;
//    cout  << building->m_SittingRoom << endl;
//    cout << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//    Building building;
//    goodGay(&building);
//}
//
//int main()
//{
//    test01();
//    return 0;
//}