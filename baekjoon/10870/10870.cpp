#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);	//cin.tie(0)->sync_with_stdio(false);
	ios::sync_with_stdio(false);
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int n, fn = 1, fnn = 0;
	scanf("%d", &n);
	//cin >> n;
	if (n == 0)
		fn = 0;
	else
	{
		while (--n)
		{
			int temp = fn;
			fn += fnn;
			fnn = temp;
		}
	}
	printf("%d", fn);
	//cout << fn;

	return 0;
}