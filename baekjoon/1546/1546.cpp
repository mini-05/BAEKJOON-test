#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
#include <stdio.h>
//using namespace std;
int main()
{/*
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);*/
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	unsigned int n, m = 0;
	float sum = 0;
	scanf("%d", &n);
	float* score = new float[n];
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		scanf("%d", &s);
		score[i] = s;
		if (s > m)
			m = s;
	}
	for (int i = 0; i < n; i++)
	{
		score[i] = (score[i] / m) * 100;
		sum += score[i];
	}
	float avg = (float)sum / n;
	printf("%2.7f\n", avg);
	//cout << avg << "\n";
	delete[] score;
	return 0;
}