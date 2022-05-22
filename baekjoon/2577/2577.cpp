#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

#include <iostream>
#include <string>
using namespace std;
int main()
{
	cin.tie(NULL);	cout.tie(NULL);
	ios::sync_with_stdio(false);
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int a, b, c;
	int count[10]{ 0 };
	cin >> a >> b >> c;
	int mul = a * b * c;

	while (mul != 0)
	{
		count[mul % 10]++;	// mul에서 나머지 10을 통해 자릿수를 얻어 인덱스로 사용
							// mul의 1의자리가 index가 된다.
		mul /= 10;			// 매 회 자릿수를 줄이기 위해 10을 나눈다.
							// index가 된 mul의 1의자리를 없앤다.
	}

	for (int v : count) // 0부터 9까지 count 배열을 출력한다. (foreach문 활용)
		cout << v << "\n";

	// %10과 index, foreach문 사용
	/*int a, b, c;
	int count[10]{ 0 };
	cin >> a >> b >> c;
	int mul = a * b * c;

	while (mul != 0)
	{
		count[mul % 10]++; // mul에서 나머지 10을 통해 자릿수를 얻어 인덱스로 사용
						   // mul의 1의자리가 index가 된다.
		mul /= 10;		   // 매 회 자릿수를 줄이기 위해 10을 나눈다.
						   // index가 된 mul의 1의자리를 없앤다.
	}

	for (int v : count) // 0부터 9까지 count 배열을 출력한다. (foreach문 사용)
		cout << v << "\n"; //*/

	// foreach문 활용
	/*int a, b, c, mul;
	int sum[10]{ 0 };
	cin >> a >> b >> c;
	mul = a * b * c;
	string s = to_string(mul); // mul을 string형식으로 바꾸어주는 to_string

	for (char ch : s) // 문자열의 문자들을 하나씩 꺼내온다. (foreach문 활용)
					  // 문자를 숫자로 변환한 값의 인덱스를 1 증가시킨다.
		sum[ch - '0']++; // 0의 ASCII = 48이고, arr[size]++는 arr[size]의 '값'을 ++한다.

	for (int v : sum)
		cout << v << "\n"; // */

	return 0;
}