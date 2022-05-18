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
//	start = clock(); // �ð� ���� ����
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
//	end = clock(); // �ð� ���� ��
//	result = (double)(end - start);
//	cout << result / 1000 << "��\n";
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
	start = clock(); // �ð� ���� ����
	freopen("input.txt", "r", stdin);
#endif
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, k, sumx = 0;
	int x1, x2, y1, y2;
	int** arr;

	cin >> n >> m;

	arr = new int* [n + 1]; // 0 ~ n+1 �� �����Ҵ�
	arr[0] = new int[n + 1]; // [0][i] �� �����Ҵ�
	for (int i = 0; i <= n; i++)
	{
		arr[0][i] = 0; // [0][i]�� 0���� �ʱ�ȭ
	}
	for (int i = 1; i <= n; i++)
	{
		arr[i] = new int[n + 1]; // [1][n+1] ~ [n+1][n+1] �� �����Ҵ�
		arr[i][0] = 0; // [1][0] ~ [1][n+1] 0���� �ʱ�ȭ
		sumx = 0; // �� ���� �� 0���� �ʱ�ȭ
		for (int j = 1; j <= n; j++)
		{
			cin >> k; // // [1][n+1] ~ [n+1][n+1] �� �Է�
			sumx += k; // �� ���� ��
			arr[i][j] = arr[i - 1][j] + sumx; // [i][j]�� �� ���� �� + �� ���� �� = [0][0] ~ [i][j] ��� ���� �� = �簢�� ���� ��
		}
	}

	for (int z = 0; z < m; z++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr[x2][y2] + arr[x1 - 1][y1 - 1] - arr[x1 - 1][y2] - arr[x2][y1 - 1] << "\n"; // (x2,y2)�簢�� -(x1-1,y2)�簢�� - (x2,y1-1)�簢�� + (x1-1,y1-1)�簢��
	}
#ifdef LOCAL
	end = clock(); // �ð� ���� ��
	result = (double)(end - start);
	cout << result / 1000 << "��\n";
#endif
	return 0;
}