//#pragma warning(disable:4996)
//#define LOCAL_TEST
//#include <iostream>
//#include <string>
//
//using namespace std;
//struct stack 
//{
//	int arr[10000];
//	int last;
//
//	void init() {
//		last = -1;
//	}
//	void push(int data) {
//		arr[++last] = data;
//	}
//	bool empty() {
//		return (last < 0);
//	}
//	int pop() {
//		if (empty()) {
//			return -1;
//		}
//		return arr[last--];
//	}
//	int size() {
//		return last + 1;
//	}
//	int top() {
//		if (empty()) {
//			return -1;
//		}
//		return arr[last];
//	}
//};
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	int n;
//	cin >> n;
//	stack s;
//	s.init();
//	for (; n--;) {
//		string str;
//		int num;
//		cin >> str;
//		if (str == "push") {
//			cin >> num;
//			s.push(num);
//		}
//		if (str == "pop") {
//			cout << s.pop() << "\n";
//		}
//		if (str == "size") {
//			cout << s.size() << "\n";
//		}
//		if (str == "empty") {
//			cout << s.empty() << "\n";
//		}
//		if (str == "top") {
//			cout << s.top() << "\n";
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <string>
#define MAX_SIZE 10000
using namespace std;

template <typename T>

class stack
{
private:
	T data[MAX_SIZE];
	int _top;

public:
	stack()
	{
		_top = -1;
	}
	~stack()
	{	}
	void push(T inputdata)
	{
		data[_top + 1] = inputdata;
		_top += 1;
	}
	T pop()
	{
		T res = data[_top];
		_top -= 1;
		return res;
	}
	int size() 
	{
		return _top + 1;
	}
	bool empty()
	{
		return size() == 0 ? true : false;
	}
	T top()
	{
		T res = data[_top];
		return res;
	}
};

int main() {

	cout.tie(0); cin.tie(0);
	ios_base::sync_with_stdio(false);

	stack<int> s;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string com;
		cin >> com;
		if (com == "push")
		{
			int data;
			cin >> data;
			s.push(data);
		}
		else if (com == "pop")
		{
			if (s.empty())
				cout << "-1\n";
			else 
				cout << s.pop() << "\n";
		}
		else if (com == "size")
			cout << s.size() << "\n";
		else if (com == "empty")
			cout << s.empty() << "\n";
		else
		{
			if (s.empty())
				cout << "-1\n";
			else 
				cout << s.top() << "\n";
		}
	}
	return 0;
}