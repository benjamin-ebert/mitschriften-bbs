//eingabe zwei zahlen
//vergleiche welche zahl größer
//ausgabe beide zahlen mit ergebnis

#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
	
	int z1, z2;
	cout << "Geben Sie eine Zahl ein: " << endl;
	cin >> z1;
	cout << "Geben Sie eine zweite Zahl ein: " << endl;
	cin >> z2;

	z1 > z2 ? cout << z1 << " ist größer als " << z2 : cout << z1 << " ist nicht größer als " << z2 << endl;
}
