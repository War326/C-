#include <iostream>
using namespace std;
int main() {
	cout << "�㿼�Կ��˶��ٷ�:" << endl;
	int i;
	cin >> i;
	if (i <= 100 && i >= 90)
		cout << "\n��";
	if (i <= 90 && i >= 80)
		cout << "\n��";
	if (i <= 80 && i >= 60)
		cout << "\n��";
	if (i <= 60 && i >= 0)
		cout << "\n��";
	return 0;
}
