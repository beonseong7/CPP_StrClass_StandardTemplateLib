#include<iostream>
#include<string>
#include<set>
#include<algorithm>
#include<iterator>

int main()
{
	using namespace std;
	const int N = 6;
	string s1[N] = { "buffoon","thinkers", "for","heavy","can","for" };
	string s2[N] = { "metal","any","food","elegant","deliver","for" };
	set<string> A(s1, s1 + N);
	set<string> B(s2, s2 + N);
	ostream_iterator<string, char>out(cout, " ");
	cout << "집합 A: ";
	copy(A.begin(), A.end(), out);
	cout << endl;
	cout << "집합 B: ";
	copy(B.begin(), B.end(), out);
	cout << endl;
	cout << "A와 B의 합집합:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;
	cout << "A와B의 교집합:\n";
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;
	cout << "A와B의 차집합:\n";
	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;
	set<string> C;
	cout << "집합 C:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
	copy(C.begin(), C.end(), out);
	cout << endl;
	string s3("grungy");
	C.insert(s3);
	cout << "삽입한 후의 집합 C:\n";
	copy(C.begin(), C.end(), out);
	cout << endl;

	cout << "특정한 범위를 표시:\n";
	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
	cout << endl;
	return 0;

}