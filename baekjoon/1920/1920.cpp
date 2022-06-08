#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <algorithm>
//#define endl '\n'
//#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);
//using namespace std;
//int N;
//int arrn[100001];
//int binarySearch(int n, int arr[])
//{
//	int low = 0, high = N - 1, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (arrn[mid] == n)
//		{
//			//cout << "1\n";
//			return 1;
//		}
//		else if (arrn[mid] < n)
//			low = mid + 1;
//		else if (arrn[mid] > n)
//			high = mid - 1;
//	}
//	//cout << "0\n";
//	return 0;
//}
//int main()
//{
//#ifndef ONLINE_JUDGE
//	FILE* fp = freopen("input.txt", "r", stdin);
//#else
//	FAST_IO;
//#endif // ONLINE_JUDGE
//
//	int m;
//	cin >> N;
//	/*int* arrn = new int[N];*/
//	for (int i = 0; i < N; i++)
//	{
//		int t;
//		cin >> t;
//		arrn[i] = t;
//	}
//
//	sort(arrn, arrn + N);
//
//	//scanf("%d", &m);
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int t;
//		cin >> t;
//		//scanf("%d", &t);
//		cout << binarySearch(t, arrn) << "\n";
//	}
//
//	//delete[] arrn;
//
//#ifndef BOJ
//	// 출력
//#endif // BOJ
//
//	return 0;
//}

#include <iostream>
#include <algorithm> // sort, 2진탐색 함수를 이용
#include <vector>
//using namespace std;
int main()
{
	FILE* fp = freopen("input.txt", "r", stdin);
	std::vector<int> v;

	int n, temp;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		std::cout << std::binary_search(v.begin(), v.end(), temp) << '\n';
	}
	return 0;
}