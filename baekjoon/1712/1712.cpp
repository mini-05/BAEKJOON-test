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
	if (b >= c) // ���ͺб����� ���� ���
		printf("%d", -1);
	else
	{
		/*while ((c - b) * cnt <= a) // �ð��ʰ�
		{
			cnt++;
		}*/
		printf("%d", a / (c - b) + 1);
	}

	return 0;
}