#pragma warning(disable:4996)
#define LOCAL

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(int argc, char* argv)
{
#ifdef LOCAL
	clock_t start, end;
	double result;
	start = clock();
	freopen("input.txt", "r", stdin);
#endif // LOCAL
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n = 0;
	queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++)
		q.push(i + 1);
	while (q.size() > 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << "\n";

#ifdef LOCAL
	end = clock();
	result = (double)(end - start);
	cout << "\n\n" << result / 1000 << "??\n";
#endif // LOCAL

	return 0;
}