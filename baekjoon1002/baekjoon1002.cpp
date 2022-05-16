#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2 && r1 == r2)
			cout << "\t\t\t" << -1 << "\n";
		else if (x1 == x2 && y1 == y2 && r1 != r2)
			cout << "\t\t\t" << 0 << "\n";
		else
		{
			if ((pow(x1 - x2, 2) + pow(y1 - y2, 2) == pow(r1 + r2, 2)) || (pow(x1 - x2, 2) + pow(y1 - y2, 2) == pow(r1 - r2, 2)))
				cout << "\t\t\t" << 1 << "\n";
			else if ((pow(x1 - x2, 2) + pow(y1 - y2, 2) > pow(r1 + r2, 2))|| (pow(x1 - x2, 2) + pow(y1 - y2, 2) < pow(r1 - r2, 2)))
				cout << "\t\t\t" << 0 << "\n";
			else if (pow(x1 - x2, 2) + pow(y1 - y2, 2) < pow(r1 + r2, 2))
				cout << "\t\t\t" << 2 << "\n";
		}
	}

	return 0;
}