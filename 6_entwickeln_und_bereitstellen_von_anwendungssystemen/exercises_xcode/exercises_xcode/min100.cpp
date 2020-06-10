//aufforderung eingabe erste zahl   eingabe 20
//zahl1 = eingabe					zahl1 = 20
//cout zahl1						cout 20
//if zahl1 < 99
//	cout zahl1 ist kleiner als 99	20 ist kleiner als 99
//else
//	cout zahl1 ist größer als 99
//aufforderung eingabe zweite zahl	eingabe 99
//zahl2 = eingabe					zahl2 = 100
//	if zahl2 ist kleiner als 99	
//else
//	cout zahl2 ist größer als 99	100 ist größer als 99

#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
	int zahl1, zahl2;

	cout << "Geben Sie eine Zahl ein." << endl;
	cin >> zahl1;
	
	if (zahl1 < 99) {
		cout << zahl1 << " ist kleiner als 99" << endl;
	} else if (zahl1 > 99) {
		cout << zahl1 << " ist größer als 99" << endl;
	} else {
		cout << zahl1 << " ist gleich 99" << endl;
	}

	cout << "Geben Sie noch eine Zahl ein." << endl;
	cin >> zahl2;

	if (zahl2 < 99) {
		cout << zahl1 << " ist kleiner als 99" << endl;	
	} else if (zahl2 > 99) {
		cout << zahl1 << " ist größer als 99" << endl;	
	} else {
		cout << zahl1 << " ist gleich 99" << endl;	
	}
}
