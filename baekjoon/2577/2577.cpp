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

	for (char ch : s) // ���ڿ��� ���ڵ��� �ϳ��� �����´�. (foreach�� Ȱ��)
					  // ���ڸ� ���ڷ� ��ȯ�� ���� �ε����� 1 ������Ų��.
		sum[ch - '0']++; // 0�� ASCII = 48�̰�, arr[size]++�� arr[size]�� '��'�� ++�Ѵ�.

	for (int v : sum)
		cout << v << "\n";

	return 0;
}