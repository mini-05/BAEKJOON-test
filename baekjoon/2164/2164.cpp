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

	int n = 0;
	cin >> n;
	int* card = new int[n];

	for (int i = 0; i < n; i++)
		card[i] = i + 1;

	while (n != 1)
	{
		for (int i = 0; i < n; i++)
			card[i] = card[i + 1];
		int temp = card[0];
		for (int i = 0; i < n - 1; i++)
			card[i] = card[i + 1];
		card[n - 2] = temp;
		n--;
	}
	cout << card[0];

	delete[] card;

#ifdef LOCAL
	end = clock();
	result = (double)(end - start);
	cout << "\n\n" << result / 1000 << "ÃÊ\n";
#endif // LOCAL

	return 0;
}