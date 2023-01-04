#include<iostream>
#include<string>
#include<algorithm>

int main()
{
	using namespace std;
	string letters;
	cout << "글자 그룹을 입력하십시오(끝내려면 quit):";
	while (cin >> letters && letters != "quit")
	{
		cout << letters << "의 모든 치환들:" << endl;
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;
		cout << "다음 시퀀스를 입력하십시오(끝내려면 quit):";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}