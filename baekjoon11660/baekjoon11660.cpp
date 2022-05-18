//#include <iostream>
//int arr[1030][1030];
//#pragma warning(disable:4996)
//#define LOCAL
//using namespace std;
//int main()
//{
//#ifdef LOCAL
//	clock_t start, end;
//	double result; 
//	start = clock(); // 시간 측정 시작
//	freopen("input.txt", "r", stdin);
//#endif
//	int n, m;
//	int x1, x2, y1, y2;
//
//	scanf("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &arr[i][j]);
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			arr[i][j] += arr[i - 1][j];
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			arr[i][j] += arr[i][j - 1];
//
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//
//		printf("%d\n", arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1]);
//	}
//#ifdef LOCAL
//	end = clock(); // 시간 측정 끝
//	result = (double)(end - start);
//	cout << result / 1000 << "초\n";
//#endif
//	return 0;
//}

//#include <bits/stdc++.h>
#pragma warning(disable:4996)
#define LOCAL

#include <iostream>
using namespace std;

int main()
{
#ifdef LOCAL
	clock_t start, end;
	double result; 
	start = clock(); // 시간 측정 시작
	freopen("input.txt", "r", stdin);
#endif
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, k, l = 0;
	int x1, x2, y1, y2;
	int** arr;

	cin >> n >> m;

	arr = new int* [n + 1];
	arr[0] = new int[n + 1];
	for (int i = 0; i <= n; i++)
	{
		arr[0][i] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		arr[i] = new int[n + 1];
		arr[i][0] = 0;
		l = 0;
		for (int j = 1; j <= n; j++)
		{
			cin >> k;
			l += k;
			arr[i][j] = arr[i - 1][j] + l;
		}
	}

	for (int z = 0; z < m; z++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr[x2][y2] + arr[x1 - 1][y1 - 1] - arr[x1 - 1][y2] - arr[x2][y1 - 1] << "\n";
	}
#ifdef LOCAL
	end = clock(); // 시간 측정 끝
	result = (double)(end - start);
	cout << result / 1000 << "초\n";
#endif
	return 0;
}