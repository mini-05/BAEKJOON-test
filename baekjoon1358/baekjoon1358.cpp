#include <iostream>
using namespace std;

int main()
{
	int w, h, x0, y0, r, p, cnt = 0;
	cin >> w >> h >> x0 >> y0 >> p;
	int x[50] = { 0 }, y[50] = { 0 };
	r = h / 2;
	for (int i = 0; i < p; i++) // ���� ��ġ �Է�
		cin >> x[i] >> y[i];
	for (int i = 0; i < p; i++)
	{
		if ((x[i] >= x0 && y[i] >= y0) && (x[i] < x0 + w + h && y[i] <= y0 + w + h))
		{
			cnt++; // �׸�ڽ� �ȿ� ������ cnt++
			cout << "ù��° ����\n";
			cout << "���� �� ������ ��ġ��: " << x[i] << "\t" << y[i] << "\n";
		}
		else if ((x0 <= x[i]) && (r < sqrt((x0 - x[i]) * (x0 - x[i]) + (y0 + r - y[i]) * (y0 + r - y[i]))))
		{
			cnt++;
			cout << "�ι�° ����\n";
			cout << "���� �� ������ ��ġ��: " << x[i] << "\t" << y[i] << "\n";
		}
		else if ((x0 + w >= x[i]) && (r < sqrt((x0 - x[i]) * (x0 - x[i]) + (y0 + r - y[i]) * (y0 + r - y[i]))))
		{
			cnt++;
			cout << "����° ����\n";
			cout << "���� �� ������ ��ġ��: " << x[i] << "\t" << y[i] << "\n";
		}
		else
			continue;
	}
	cout << cnt;
	return 0;
}