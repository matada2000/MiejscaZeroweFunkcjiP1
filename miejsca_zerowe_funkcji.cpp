#include <iostream>

using namespace std;

int main() {

	float a, b, mz;

	cout << "Podaj a: ", cin >> a;
    cout << "Podaj b: ", cin >> b;
		
    if(a == 0 && b == 0){
        cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
    } else if(a == 0 && b != 0){
        cout << "Funkcja nie ma miejsc zerowych" << endl;
    } else{
        mz = -b / a;
        cout << "Miejsce zerowe tej funkcji wynosi: " << mz << endl;
    }
    
	return 0;
}
