#ifndef MY_CLASS_H
#define MY_CLASS_H

class MyClass
{
public:
	MyClass(); // 맴버 함수의 몸체(body) 모두 삭제, 깔끔
	MyClass(int number);
	~MyClass();

	void Increment(int a);

	void Print();
	
private:
	int number_ = 0; // 초기값
};
#endif // !MY_CLASS_H

