#include <iostream>
using namespace std;
//int arr[1024][1024];
int main()
{
	/*cin.tie(NULL);
	ios::sync_with_stdio(false);*/
	int n, m, i, j;
	cin >> n >> m;
	int** arr = NULL;
	arr = new int* [n]; // �� �����迭
	for (i = 0; i < n; i++) // �� �����迭
		arr[i] = new int[n];

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> arr[i][j]; // �迭 �Է�

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

	for (i = 0; i < n; i++) // �� �޸�����
		delete[] arr[i];

	delete[] arr; // �� �޸�����

	return 0;
}