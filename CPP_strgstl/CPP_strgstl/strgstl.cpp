#include<iostream>
#include<string>
#include<algorithm>

int main()
{
	using namespace std;
	string letters;
	cout << "���� �׷��� �Է��Ͻʽÿ�(�������� quit):";
	while (cin >> letters && letters != "quit")
	{
		cout << letters << "�� ��� ġȯ��:" << endl;
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;
		cout << "���� �������� �Է��Ͻʽÿ�(�������� quit):";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}