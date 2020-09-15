#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int length;
	int width;
	int height;
	int volume;
	int area;
	int choice;
	int initiator = 1;

	while (initiator == 1) {

		cout << "Drücke 1 für Würfle oder 2 für Quader: " << endl;
		cin >> choice;

		if (choice == 1) {

			cout << "Kantenlänge: " << endl;
			cin >> length;

			volume = 3 * length;
			area = 6 * length;

		} else if (choice == 2) {

			cout << "Länge: " << endl;
			cin >> length;
			cout << "Breite: " << endl;
			cin >> width;
			cout << "Höhe: " << endl;
			cin >> height;

			volume = length * width * height;
			area = 2 * length * width + 2 * width * height + 2 * height * length;

		} else {
			cout << "Ungültig" << endl;
		}

		cout << "Rauminhalt: " << volume << endl;
		cout << "Oberflächeninhalt: " << area << endl;
		
		initiator = 0;

		cout << "Wiederholen? 1 für ja, 0 für nein" << endl;
		cin >> initiator;
	}
}
