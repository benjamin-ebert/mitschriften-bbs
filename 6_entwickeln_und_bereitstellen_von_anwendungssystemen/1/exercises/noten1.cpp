// eingabe schülernummer
// danach eingabe alle noten, ende mit -9
// nicht erlaubte zahlen neu erfragen
// am ende ausgabe mittelwert


#include <iostream>
using namespace std;

int main() {

	int nummer;
	float note, index, summe, mittelwert;
	
	summe = 0;
	index = 0;

	cout << "Schülernummer eingeben: " << endl;
	cin >> nummer;
	
	while (note != -9) {
		cout << "Note eingeben. Beenden mit -9" << endl;
		cin >> note;
		if (note < 1 || note > 6) {
			cout << "Ungültig, das war keine Note." << endl;
		} else {
			summe = summe + note;
			cout << summe << endl;
			index++;
			cout << index << endl;
		}
	}

	mittelwert = summe/index;
	
	cout << "Notendurchnschnitt: " << mittelwert << endl;

	return 0;
}
