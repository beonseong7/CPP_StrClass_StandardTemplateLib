#include<iostream>
#include<string>
#include<memory>

int main()
{
	using namespace std;
	auto_ptr<string> films[5] =
	{
		auto_ptr<string>(new string("Fowl Balls")),
		auto_ptr<string>(new string("Duck Walks")),
		auto_ptr<string>(new string("Chicken Runs")),
		auto_ptr<string>(new string("Turkey Errors")),
		auto_ptr<string>(new string("Goose Eggs"))
	};
	auto_ptr<string> pwin;
	pwin = films[2];
	cout << "������ �ְ��� ���� ��ȭ�� �ĺ��Դϴ�\n";
	for (int i = 0; i < 5; i++)
		cout << *films[i] << endl;
	cout << "�����ڴ� " << *pwin << "!\n";
	cin.get();
	return 0;
}