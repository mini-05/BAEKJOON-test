#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
//using namespace std;
#include <stdio.h>
int main()
{
	//cin.tie(0)->sync_with_stdio(false);
	/*cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);*/
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int n, five = 0, three = 0;
	scanf("%d", &n);

	if (n == 1 || n == 2 || n == 4 || n == 7)
	{
		five = 0;
		three = -1;
	}
	else
	{
		switch (n % 5)
		{
		case 0: {five = n / 5; three = 0; break; }
		case 1: {five = n / 5 - 1; three = 2; break; }
		case 2: {five = n / 5 - 2; three = 4; break; }
		case 3: {five = n / 5; three = 1; break; }
		case 4: {five = n / 5 - 1; three = 3; break; }
		default:
		{five = -1; three = 0; break; }
		}
	}
	printf("%d\n", five + three);

	return 0;
}