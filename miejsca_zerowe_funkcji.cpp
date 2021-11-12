#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float a, b, c, mz_1, mz_2, delta;

	cout << "Podaj a: ", cin >> a;
	cout << "Podaj b: ", cin >> b;
    cout << "Podaj c: ", cin >> c;

	if (a == 0) {
        if(b == 0 && c == 0) {
            cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
        } else if(b == 0 && c != 0) {
            cout << "Funkcja nie ma miejsc zerowych" << endl;
        } else {
            mz_1 = -c / b;

            cout << "Miejsce zerowe tej funkcji wynosi: " << mz_1 << endl;
        }
	}
	else {
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
