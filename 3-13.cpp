#include<iostream>
using namespace std;

int fib(int n)
{
	return(n>2) ? fib(n - 1) + fib(n - 2) : 1;
}
int main()
{
	int a;
	cout << "������һ�������е����֣�" << endl;
	cin >> a;
	cout << "���Ϊ��" << fib(a) << endl ;
}
