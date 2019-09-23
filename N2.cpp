#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string nedelya[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	int n;
	cin >> n;
	n = n % 6;
	if (n != 3) cout << nedelya[n] << endl;
	else cout << "It is " << nedelya[n] << " my dude" << endl;
	system("pause");
	return 0;
}
