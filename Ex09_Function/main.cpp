
#include <iostream>

using namespace std;

const int kMaxStr = 100;

int Add(int a, int b)
{
    return a + b;
}

// 반환 자료형이 없음
void Add(int a, int b, int* c)
{
    *c = a + b;
}

int main()
{
    cout << Add(1, 2) << endl;

    int sum;
    Add(4, 5, &sum);

    cout << sum << endl;

    return 0;
}

