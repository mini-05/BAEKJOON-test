#include <iostream>
#define _USE_MATH_DEFINES // math.h�� ���� Ȱ��
#include <math.h>

using namespace std;

int main()
{
	double r, ua, ta; // ������, uclid area, taxi area
	cin >> r;

	cout << fixed; // �Ҽ��� ��� ũ�� ����
	cout.precision(6); // �Ҽ��� ���� 6�� ���
	
	ua = r * r * M_PI; // #define�� math.h���� M_PI ������
	cout << ua << "\n";
	
	ta = r * r * 2;
	cout << ta;

	return 0;
}