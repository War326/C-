#include<iostream>
#include<string>
using namespace std;
class Data {
public:
	Data(int y, int m, int d);
	Data() {};
	void setData();
	void showData();
private:
	int year;
	int month;
	int day;
};
Data::Data(int y, int m, int d) {
	year = y;
	month = m;
	day = y;
}
void Data:: setData() {
	cin >> year >> month >> day;
}
void Data::showData() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}
Data birthday;
class People
{
public://�ⲿ�ӿ�
	People(int NewNumber, char NewSex, int y, int m, int d, string NewID);//���캯��
	People() {}
	~People() {}//����������
	People(People &p);//��������
	void input();//������Ա��Ϣ
	void output();//�����Ա��Ϣ
private://˽�нӿ�
	int Number;
	char Sex;
	Data birthday;
	string ID;

};
People::People(int NewNumber, char NewSex, int y, int m, int d, string NewID) :birthday(y, m, d) //���캯��
{
	Number = NewNumber;
	Sex = NewSex;
	ID = NewID;

}

void People::input()//���������Ա����Ϣ
{
	cout << "�����������Ա����Ϣ��" << endl;
	cout << "��ţ� ";
	cin >> Number;
	cout << "�Ա� ";
	cin >> Sex;
	cout << "���գ� ";
	birthday.setData;
	cout << "ID�ţ� ";
	cin >> ID;
	cout << "\n" << endl;

}
inline void People::output()//������Ա����
{
	cout << "�� ��**�Ա�**�� �� �� ��**�� �� ֤ ��*******" << endl;
	cout << " " << Number << " " << Sex << " " <<birthday.showData << " " << ID << endl;

}
People::People(People &p)//��������
{
	Number = p.Number;
	Sex = p.Sex;
	birthday = p.birthday;
	ID = p.ID;
	cout << "�������������ã���" << endl;

}int main()
{
	People p;
	p.input();//������Ա��Ϣ
	p.output();//�����Ա��Ϣ
	return 0;

}
