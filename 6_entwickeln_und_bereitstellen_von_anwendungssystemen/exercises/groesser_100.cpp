// beliebig viele zahlen eingeben
// ende mit eingabe 0
// für jede zahl zahl anzeigen und text ob größer 100

#include <iostream>
using namespace std;

int main() {
	
	int z;
	
	while (z != 0) {
		cout << "Geben Sie eine beliebige Zahl ein. Beenden mit Eingabe 0" << endl;
		cin >> z;
		z > 100 ? cout << z << " ist größer als 100" << endl : cout << z << " ist nicht größer als 100" << endl;
	}

	cout << "Programm beendet." << endl;

	return 0;
}
