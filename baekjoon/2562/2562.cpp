#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int max = 0, index = 0;
	int arr[9]{ 0 };
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			index = i + 1;
		}
	}
	cout << max << "\n" << index;

	return 0;
}