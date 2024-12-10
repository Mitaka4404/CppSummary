
#include <iostream>
#include <cstring>

using namespace std;

// public, private 접근 권한 확인

class MyClass
{
public:
    MyClass()
    {
        // 호출 시점 확인
        cout << "MyClass()" << endl;
    }

    MyClass(int number)
    {
        cout << "MyClass(int number)" << endl;

        // this pointer
        this->number_ = number;
    }

    ~MyClass()
    {
        // 호출 시점 확인
        cout << "~MyClass()" << endl;
    }

    void Increment(int a)
    {
        number_ += a;
    }

    void Print()
    {
        cout << number_ << endl;
    }
private:
    int number_ = 0; // 초기값
};
int main()
{
    MyClass my_class1;
    MyClass my_class2(123);

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class2.Print();

    return 0;
}

