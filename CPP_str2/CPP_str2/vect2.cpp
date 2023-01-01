#include<iostream>
#include<string>
#include<vector>

struct Review {
	std::string titel;
	int rating;
};
bool FillReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{
	using std::cout;
	using std::vector;
	vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	int num = books.size();
	if (num > 0)
	{
		cout << "�����մϴ�. ����� ������ ���� �Է��ϼ̽��ϴ�.\n"
			<< "���\t����\n";
		for (int i = 0; i < num; i++)
			ShowReview(books[i]);
		cout << "�� �� �� ����Ѵ�:\n"
			<< "���\t����\n";
		vector<Review>::iterator pr;
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
		vector<Review> oldlist(books);
		if (num > 3)
		{
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "������ ��:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "������ ��:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
		}
		books.swap(oldlist);
		cout << "oldlist�� books�� ��ȯ�� �� : \n";
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
	}
	else
		cout << "�Է��� ���� ����, ���� ���� �����ϴ�.\n";
	return 0;
}
bool FillReview(Review& rr)
{
	std::cout << "å ������ �Է��Ͻʽÿ�(�������� quit�� �Է�):";
	std::getline(std::cin, rr.titel);
	if (rr.titel == "quit")
		return false;
	std::cout << "å ���(0-10)�� �Է��Ͻʽÿ�:";
	std::cin >> rr.rating;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(const Review& rr)
{
	std::cout << rr.rating << "\t" << rr.titel << std::endl;
}