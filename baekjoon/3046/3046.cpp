#pragma warning(disable:4996)
#define LOCAL

#include <iostream>
using namespace std;
int main()
{
#ifdef LOCAL
	clock_t start, end;
	double result;
	start = clock();
	freopen("input.txt", "r", stdin);
#endif // LOCAL

	int r1, s;
	cin >> r1 >> s;
	cout << 2 * s - r1;

#ifdef LOCAL
	end = clock();
	result = (double)(end - start);
	cout << "\n\n" << result / 1000 << "ÃÊ\n";
#endif // LOCAL

	return 0;
}