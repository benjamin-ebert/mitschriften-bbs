#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	float counter = -1.0;
	float sum = 0.0;
	int number = 1;

	while (number != 0) 
	{
		cout << "Zahl eingeben. Beenden mit 0." << endl;
		cin >> number;
		sum += number;
		counter++;
	}

	float mean = sum / counter;

	cout << "Summe: " << sum << endl;
	cout << "Mittelwert: " << mean << endl;
}
