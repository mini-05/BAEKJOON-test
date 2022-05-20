//#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNNINGS
//#define LOCAL

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif // LOCAL

	//int c = 0, n = 0, s = 0, count = 0;
	//cin >> c;
	//while (c--)
	//{
	//	float sum = 0, avg = 0;
	//	cin >> n;
	//	float init = n;
	//	while (n--)
	//	{
	//		cin >> s;
	//		sum += s;
	//	}
	//	avg = sum / init;


	//	printf("%.3f\%\n", count / init);
	//	//cout << (count / init) * 100 << "%\n";
	//}

	int c, n;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		float cnt = 0;
		float sumavg[2]{ 0 };
		scanf("%d", &n);
		int* score = new int[n];
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[j]);
			sumavg[0] += score[j];
		}
		sumavg[1] = sumavg[0] / n;
		for (int j = 0; j < n; j++)
		{
			if (sumavg[1] < score[j])
				cnt += 1;
		}
		float result = (cnt / n) * 100;
		//float result = (static_cast<float>(cnt) / n) * 100;
		printf("%.3f%%\n", result);
		delete[] score;
	}

	return 0;
}