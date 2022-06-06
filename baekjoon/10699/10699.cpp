#pragma warning(disable:4996)
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	time_t timer = time(NULL);			// time_t로 시간 불러옴
	struct tm* t = localtime(&timer);	// tm구조체로 년, 월, 일 불러옴
										// localtime() 함수로 64bit 정수를 알맞은 시간대 정수로 변환
	cout << t->tm_year + 1900 << "-";

	cout.width(2);
	cout.fill('0');
	cout << t->tm_mon + 1 << "-";

	cout.width(2);
	cout.fill('0');
	cout << t->tm_mday;

	return 0;
}