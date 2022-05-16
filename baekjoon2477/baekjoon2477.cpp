#include <iostream>
int main()
{
	int a[6], len[6], k = 0, i, n = 0, sum = 0, max = 0;
	std::cin >> n;
	for (i = 0; i < 6; i++)
		std::cin >> a[i] >> len[i];
	for (i = 0; i < 6; i++)
	{
		if (max < len[i] * len[(i + 1) % 6])
		{
			max = len[i] * len[(i + 1) % 6];
			k = i;
		}
	}
	sum = len[(k + 3) % 6] * len[(k + 4) % 6];
	max -= sum;
	std::cout << max * n;
	return 0;
}