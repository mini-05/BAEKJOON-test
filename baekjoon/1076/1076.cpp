#pragma warning(disable:4996)
#define LOCAL

#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);
#ifdef LOCAL
	clock_t start, end;
	double result;
	start = clock();
	freopen("input.txt", "r", stdin);
#endif // LOCAL

	int reg[3]{ 0 };
	string input[3];
	string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };


	for (int i = 0; i < 3; i++)
		cin >> input[i];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 10; j++)
			if (input[i] == color[j])
			{
				reg[i] = j;
				break;
			}

	int num = reg[0] * 10 + reg[1];

	if (num == 0)
	{
		cout << "0\n";
		return 0;
	}
	else
	{
		cout << num;
		for (int i = 0; i < reg[2]; i++)
			cout << "0";
	}
	
#ifdef LOCAL
	end = clock();
	result = (double)(end - start);
	std::cout << "\n\n" << result / 1000 << "ÃÊ\n";
#endif // LOCAL

	return 0;
}