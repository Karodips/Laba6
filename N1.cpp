#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	n = n % 60;
	cout << n << endl;
	system("pause");
	return 0;
}
