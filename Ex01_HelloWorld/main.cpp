#include <iostream> // iostream�̶�� ����� ����(include)

using namespace std; // ���ӽ����̽� ���� std::cout

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