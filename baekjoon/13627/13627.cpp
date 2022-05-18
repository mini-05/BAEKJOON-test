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

	int n, r;
	cin >> n >> r;
	int* volunteer = new int[n];
	if (n == r)
		cout << "* ";
	else if(n != r)
	{
		for (int i = 0; i < n; i++)
			volunteer[i] = i + 1;
		for (int i = 0; i < r; i++)
		{
			int x;
			cin >> x;
			volunteer[x - 1] = 0;
		}
		for (int i = 0; i < n; i++)
		{
			if (volunteer[i] != 0)
			{
				cout << volunteer[i] << " ";
				continue;
			}
		}
	}

	delete[] volunteer;
#ifdef LOCAL
	end = clock();
	result = (double)(end - start);
	cout << "\n" << result / 1000 << "ÃÊ\n";
#endif // LOCAL

	return 0;
}