#pragma warning(disable:4996)
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	time_t timer = time(NULL);			// time_t�� �ð� �ҷ���
	struct tm* t = localtime(&timer);	// tm����ü�� ��, ��, �� �ҷ���
										// localtime() �Լ��� 64bit ������ �˸��� �ð��� ������ ��ȯ
	cout << t->tm_year + 1900 << "-";

	cout.width(2);
	cout.fill('0');
	cout << t->tm_mon + 1 << "-";

	cout.width(2);
	cout.fill('0');
	cout << t->tm_mday;

	return 0;
}