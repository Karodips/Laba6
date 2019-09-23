#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	a = a * b;
	c = c * c;
	b = a / c;
	a = a % c;
	cout << b << " " << a << endl;
	system("pause");
	return 0;
}
