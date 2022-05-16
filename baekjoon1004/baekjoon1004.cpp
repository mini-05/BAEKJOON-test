#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t, x1, x2, y1, y2, n = 50;
	cin >> t;

	while (t--)
	{
		int cnt = 0;
		cin >> x1 >> y1 >> x2 >> y2 >> n;
		/*int* px = new int[n];
		int* py = new int[n];
		int* r = new int[n];*/
		int px[50] = { 9999 };
		int py[50] = { 9999 };
		int r[50] = { 9999 };

		for (int i = 0; i < n; i++)
			cin >> px[i] >> py[i] >> r[i];

		for (int i = 0; i < n; i++)
		{
			//cout << px[i] << "\t" << py[i] << "\t" << r[i] << "\n";
			//if (r[i] < sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))) // r보다 두 점 거리가 클 때
				if ((r[i] * r[i] > (px[i] - x1) * (px[i] - x1) + (py[i] - y1) * (py[i] - y1)) && (r[i] * r[i] < (px[i] - x2) * (px[i] - x2) + (py[i] - y2) * (py[i] - y2)))
					cnt++; // 출발/도착점이 행성 내부에 있으면 (행성원점까지 거리가 r보다 작으면) ++
				else if ((r[i] * r[i] < (px[i] - x1) * (px[i] - x1) + (py[i] - y1) * (py[i] - y1)) && (r[i] * r[i] > (px[i] - x2) * (px[i] - x2) + (py[i] - y2) * (py[i] - y2)))
					cnt++; // 출발/도착점이 행성 내부에 있으면 (행성원점까지 거리가 r보다 작으면) ++
		}

		/*delete[] r;
		delete[] py;
		delete[] px;*/
		cout << "\t\t\t" << cnt << "\n";
	}

	return 0;
}