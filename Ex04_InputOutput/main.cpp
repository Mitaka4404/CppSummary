
#include <iostream>

using namespace std;

int main()
{
	// cin은 데이터를 흘려넣어 보내는 스트림이고
	// 그 데이터를 해석하는 것은 자료형
	// 자료형에 따라서 알아서 처리해주기 때문에 scanf()보다 편리

	char user_input[100];

	// cin과 getline의 차이

	cout << "원하는 문장을 입력해주세요." << endl;
	cout << "입력: ";

	// cin >> user_input;
	// cin 은 빈칸이나 줄바꿈이 있으면 더 이상 입력을 받아오지 않는다.

	// 빈칸과 상관없이 전체를 다 입력을 받고싶다면, 아래왜 같이 cin.getline을 쓴다.
	// cin.getline(받아올 변수, 받아올 크기)
	
	/*cin.getline(user_input, sizeof(user_input));

	cout << "메아리: " << user_input << endl;*/

	int number = -1;

	//cin >> user_input;
	cin.getline(user_input, sizeof(user_input));

	// 최대 100글자까지 입력 받아서 무시하겠다. 또는 '\n'이 있으면 그때부터 무시하겠다.
	//cin.ignore(100, '\n');

	cin >> number;
	cout << user_input << " " << number << endl;

	// 참고 : cin.ignore(numeric_limits<streamsize>::max(), '\n')

	return 0;
}