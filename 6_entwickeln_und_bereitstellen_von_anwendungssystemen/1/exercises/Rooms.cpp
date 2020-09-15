#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int index = 0;
	int length = 0;
	int width = 0;
	int height = 0;
	int area = 0;
	int sum = 0;
	int choice = 0;

	while (choice == 0)
	{
		cout << "Länge: " << endl;
		cin >> length;
		cout << "Breite: " << endl;
		cin >> width;
		cout << "Höhe: " << endl;
		cin >> height;

		area = length * width;
		sum += area;
		index++;

		cout << "Weitere Raum: 0, Beenden: 1" << endl;
		cin >> choice;
	}

	cout << "Gesamtfläche: " << sum << endl;
	cout << "Räume: " << index << endl;
}
