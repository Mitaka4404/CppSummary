﻿#include <iostream>

using namespace std;

int main()
{
    // For 기본 예제
	for (int i  = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	// 배열 데이터 출력 연습 문제로 제공
	// 힌트 : sizeof(my_array) / sizeof(int)
	int my_array[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	for (int i = 0; i < sizeof(my_array) / sizeof(int); i++)
	{
		cout << my_array[i] << " ";
	}
	cout << endl;

	//문자열 출력
	//char my_string[] = "Hello\0, World"; //배열 크기를 알아서 결정
	char my_string[] = "Hello, World"; //배열 크기를 알아서 결정


	// 문자열을 한 글자씩 출력하기
	// cout << my_string << endl; 사용 X
	// 힌트: sizeof(), '\0', break,

	for (int i = 0; i < sizeof(my_string); i++)
	{
		if (my_string[i] == '\0')
		{
			break;
		}
		cout << my_string[i];
	}
	cout << endl;

	for (int i = 0; my_string[i] != '\0'; i++)
	{
		cout << my_string[i];
	}
	cout << endl;

	// while 기본 예제
	int i = 0;
	while (i < 10)
	{
		cout << i << " ";
		i++; // 무한반복 주의 안내
	}
	cout << endl;

	// 실습 문제
	i = 0;
	while (true)
	{
		// 이 구조에서 똑같이 정수 출력하도록 만들게 하기 (break)
		cout << i << " ";
		i++;
		if (i == 10)
		{
			break;
		}
	}
	cout << endl;

	// 런타임 오류 주의
	// while 문으로 문자열 한 글자씩 출력하기
	// 힌트 && logical and

	// char my_string[] = "Hello\0, World!";

	
	//int i = 0;
	i = 0;
	while (i < sizeof(my_string) && my_string[i] != '\0')
	{
		cout << my_string[i];
		i++;
	}
	cout << endl;
}
