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
			ai = a[--aSize] - '0'; // ���ڷ� ��ȯ

		int bi = 0;
		if (bSize > 0)
			bi = b[--bSize] - '0'; // ���ڷ� ��ȯ

		int sum = ai + bi + upper;
		upper = sum / 10; // �ø� �ڸ��� ����
		sum = sum % 10;   // �� ���� �� ����
		
		char num = sum + '0'; // ���ڷ� ��ȯ
		res = res + num; // �� �ڸ� ���� ���� char�� 1���� ����
	}
	if (upper > 0)
		res += upper + '0'; // ���ڷ� ��ȯ
	//reverse(res.begin(), res.end());
	//cout << res << "\n";
	for (int i = res.length() - 1; i >= 0; i--)
		cout << res[i];

	return 0;
}