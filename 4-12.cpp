#include "iostream"
using namespace std;
class datatype
{
private:
	float a;
	char b;
	int c;
public:
	datatype();
	~datatype();
	float GetFloat();
	char GetChar();
	int GetInt();
	void Print();
	void Input();
};
datatype::datatype()
{
	a = 0.0f;
	b = 'A';
	c = 0;
}
datatype::~datatype()
{
}
void datatype::Input()
{
	cout << "�������븡�������ַ�������" << endl;
	cin >> a >> b >> c;
}
void datatype::Print()
{
	cout << "���������Ϊ��" << endl;
	cout << a << " " << b << " " << c << endl;
}
float datatype::GetFloat()
{
	return a;
}
char datatype::GetChar()
{
	return b;
}
int datatype::GetInt()
{
	return c;
}
int main()
{
	datatype a;
	a.Input();
	a.Print();
	return 0;
}
