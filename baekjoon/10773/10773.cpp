#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

#include <iostream>
#include <stack>
using namespace std;
int main()
{
	//cin.tie(0)->sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	stack<int> s;

	int k, sum = 0;
	scanf("%d", &k);
	while (k--)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
		{
			sum -= s.top();
			s.pop();
		}
		else
		{
			s.push(n);
			sum += n;
		}
	}
	printf("%d", sum);
	return 0;
}