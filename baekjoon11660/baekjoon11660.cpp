#include <iostream>
#include <time.h>
using namespace std;
//int arr[1024][1024];
int main()
{
	clock_t start, end;
	double result;
	start = clock(); // 시간 측정 시작
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m, i, j;
	cin >> n >> m;
	int** arr = NULL;
	arr = new int* [n]; // 행 동적배열
	for (i = 0; i < n; i++) // 열 동적배열
		arr[i] = new int[n];

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> arr[i][j]; // 배열 입력

	while (m--)
	{
		int x1, y1, x2, y2, sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;

		for (i = x1-1; i < x2; i++)
			for (j = y1-1; j < y2; j++)
			{
				sum += arr[i][j];
				//cout << "\t\t\ti: " << i << "\tj: " << j << "\tarr[" << i << "][" << j << "]: " << arr[i][j] << "\t\t";
			}
		cout << sum << "\n";
	}

	for (i = 0; i < n; i++) // 열 메모리해제
		delete[] arr[i];

	delete[] arr; // 행 메모리해제

	end = clock(); // 시간 측정 끝
	result = (double)(end - start);
	cout << result/1000 << "초\n";

	return 0;
}