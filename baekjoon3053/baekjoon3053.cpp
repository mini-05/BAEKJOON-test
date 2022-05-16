#include <iostream>
#define _USE_MATH_DEFINES // math.h의 수식 활용
#include <math.h>

using namespace std;

int main()
{
	double r, ua, ta; // 반지름, uclid area, taxi area
	cin >> r;

	cout << fixed; // 소숫점 출력 크기 설정
	cout.precision(6); // 소수점 이하 6개 출력
	
	ua = r * r * M_PI; // #define과 math.h에서 M_PI 가져옴
	cout << ua << "\n";
	
	ta = r * r * 2;
	cout << ta;

	return 0;
}