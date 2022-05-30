#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
//using namespace std;
#include <stdio.h>
int main()
{
	//cin.tie(NULL);	cout.tie(NULL);	//cin.tie(0)->sync_with_stdio(false);
	//ios::sync_with_stdio(false);
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int x;
	scanf("%d", &x);
	//cin >> x;
	int i = 0;
	while (x > 0)
	{
		i++;
		x -= i;
	}
	if (i % 2 == 1)
		printf("%d/%d", 1 - x, i + x);
	//cout << 1 - x << "/" << i + x;
	else
		printf("%d/%d", i + x, 1 - x);
	//cout << i + x << "/" << 1 - x;

	return 0;
}