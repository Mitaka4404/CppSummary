
#include <iostream>

using namespace std;

int main()
{
    //  변수를 정의할 때 자료형을 미리 지정
    // 자료형은 바꿀 수 없다.

    // 내부적으로 메모리를 이미 갖고 있다.
    int i; //변수 정의
    i = 123; // 변수에 값 지정 (객체 레퍼런스 아님)

    // sizeof 소개
    cout << i << " " << sizeof(i) << endl;
    //123 4

    float f = 123.456f; // 마지막 f 주의
    double d = 123.456; // f 불필요

    cout << f << " " << sizeof(f) << endl; // 123.456 4
    cout << d << " " << sizeof(d) << endl; // 123.456 8

    // C++는 글자 하나와 문자열을 구분한다.
    char c = 'a';

    cout << c << " " << sizeof(c) << endl; // a 1

    // 그 외에도 다양한 자료형이 존재한다.

    // 형변환
    i = 987.654; // double을 int에 강제로 저장

    cout << "int from double " << i << endl;
    // int from double 987;

    f = 567.89; // 형변환

    // 기본 연산자

    // i = 987;
    i += 100; // i = i + 100;
    i++;      // i = i + 1;

    cout << i << endl;
    // 1088

    // 불리언
    bool is_good = true;
    is_good = false;

    cout << is_good << endl; // 0

    cout << boolalpha << true << endl; // true
    cout << is_good << endl;           // false
    cout << noboolalpha << true << endl; // 1

    cout << boolalpha;
    cout << (true && true) << endl; // true
    cout << (true || false) << endl; // true

    // 비교

    cout << (1 > 3) << endl; // false
    cout << (3 == 3) << endl; // true
    cout << (i >= 3) << endl; // true
    cout << ('a' != 'c') << endl; // true
    cout << ('a' != 'a') << endl; // false

    // 영역(scope)

    i = 123; // 더 넓은 영역

    {
        int i = 345; // <- 더 좋은 영역의 다른 변수
        cout << i << endl; // 345
    }

    cout << i << endl; // 123

    return 0;
}