#include<iostream>
#include<string>
#include<map>
#include<algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string>Pair;
typedef std::multimap<KeyType, std::string>MapCode;

int main()
{
	using namespace std;
	MapCode codes;
	codes.insert(Pair(415, "�������ý���"));
	codes.insert(Pair(510, "��Ŭ����"));
	codes.insert(Pair(718, "���Ŭ��"));
	codes.insert(Pair(718, "����ư ��"));
	codes.insert(Pair(415, "�����Ŀ�"));
	codes.insert(Pair(510, "��Ŭ��"));

	cout << "���� �ڵ尡415�� ���� ��: " << codes.count(415) << endl;
	cout << "���� �ڵ尡718�� ���� ��: " << codes.count(718) << endl;
	cout << "���� �ڵ尡519�� ���� ��: " << codes.count(510) << endl;
	cout << "���� �ڵ� ����\n";
	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it)
		cout << "	" << (*it).first << "	"
		<< (*it).second << endl;
	pair<MapCode::iterator, MapCode::iterator>range = codes.equal_range(718);
	cout << "�����ڵ尡 718�� ���õ�:\n";
	for (it = range.first; it != range.second; ++it)
		cout << (*it).second << endl;
	return 0;
}