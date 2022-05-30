#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
int main()
{
	int iSize = 0;
	cin >> iSize;

	for (int i = 0; i < iSize; ++i)
	{
		stack<char> st;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); ++j)
		{
			if (st.empty() || s[j] == '(') st.push(s[j]);
			else if (st.top() == '(') st.pop();
		}
		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}





//#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_WARNINGS
//#define LOCAL_TEST
//
//#include <iostream>
//#include <stack>
//using namespace std;
//string checkVPS(string str);
//int main()
//{
//	//cin.tie(0)->sync_with_stdio(false);
//	cin.tie(NULL);	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//#ifdef LOCAL_TEST
//	FILE* fp = freopen("input.txt", "r", stdin);
//#endif // LOCAL_TEST
//
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		string str, res;
//		cin >> str;
//		res = checkVPS(str);
//		cout << res << "\n";
//	}
//	return 0;
//}
//string checkVPS(string str)
//{
//	stack<char> s;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == '(')
//			s.push('(');
//		else
//		{
//			if (s.empty())
//				return "NO";
//			s.pop();
//		}
//	}
//	if (s.empty())
//		return "YES";
//	else
//		return "NO";
//}



//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//bool vps(string ps) {
//    stack<char> s;
//    bool sw = true;
//    for (int i = 0; i < ps.size(); ++i) {
//        if (ps[i] == '(')
//            s.push(ps[i]);
//        else if (!s.empty() && ps[i] == ')')
//            s.pop();
//        else if (s.empty() && ps[i] == ')') {
//            sw = false;
//            break;
//        }
//
//    }
//    if (s.empty() && sw) return true;
//    else return false;
//}
//int main() {
//    int num;
//    string ps;
//    cin >> num;
//    for (int i = 0; i < num; ++i) {
//        cin >> ps;
//        if (vps(ps)) cout << "YES" << endl;
//        else cout << "NO" << endl;
//    }
//}



//#include<iostream>
//#include<stack>
//#include<string> 
//using namespace std;
//bool Check(string str)
//{
//	int len = (int)str.length(); // 문자열 길이
//	stack<char> st;		// char 타입을 받는 stck 선언
//	for (int i = 0; i < len; i++)  // 문자열 길이만큼 반복문
//	{
//		char c = str[i];	// 문자 하나씩 받음
//		if (c == '(')
//		{
//			st.push(str[i]);	// 여는 괄호면 push
//		}
//		else {
//			if (!st.empty())
//				//닫는 괄호면 stack 이 비어있는지 확인후         
//				st.pop();	// 스택이 비어있지 않으면 pop   
//
//			else
//				return false; // 비어있으면 false
//
//		}
//	}
//	return st.empty();			//반복문이 끝나고 스택에 괄호가 남아있으면 false
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string str;
//		cin >> str;
//		if (Check(str))
//			cout << "YES" << "\n";
//		else  
//			cout << "NO" << "\n";
//	}
//	return 0;
//}



//#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_WARNINGS
//#define LOCAL_TEST
//
//#include <iostream>
//#include <stack>
//using namespace std;
//int main()
//{
//	//cin.tie(0)->sync_with_stdio(false);
//	cin.tie(NULL);	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//#ifdef LOCAL_TEST
//	FILE* fp = freopen("input.txt", "r", stdin);
//#endif // LOCAL_TEST
//
//	stack<char> s;
//
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		string str, res = "0";
//		cin >> str;
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == '(')
//				s.push('(');
//			else
//			{
//				if (s.empty())
//				{
//					res = "NO";
//					break;
//				}
//				s.pop();
//			}
//		}
//		if (res == "NO")
//			res = "NO";
//		else
//		{
//			if (s.empty())
//				res = "YES";
//			else
//				res = "NO";
//		}
//		cout << res << "\n";
//	}
//
//	return 0;
//}