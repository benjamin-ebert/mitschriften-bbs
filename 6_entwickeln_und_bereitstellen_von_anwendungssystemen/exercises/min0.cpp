// eingabe beliebig vieler zahlen
// Ende mit Eingabe 0
// Text anzeigen, die wievielte Zahl eigegeben wird
// Am Ende Mittelwert ausgeben


#include <iostream>
using namespace std;

int main() {
	float zahl, summe, index, mittelwert;
	index = 0;
	
	while (zahl != 0) {
		cout << "Gib eine Zahl ein. Beende mit 0." << endl;
		cin >> zahl;
		summe = summe + zahl;
		index++;
		cout << "Das war Zahl Nummer " << index << endl;
		cout << "Zwischensumme: " << summe << endl;
	}
	mittelwert = summe/index;
	
	cout << "Der Mittelwert deiner Eingaben ist " << mittelwert << endl;
}
