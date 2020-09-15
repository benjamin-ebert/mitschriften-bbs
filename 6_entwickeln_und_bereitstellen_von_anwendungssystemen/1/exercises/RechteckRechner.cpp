#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	int length = 0;
	int width = 0;

	cout << "Länge?" << endl;
	cin >> length;

	cout << "Breite?" << endl;
	cin >> width;

	int umfang = (2 * length) + (2 * width);
	int flaeche = length * width;

	cout << "Umfang: " << umfang << endl;
	cout << "Fläche: " << flaeche << endl;

	return 0;
}

