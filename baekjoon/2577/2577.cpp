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

	int a, b, c;
	int count[10]{ 0 };
	cin >> a >> b >> c;
	int mul = a * b * c;

	while (mul != 0)
	{
		count[mul % 10]++;	// mul���� ������ 10�� ���� �ڸ����� ��� �ε����� ���
							// mul�� 1���ڸ��� index�� �ȴ�.
		mul /= 10;			// �� ȸ �ڸ����� ���̱� ���� 10�� ������.
							// index�� �� mul�� 1���ڸ��� ���ش�.
	}

	for (int v : count) // 0���� 9���� count �迭�� ����Ѵ�. (foreach�� Ȱ��)
		cout << v << "\n";

	// %10�� index, foreach�� ���
	/*int a, b, c;
	int count[10]{ 0 };
	cin >> a >> b >> c;
	int mul = a * b * c;

	while (mul != 0)
	{
		count[mul % 10]++; // mul���� ������ 10�� ���� �ڸ����� ��� �ε����� ���
						   // mul�� 1���ڸ��� index�� �ȴ�.
		mul /= 10;		   // �� ȸ �ڸ����� ���̱� ���� 10�� ������.
						   // index�� �� mul�� 1���ڸ��� ���ش�.
	}

	for (int v : count) // 0���� 9���� count �迭�� ����Ѵ�. (foreach�� ���)
		cout << v << "\n"; //*/

	// foreach�� Ȱ��
	/*int a, b, c, mul;
	int sum[10]{ 0 };
	cin >> a >> b >> c;
	mul = a * b * c;
	string s = to_string(mul); // mul�� string�������� �ٲپ��ִ� to_string

	for (char ch : s) // ���ڿ��� ���ڵ��� �ϳ��� �����´�. (foreach�� Ȱ��)
					  // ���ڸ� ���ڷ� ��ȯ�� ���� �ε����� 1 ������Ų��.
		sum[ch - '0']++; // 0�� ASCII = 48�̰�, arr[size]++�� arr[size]�� '��'�� ++�Ѵ�.

	for (int v : sum)
		cout << v << "\n"; // */

	return 0;
}