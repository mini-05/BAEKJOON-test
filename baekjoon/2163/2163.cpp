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

	int n, m;
	std::cin >> n >> m;
	std::cout << n * m - 1;

#ifdef LOCAL
	end = clock();
	result = (double)(end - start);
	cout << "\n\n" << result / 1000 << "ÃÊ\n";
#endif // LOCAL

	return 0;
}