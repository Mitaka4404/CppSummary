﻿
#include <iostream>
#include <cstring>

using namespace std;

struct MyStruct
{
    int first;
    int second;

    int Sum()
    {
        return first + second;
    }
};

int main()
{
    // member(.) operator
    MyStruct a;
    a.first = 123;
    a.second = 456;

    cout << sizeof(a) << endl;

    // 포인터는 member(->) operator가 화살표
    MyStruct *ptr_a = &a;

    cout << ptr_a->first << " " << ptr_a->second << " " << ptr_a->Sum() << endl;

    //배열도 가능
    MyStruct pairs[10];

    for (int i = 0; i < 10; i++)
    {
        pairs[i].first = i;
        pairs[i].second = i * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << pairs[i].Sum() << endl;
    }

    return 0;
}