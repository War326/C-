#include<iostream>
using namespace std;
int prime(int n)
{
	if (n>1)
	{
		int i = n - 1;
		while (n%i != 0)
		{
			i--;
		}
		if (i == 1)
			return 1;
		else return 0;
	}
	else return 0;
}
int main()
{
	int a;
	cout << "������һ������" << endl;
	while (1<2)
	{
		cin >> a;
		if (prime(a) != 0)
			cout << a << "������" << endl;
		else
			cout << a << "��������" << endl;
	}
	return 0;
}
