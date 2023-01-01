#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
using std::string;
const int NUM = 26;
const string wordlist[NUM] = { "apiary","beetle","cereal","danger","ensign","florid","garage","health","insult","jackal","keeper","loaner",
	"manage","nonce","onset","plaid","quilt","remote","stolid","train","useful","valid","whence","xenon","yearn","zippy" };
int main()
{
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;
	std::srand(std::time());
	char play;
	cout << "���� �ܾ� ������ �Ͻðڽ��ϱ�?<y/n>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "�������� �ܾ ������ ���ʽÿ�.\n"
			<< length << "���� ���ڷ� �̷���� �ֽ��ϴ�.\n"
			<< "�� ���� �� ���ھ� �����Ͻʽÿ�.\n"
			<< "Ʋ�� �� �ִ� ��ȸ:" << guesses << "��\n";
		cout << "�����ϴ� �ܾ�: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "���ڸ� �����Ͻʽÿ�: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos
				|| attempt.find(letter) != string::npos)
			{
				cout << "�̹� ������ �����Դϴ�. �ٽ��Ͻʽÿ�.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "��! Ʋ�Ƚ��ϴ�.\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "������! �¾ҽ��ϴ�.\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "�����ϴ� �ܾ�: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Ʋ���� ������ ���ڵ�: " << badchars << endl;

					cout << "Ʋ�� �� �ִ� ��ȸ: " << guesses << "��\n";
			}
		}
		if (guesses > 0)
			cout << "�׷����ϴ�. �װ��� ���������ܾ��Դϴ�.\n";
		else
			cout << "��Ÿ�����ϴ�. �������� �ܾ�� " << target << "�Դϴ�.\n";

		cout << "������ �ٽ� �Ͻðڽ��ϱ�?<y/n>";
		cin >> play;
		play = tolower(play);
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}