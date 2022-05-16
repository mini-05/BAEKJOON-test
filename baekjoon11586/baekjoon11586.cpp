#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, i = 0;
	cin >> n;

	string* princess = new string[n]; // �� �����Ҵ�

	for (i = 0; i < n; i++)
		cin >> princess[i]; // ������� �Է�

	cin >> k;

	switch (k)
	{
	case 1:  // �״��
		for (i = 0; i < n; i++)
			cout << princess[i] << "\n";
		break;
	case 2: // �¿����
		for (i = 0; i < n; i++)
		{
			reverse(princess[i].begin(), princess[i].end());
			cout << princess[i] << "\n";
		}
		break;
	case 3: // ���Ϲ���
		for (i = 0; i < n; i++)
			cout << princess[n - i - 1] << "\n";
		break;
	}

	delete[] princess; // �� �޸� ����

	return 0;
}