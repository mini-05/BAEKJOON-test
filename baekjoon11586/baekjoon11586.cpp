#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, i = 0;
	cin >> n;

	string* princess = new string[n]; // 행 동적할당

	for (i = 0; i < n; i++)
		cin >> princess[i]; // 원래모습 입력

	cin >> k;

	switch (k)
	{
	case 1:  // 그대로
		for (i = 0; i < n; i++)
			cout << princess[i] << "\n";
		break;
	case 2: // 좌우반전
		for (i = 0; i < n; i++)
		{
			reverse(princess[i].begin(), princess[i].end());
			cout << princess[i] << "\n";
		}
		break;
	case 3: // 상하반전
		for (i = 0; i < n; i++)
			cout << princess[n - i - 1] << "\n";
		break;
	}

	delete[] princess; // 행 메모리 해제

	return 0;
}