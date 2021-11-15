#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int wybor;
	float a, b, c, mz_1, mz_2, delta;
	
	cout << "Wybierz Funkcje:" << endl;
	cout << "1 - Funkcja liniowa." << endl;
	cout << "2 - Funkcja kwadratowa." << endl;
	cout << endl;
	cout << "Wybieram: ", cin >> wybor;
	cout << endl;
	
	switch(wybor)
	{
	case 1:
		cout << "Podaj a: ", cin >> a;
		cout << "Podaj b: ", cin >> b;
		if(a == 0 && b == 0) {
            cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
        } else if(a == 0 && b != 0) {
            cout << "Funkcja nie ma miejsc zerowych" << endl;
        } else {
            mz_1 = -a / b;

            cout << "Miejsce zerowe tej funkcji wynosi: " << mz_1 << endl;
        }
	break;
	case 2:
		cout << "Podaj a: ", cin >> a;
		if(a==0){
			cout << "Pomyliles funkcje kolezko :)";
			return 0;
		}
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
	break;	
	}

	return 0;
}
