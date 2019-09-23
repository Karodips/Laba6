#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string nedelya[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	int n, k;
	cout << "Сначала день потом неделя" << endl;
	cin >> k >> n;
	n = n - 1;
	k = (k+n) % 6;
	if (k != 3) cout << nedelya[k] << endl;
	else cout << "It is " << nedelya[k] << " my dude" << endl;
	system("pause");
	return 0;
}
