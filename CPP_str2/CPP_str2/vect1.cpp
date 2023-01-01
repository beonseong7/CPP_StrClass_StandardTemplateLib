#include<iostream>
#include<string>
#include<vector>

const int NUM = 5;
int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;
	vector<int> ratings(NUM);
	vector<string> titles(NUM);
	cout << NUM << "개의 책 제목과 책 등급(0-10)을 입력하십시오.\n";
	int i;
	for (i = 0; i < NUM; i++)
	{
		cout << i + 1 << "번의 제목을 입력하십시오:";
		getline(cin, titles[i]);
		cout << i + 1 << "번 책의 등급(0-10)을 입력하십시오: ";
		cin >> ratings[i];
		cin.get();
	}
	cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다:\n"
		<< "등급\t제목\n";
	for (i = 0; i < NUM; i++)
	{
		cout << ratings[i] << "\t" << titles[i] << endl;
	}
	return 0;
}