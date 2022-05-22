#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
//using namespace std;
//int main()
//{
//	cin.tie(NULL); cout.tie(NULL);
//	ios::sync_with_stdio(false);
//#ifdef LOCAL_TEST
//	FILE* fp = freopen("input.txt", "r", stdin);
//#endif // LOCAL_TEST
//
//	int n = 0;
//	int min = 1000001, max = -1000001;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	cout << min << " " << max;
//	delete[] arr;
//	return 0;
//}

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(false);
	int n = 0;
	int min = 1000001, max = -1000001;
	//scanf("%d", &n);
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		int s = 0;
		//scanf("%lf", &s);
		cin >> s;
		if (s > max)
		{
			max = s;
		}
		if (s < min)
		{
			min = s;
		}
		cout << s << " ";
	}
	cout << "\n";
	//printf("%.0f %.0f", min, max);
	cout << min << " " << max;
	return 0;
}