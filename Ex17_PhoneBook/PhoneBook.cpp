#include "PhoneBook.h"

#include <cassert>
#include <iostream>
#include <cstring> // memcpy(.)

using namespace std;

PhoneBook::PhoneBook()
{
	contacts_ = new Contact[capacity_];
}

PhoneBook::~PhoneBook()
{
	if (contacts_)
		delete[] contacts_;
}

bool PhoneBook::IsEmpty()
{
	assert(num_contacts_ >= 0);

	if (num_contacts_ == 0)
		return true;
	else
		return false;
}

bool PhoneBook::IsFull()
{
	if (num_contacts_ == capacity_)
		return true;
	else
		return false;
}

void PhoneBook::PrintAll()
{
	for(int i = 0; i < num_contacts_; i++)
	{
		PrintContact(i);
	}
}

void PhoneBook::PrintContact(int index)
{
	cout << index << " ";
	cout << contacts_[index].name;
	cout << ", " << contacts_[index].phone << endl;
}

void PhoneBook::AddContact(const char name[], const char phone[])
{
	assert(!IsFull()); // ������� �� assert ��ȣ ���� ������ false�� �Ǹ� ���� ó��

	memcpy(contacts_[num_contacts_].name, name, sizeof(contacts_[num_contacts_].name));
	memcpy(contacts_[num_contacts_].phone, phone, sizeof(contacts_[num_contacts_].phone));

	num_contacts_ += 1;
}

void PhoneBook::AddContact()
{
	// capacity_�� ������ ���
	if (IsFull())
	{
		cout << "�� �̻� �߰��� �� �����ϴ�." << endl;
		return;
	}

	// �� �غ� �� : �޸𸮸� ���Ҵ� �޾Ƽ� ����ó ���� ���� ���ֱ�

	char new_name[kMaxStr];
	char new_phone[kMaxStr];

	cout << "�̸��� �Է����ּ��� : ";
	cin.getline(new_name, sizeof(new_name));

	cout << "��ȭ��ȣ�� �Է����ּ��� : ";
	cin.getline(new_phone, sizeof(new_phone));

	AddContact(new_name, new_phone);
}

int PhoneBook::FindByName()
{
	char search_name[kMaxStr];

	cout << "�˻��� �̸��� �Է����ּ��� : ";
	cin.getline(search_name, sizeof(search_name));

	for (int i = 0; i < num_contacts_; i++)
	{
		if (IsEqual(search_name, contacts_[i].name))
		{
			PrintContact(i);
			return i;
		}
	}

	cout << search_name << " ���� ã�� ���߽��ϴ�." << endl;

	return -1;
}

bool PhoneBook::IsEqual(const char str1[], const char str2[])
{
	for (int i = 0; i < kMaxStr; i++)
	{
		if (str1[i] != str2[i])
			return false;

		if (str1[i] == '\0')
			return true;
	}
		
	return true;
}

void PhoneBook::DeleteByName()
{
	// ������ �� �޸𸮸� �������� ����

	int index = FindByName();

	if (index >= 0)
	{
		// TODO : �߰����� �������� ��� ������ ����
		for (int i = index + 1; i < num_contacts_; i++)
		{
			memcpy(&contacts_[i - 1], &contacts_[i], sizeof(Contact));
		}
		// TODO : num_contacts_ �ϳ� ����
		num_contacts_ -= 1;
	}
}