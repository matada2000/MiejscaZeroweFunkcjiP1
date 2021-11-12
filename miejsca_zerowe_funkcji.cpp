#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float a, b, c, mz_1, mz_2, delta;

	cout << "Podaj a: ", cin >> a;

	if (a == 0) {
		cout << "a nie moze wynosic 0" << endl;
	}
	else {
		cout << "Podaj b: ", cin >> b;
		cout << "Podaj c: ", cin >> c;

		delta = (b*b) - (4*a*c);

		if(delta < 0){
            cout << "Brak miejsc zerowych" << endl;
		}

		if(delta == 0){
            mz_1 = -b / (2*a);

            cout << "Miejsce zerowe tej funkcji wynosi: " << mz_1 << endl;
		}

		if(delta > 0) {
            mz_1 = (-b - sqrt(delta))/(2*a);
            mz_2 = (-b + sqrt(delta))/(2*a);

            cout << "Miejsca zerowe tej funkcji wynosza: " << mz_1 << " oraz " << mz_2 << endl;
		}
	}

	return 0;
}
