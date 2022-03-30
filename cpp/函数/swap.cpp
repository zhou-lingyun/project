//
// Created by 沐雲 on 2022/3/27.
//
#include "swap.h"

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

