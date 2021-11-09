#include <iostream>

using namespace std;

int main() {

	float a, b, mz;

	cout << "Podaj a: ", cin >> a;

	if (a == 0) {
		cout << "a nie moze wynosic 0" << endl;
	}
	else {
		cout << "Podaj b: ", cin >> b;
		mz = -b / a;
		cout << "Miejsce zerowe tej funkcji wynosi: " << mz << endl;
	}

	return 0;
}
