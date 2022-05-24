#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
//using namespace std;
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);*/
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int n, m, valSum = 0;
	scanf("%d %d", &n, &m);
	//cin >> n >> m;
	int* arr = (int*)malloc(sizeof(int) * n);
	int* sum = (int*)malloc(sizeof(int) * n);
	/*int* arr = new int[n];
	int* sum = new int[n];*/
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		//cin >> arr[i];
		valSum += arr[i];
		sum[i] = valSum;
		//cout << sum[i] << " ";
	}
	for (int num = 0; num < m; num++)
	{
		int i, j;
		scanf("%d %d", &i, &j);
		//cin >> i >> j;
		if (i == 1)
			printf("%d\n", sum[j - 1]);
		//cout << sum[j - 1] << "\n";
		else
			printf("%d\n", sum[j - 1] - sum[i - 2]);
		//cout << sum[j - 1] - sum[i - 2] << "\n";
	}
	free(sum);
	free(arr);
	/*delete[] sum;
	delete[] arr;*/
	return 0;
}