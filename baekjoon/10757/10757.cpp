#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

#include <iostream>
#include <string>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);	//cin.tie(0)->sync_with_stdio(false);
	ios::sync_with_stdio(false);
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	string a, b, res, ans;
	cin >> a >> b;
	int upper = 0, aSize = a.size(), bSize = b.size();

	while (aSize > 0 || bSize > 0)
	{
		int ai = 0;
		if (aSize > 0)
			ai = a[--aSize] - '0'; // 숫자로 변환

		int bi = 0;
		if (bSize > 0)
			bi = b[--bSize] - '0'; // 숫자로 변환

		int sum = ai + bi + upper;
		upper = sum / 10; // 올림 자릿수 설정
		sum = sum % 10;   // 각 수의 합 설정
		
		char num = sum + '0'; // 문자로 변환
		res = res + num; // 각 자리 수의 합을 char로 1개씩 붙임
	}
	if (upper > 0)
		res += upper + '0'; // 문자로 변환
	//reverse(res.begin(), res.end());
	//cout << res << "\n";
	for (int i = res.length() - 1; i >= 0; i--)
		cout << res[i];

	return 0;
}