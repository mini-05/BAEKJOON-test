#include <iostream>
using namespace std;

int main()
{
	int w, h, x0, y0, r, p, cnt = 0;
	cin >> w >> h >> x0 >> y0 >> p;
	int x[50] = { 0 }, y[50] = { 0 };
	r = h / 2;
	for (int i = 0; i < p; i++) // 선수 위치 입력
		cin >> x[i] >> y[i];
	for (int i = 0; i < p; i++)
	{
		if ((x[i] >= x0 && y[i] >= y0) && (x[i] < x0 + w + h && y[i] <= y0 + w + h))
		{
			cnt++; // 네모박스 안에 있으면 cnt++
			cout << "첫번째 실행\n";
			cout << "실행 된 선수의 위치는: " << x[i] << "\t" << y[i] << "\n";
		}
		else if ((x0 <= x[i]) && (r < sqrt((x0 - x[i]) * (x0 - x[i]) + (y0 + r - y[i]) * (y0 + r - y[i]))))
		{
			cnt++;
			cout << "두번째 실행\n";
			cout << "실행 된 선수의 위치는: " << x[i] << "\t" << y[i] << "\n";
		}
		else if ((x0 + w >= x[i]) && (r < sqrt((x0 - x[i]) * (x0 - x[i]) + (y0 + r - y[i]) * (y0 + r - y[i]))))
		{
			cnt++;
			cout << "세번째 실행\n";
			cout << "실행 된 선수의 위치는: " << x[i] << "\t" << y[i] << "\n";
		}
		else
			continue;
	}
	cout << cnt;
	return 0;
}