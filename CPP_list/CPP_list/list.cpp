#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

void outint(int n) { std::cout << n << " "; }

int main()
{
	using namespace std;
	list<int> one(5, 2);
	int stuff[5] = { 1,2,4,8,6 };
	list<int> two;
	two.insert(two.begin(), stuff, stuff + 5);
	int more[6] = { 6,4,2,4,6,5 };
	list<int> three(two);
	three.insert(three.end(), more, more + 6);

	cout << "����Ʈ one : ";
	for_each(one.begin(), one.end(),outint);
	cout << endl << "����Ʈ two: ";
	for_each(two.begin(), two.end(), outint);
	cout << endl << "����Ʈ three: ";
	for_each(three.begin(), three.end(), outint);
	three.remove(2);
	cout << endl << "����Ʈ three���� 2���� ����:";
	for_each(three.begin(), three.end(), outint);
	three.splice(three.begin(), one);
	cout << endl << "���� ���� ����Ʈ three: ";
	for_each(three.begin(), three.end(), outint);
	cout << endl << "����Ʈ one: ";
	for_each(one.begin(), one.end(), outint);
	three.unique();
	cout << endl << "����ȭ ���� ����Ʈ three: ";
	for_each(three.begin(), three.end(), outint);
	three.sort();
	three.unique();
	cout << endl << "���İ� ����ȭ ���� ����Ʈ three: ";
	for_each(three.begin(), three.end(), outint);
	two.sort();
	three.merge(two);
	cout << endl << "���ĵ� ����Ʈ two�� ����Ʈ three�� �պ�: ";
	for_each(three.begin(), three.end(), outint);
	cout << endl;
	return 0;
}