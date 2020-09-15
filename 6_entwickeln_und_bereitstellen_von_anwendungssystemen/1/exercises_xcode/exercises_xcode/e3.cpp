#include <stdlib.h>
#include <iostream>
using namespace std;
// because otherwise, i'd have to always write std::cout, std::endline etc.

int main() {
	//typ name <-- variable
	int zahl1, zahl2, zahl3, zahl4;

	cout << "Zahl 1?\n";
	cin >> zahl1;
	cout << "Zahl 2?\n";
	cin >> zahl2;
	cout << "Zahl 3?\n";
	cin >> zahl3;

	double summe = zahl1 + zahl2 + zahl3;
	double ergebnis = summe/3;
	//3.0 because if it would be 3, 
	//it would return a rounded integer, not float

	cout << "Mittelwert:\n";
	cout << ergebnis << endl;
}
