#pragma warning(disable:4996)
#define LOCAL

#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif // LOCAL

	int n = 0;
	int* a, * b, * ra;
	cin >> n;
	a = new int[n];
	b = new int[n];
	ra = new int[n];

	delete[] ra;
	delete[] b;
	delete[] a;

	return 0;
}