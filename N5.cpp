#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int year, cent;
	cin >> year;
	cent = year / 100;
	if (year % 100 == 0) cout << (cent - 1) << endl;
	else cout << cent << endl;
	system("pause");
	return 0;
}
