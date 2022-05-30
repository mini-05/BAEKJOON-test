#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
//using namespace std;
#include <stdio.h>
int main()
{
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int a, b, c, cnt = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) // 손익분기점이 없는 경우
		printf("%d", -1);
	else
	{
		/*while ((c - b) * cnt <= a) // 시간초과
		{
			cnt++;
		}*/
		printf("%d", a / (c - b) + 1);
	}

	return 0;
}