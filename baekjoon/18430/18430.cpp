#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

#include <iostream>
#define endl '\n'
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	FILE* fp = freopen("input.txt", "r", stdin);
#else
	FAST_IO
#endif // ONLINE_JUDGE

	int n, m;
	scanf("%d %d", &n, &m);
	if (n == 1 || m == 1)
		cout << 0 << "\n";
	else
	{
		int sum = 0;
		int size[3][3] = { 0 };
		int** arr = new int* [n];
		for (int i = 0; i < n; i++)
			arr[i] = new int[m];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &arr[i][j]);

		for (int i = 0; i < n - 1; i++)
		{
			int colmax = arr[i][0];
			for (int j = 1; j < m; j++)
			{
				if (arr[i + 1][j] > arr[i][j])
				{
					colmax = arr[i + 1][j];
				}
			}
		}

		for (int i = 0; i < n; i++)
			delete[] arr[i];
		delete[] arr;

#ifndef BOJ
		// Ãâ·Â µð¹ö±ë
#endif // BOJ
	}
		return 0;
}