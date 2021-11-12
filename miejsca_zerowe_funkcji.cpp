#include <iostream>

using namespace std;

int main() {

	float a, b, c, mz;

	cout << "Podaj a: ", cin >> a;
    cout << "Podaj b: ", cin >> b;
    cout << "Podaj c: ", cin >> c;

    if(a == 0 && c == 0){
        cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
    } else if(a == 0 && c != 0){
        cout << "Funkcja nie ma miejsc zerowych" << endl;
    } else{
        mz = -c / a;
        cout << "Miejsce zerowe tej funkcji wynosi: " << mz << endl;
    }
	return 0;
}
