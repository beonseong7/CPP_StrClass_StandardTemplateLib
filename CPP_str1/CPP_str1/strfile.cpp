#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
int main()
{
	using namespace std;
	ifstream fin;
	fin.open("tobuy.txt");
	if (fin.is_open() == false)
	{
		cerr << "������ ���� �����ϴ�.\n";
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0;
	getline(fin, item, ':');
	while (fin)
	{
		++count;
		cout << count << ": " << item << endl;
		getline(fin, item, ':');
	}
	cout << "���α׷��� �����մϴ�.\n";
	fin.close();
	return 0;
}