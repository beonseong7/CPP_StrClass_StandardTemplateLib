#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string empty;
	string small = "bit";
	string larger = "Elephants are a girl's best friend";
	cout << "ũ�� : \n";
	cout << "\temtpy: " << empty.size() << endl;
	cout << "\tsmall:" << empty.size() << endl;
	cout << "\tlarger:" << larger.size() << endl;
	cout << "�뷮:\n";
	cout << "\tempty:" << empty.capacity() << endl;
	cout << "\tsmall:" << small.capacity() << endl;
	cout << "\tlarger:" << larger.capacity() << endl;
	empty.reserve(50);
	cout << "empty.reserve(50) ���� �뷮: " << empty.capacity() << endl;
	return 0;
}