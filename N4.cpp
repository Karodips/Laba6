
#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	if (c <= a && c <= b) {
		a = a * b;
		c = c * c;
		b = (a - a % c) / c;
		a = a % c;
		cout << b << " " << a << endl;
	}
	else cout << "0 " << "0\n";
	system("pause");
	return 0;
}
