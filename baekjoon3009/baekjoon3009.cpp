#include <iostream>
using namespace std;
void in(int a[], int i)
{
	for (int j = 0; j < i; j++)
		cin >> a[j];
}

int* find(int a[], int i)
{
	//int temp[6] = { 0 };

	if (a[0] == a[2])
		a[0] = a[4];
	else if (a[0] == a[4])
		a[0] = a[2];
	else if (a[2] == a[4])
		a[0] = a[0];

	if (a[1] == a[3])
		a[1] = a[5];
	else if (a[1] == a[5])
		a[1] = a[3];
	else if (a[3] == a[5])
		a[1] = a[1];

	return a;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int p[6];
	in(p, 6);
	int* res;
	res = find(p, 6);
	/*for (int i = 0; i < 6; i++)
		cout << res[i] << "\t";
	cout << "\n";*/
	cout << res[0] << " " << res[1];
}