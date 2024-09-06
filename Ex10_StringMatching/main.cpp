
#include <iostream>

using namespace std;

const int kMaxStr = 100;

// 문자열을 매개변수로 넣기
// 여기서는 모든 문자열 배열의 길이가 동일하다고 가정

bool IsEqual(const char str1[], const char str2[])
{
	for (size_t i = 0; i < kMaxStr; i++)
	{
		cout << int(str1[i]) << " " << int(str2[i]) << endl;

		if (str1[i] != str2[i])
		{
			return false;
		}
		
		// 문자열 종료
		if (str1[i] =='\0')
		{
			return true;
		}
	}
	return true;
}

int main()
{
	const char str1[kMaxStr] = "stop";


	while (1)
	{
		char str2[kMaxStr];
		cin >> str2;

		if (IsEqual(str1, str2))
		{ 
			cout << "종료합니다." << endl;
			break;
		}
		else
		{
			cout << "계속합니다." << endl;
		}
	}

	return 0;
}