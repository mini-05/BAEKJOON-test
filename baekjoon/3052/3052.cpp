#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define LOCAL_TEST

//#include <iostream>
//using namespace std;
#include <stdio.h>
int main()
{
#ifdef LOCAL_TEST
	FILE* fp = freopen("input.txt", "r", stdin);
#endif // LOCAL_TEST

	int arr[10]{ 0 };
	int res[42]{ 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		//int temp = arr[i];
		arr[i] = arr[i] % 42;
		res[arr[i] % 42]++;
		/*switch (arr[i])
		{
		case 0: {res[0]++; break; }
		case 1: {res[1]++; break; }
		case 2: {res[2]++; break; }
		case 3: {res[3]++; break; }
		case 4: {res[4]++; break; }
		case 5: {res[5]++; break; }
		case 6: {res[6]++; break; }
		case 7: {res[7]++; break; }
		case 8: {res[8]++; break; }
		case 9: {res[9]++; break; }
		case 10: {res[10]++; break; }
		case 11: {res[11]++; break; }
		case 12: {res[12]++; break; }
		case 13: {res[13]++; break; }
		case 14: {res[14]++; break; }
		case 15: {res[15]++; break; }
		case 16: {res[16]++; break; }
		case 17: {res[17]++; break; }
		case 18: {res[18]++; break; }
		case 19: {res[19]++; break; }
		case 20: {res[20]++; break; }
		case 21: {res[21]++; break; }
		case 22: {res[22]++; break; }
		case 23: {res[23]++; break; }
		case 24: {res[24]++; break; }
		case 25: {res[25]++; break; }
		case 26: {res[26]++; break; }
		case 27: {res[27]++; break; }
		case 28: {res[28]++; break; }
		case 29: {res[29]++; break; }
		case 30: {res[30]++; break; }
		case 31: {res[31]++; break; }
		case 32: {res[32]++; break; }
		case 33: {res[33]++; break; }
		case 34: {res[34]++; break; }
		case 35: {res[35]++; break; }
		case 36: {res[36]++; break; }
		case 37: {res[37]++; break; }
		case 38: {res[38]++; break; }
		case 39: {res[39]++; break; }
		case 40: {res[40]++; break; }
		case 41: {res[41]++; break; }
		default:
			break;
		}*/
	}
	int cnt = 0;
	for (int i = 0; i < sizeof(res)/sizeof(int); i++)
		if (res[i] >= 1)
			cnt++;
	printf("%d", cnt);
	return 0;
}