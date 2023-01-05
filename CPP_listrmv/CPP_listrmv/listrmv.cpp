#include<iostream>
#include<list>
#include<algorithm>

void Show(int);
const int LIM = 10;
int main()
{
	using namespace std;
	int ar[LIM] = { 4,5,4,2,2,3,4,8,1,4 };
	list<int> la(ar, ar + LIM);
	list<int> lb(la);
	cout << "오리지널 리스트의 내용:\n\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;
	la.remove(4);
	cout << "remove () 메서드를 사용한 후:\n ";
	cout << "la:\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;
	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "remove() 함수를 사용한 후: \n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;
	lb.erase(last, lb.end());
	cout << "erase() 메서드를 사용한 후:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;
	return 0;
}
void Show(int v)
{
	std::cout << v << ' ';
}