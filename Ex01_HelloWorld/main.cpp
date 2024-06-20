#include <iostream> // iostream이라는 헤더를 포함(include)

using namespace std; // 네임스페이스 설명 std::cout

int main() //entry point
{
	// comment

	cout << "Hello, World!" << endl;
	// printf("Hello World!!! by printf");

	char user_input[100];
	cin >> user_input;
	cout << user_input;

	return 0;
}