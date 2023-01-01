#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

struct Review {
	std::string title;
	int rating;
};
bool operator<(const Review& r1, const Review& r2);
bool worseThan(const Review& r1, const Review& r2);
bool FillReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{
	using namespace std;
	vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	if (books.size() > 0)
	{
		cout << "�����մϴ�. ��Ű� ����"
			<< books.size() << "���� å ����� �Է��ϼ̽��ϴ�.\n"
			<< "���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end());
		cout << "å ������ �������� ����:\n���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end(), worseThan);
		cout << "å ����� �������� ����:\n���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);
		random_shuffle(books.begin(), books.end());
		cout << "������ ������ �ٽ� ��ġ:\n���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
bool operator<(const Review& r1, const Review& r2)
{
	if (r1.title < r2.title)
		return true;
	else if (r1.title == r2.title && r1.rating < r2.rating)
		return true;
	else
		return false;
}
bool worsethan(const Review& r1, const Review& r2)
{
	if (r1.rating < r2.rating)
		return true;
	else
		return false;
}
bool FillReview(Review& rr)
{
	std::cout << "å ������ �Է��Ͻʽÿ�(��������quit): ";
	std::getline(std::cin, rr.title);
	if (rr.title == "quit")
		return false;
	std::cout << "å ���(0-10)�� �Է��Ͻʽÿ�: ";
	std::cin >> rr.rating;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}
void ShowReveiw(const Review& rr)
{
	std::cout << rr.rating << "\t" << rr.title << std::endl;
}