#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
//using namespace std;
#include <stdio.h>
int main()
{
	/*cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);*/
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int n;
	scanf("%d\n", &n);
	char arr[81] = { 0 };
	int arrSize = sizeof(arr) / sizeof(char);
	while (n--)
	{
		int  cnt = 0, sum = 0;
		for (int i = 0; i < arrSize; i++)
		{
			scanf("%c", &arr[i]);
			printf("%c ", arr[i]);
			if (arr[i] == 'O' || arr[i] == 'X')
			{
				if (arr[i] == 'X')
				{
					cnt = 0;
					sum += cnt;
				}
				else if (arr[i] == 'O')
				{
					cnt++;
					sum += cnt;
				}
			}
			else
				break;
		}
		printf("\n\t\t\t%d\n", sum);
	}

	return 0;
}