#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<cctype>
using namespace std;
char toLower(char ch) { return tolower(ch); }
string& ToLower(string& st);
void display(const string& s);

int main()
{
	vector<string> words;
	cout << "단어들을 입력하십시오(끝내려면 quit):\n";
	string input;
	while (cin >> input && input != "quit")
		words.push_back(input);

	cout << "다음과 같은 단어들을 입력하셨습니다.\n";
	for_each(words.begin(), words.end(), display);
	cout << endl;

	set<string> wordset;
	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
	cout << "\n단어들의 알파벳순 리스트:\n";
	for_each(wordset.begin(), wordset.end(), display);
	cout << endl;

	map<string, int>wordmap;
	set<string>::iterator si;
	for (si = wordset.begin(); si != wordset.end(); si++)
		wordmap[*si] = count(words.begin(), words.end(), *si);
	cout << "\n단어별 빈도:\n";
	for (si = wordset.begin(); si != wordset.end(); si++)
		cout << *si << ": " << wordmap[*si] << endl;
	return 0;
}
string& ToLower(string& st)
{
	transform(st.begin(), st.end(), st.begin(), toLower);
	return st;
}
void display(const string& s)
{
	cout << s << " ";
}