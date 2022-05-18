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
	int n, m, k, sumx = 0;
	int x1, x2, y1, y2;
	int** arr;

	cin >> n >> m;

	arr = new int* [n + 1]; // 0 ~ n+1 행 동적할당
	arr[0] = new int[n + 1]; // [0][i] 열 동적할당
	for (int i = 0; i <= n; i++)
	{
		arr[0][i] = 0; // [0][i]을 0으로 초기화
	}
	for (int i = 1; i <= n; i++)
	{
		arr[i] = new int[n + 1]; // [1][n+1] ~ [n+1][n+1] 열 동적할당
		arr[i][0] = 0; // [1][0] ~ [1][n+1] 0으로 초기화
		sumx = 0; // 행 누적 값 0으로 초기화
		for (int j = 1; j <= n; j++)
		{
			cin >> k; // // [1][n+1] ~ [n+1][n+1] 값 입력
			sumx += k; // 행 누적 값
			arr[i][j] = arr[i - 1][j] + sumx; // [i][j]의 열 누적 값 + 행 누적 값 = [0][0] ~ [i][j] 모든 값의 합 = 사각형 값의 합
		}
	}

	for (int z = 0; z < m; z++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr[x2][y2] + arr[x1 - 1][y1 - 1] - arr[x1 - 1][y2] - arr[x2][y1 - 1] << "\n"; // (x2,y2)사각형 -(x1-1,y2)사각형 - (x2,y1-1)사각형 + (x1-1,y1-1)사각형
	}
#ifdef LOCAL
	end = clock(); // 시간 측정 끝
	result = (double)(end - start);
	cout << result / 1000 << "초\n";
#endif
	return 0;
}