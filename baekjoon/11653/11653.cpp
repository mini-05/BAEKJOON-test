#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
constexpr auto endl = '\n';
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	FILE* fp = freopen("input.txt", "r", stdin);
#else
	FAST_IO;
#endif

	int n, cnt = 2;
	scanf("%d", &n);


	while (1)
	{
		if (n <= 1)
			break;
		if (n % cnt == 0)
		{
			printf("%d\n", cnt);
			n /= cnt;
			cnt = 2;
		}
		else if (n % cnt != 0)
		{
			cnt++;
			continue;
		}
#ifndef BOJ
		cout << "n: " << n << "\tcnt: " << cnt << "\n";
#endif
	}

	return 0;
}