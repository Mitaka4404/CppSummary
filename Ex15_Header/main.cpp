// Ex15_Header.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstring>

#include "MyClass.h"

using namespace std;

int main()
{
    MyClass my_class1;
    MyClass my_class2(123);

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class1.Print();

    return 0;
}
