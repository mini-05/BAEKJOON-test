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

	int t = 0;
	scanf("%d", &t);
	//cin >> t;
	int arr[15][14] = { 0 };

	for (int i = 0; i < 14; i++)
	{
		arr[0][i] = i + 1;
		arr[i][0] = 1;
	}
	arr[14][0] = 1;
	/*for (int i = 0; i < 14; i++)
		cout << arr[0][i] << "\t";*/
	
	for (int i = 1; i < 15; i++)
	{
		//cout << "\n" << arr[i][0] << "\t";
		for (int j = 1; j < 14; j++)
		{
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
			//cout << arr[i][j] << "\t";
		}
	}
	//cout << "------------------------------------------------------------------\n";
	for (int i = 0; i < t; i++)
	{
		int k, n;
		scanf("%d %d", &k, &n);
		//cin >> k >> n;
		printf("%d\n", arr[k][n - 1]);
		//cout << arr[k][n - 1] << "\n";
	}

	return 0;
}