#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

#include <iostream>
#include <string>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int a, b, c, mul;
	int sum[10]{ 0 };
	cin >> a >> b >> c;
	mul = a * b * c;
	string s = to_string(mul);

	for (char ch : s) // 문자열의 문자들을 하나씩 꺼내온다. (foreach문 활용)
					  // 문자를 숫자로 변환한 값의 인덱스를 1 증가시킨다.
		sum[ch - '0']++; // 0의 ASCII = 48이고, arr[size]++는 arr[size]의 '값'을 ++한다.

	for (int v : sum)
		cout << v << "\n";

	return 0;
}