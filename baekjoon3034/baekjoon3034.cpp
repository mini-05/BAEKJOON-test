#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, w, h, i;
	string s;
	cin >> n >> w >> h;

	while (n--)
	{
		cin >> i;
		s = (i * i > w * w + h * h) ? "NE" : "DA";
		cout << s << "\n";
	}

	return 0;
}