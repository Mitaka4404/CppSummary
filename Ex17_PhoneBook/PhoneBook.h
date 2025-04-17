
#ifndef PHONE_BOOK_H_
#define PHONE_BOOK_H_

const int kMaxStr = 20; // ���ڿ��� �ִ� ���ڼ�

struct Contact
{
	char name[kMaxStr];
	char phone[kMaxStr];
};

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	bool IsEmpty();
	bool IsFull();
	void PrintAll();
	void PrintContact(int i);
	void AddContact();
	void AddContact(const char name[], const char phone[]);
	int FindByName();
	bool IsEqual(const char str1[], const char str2[]);
	void DeleteByName();

private:
	int capacity_ = 3; // ����ó �ִ� ����(���� ����)
	int num_contacts_ = 0;
	Contact* contacts_ = nullptr;
};



#endif