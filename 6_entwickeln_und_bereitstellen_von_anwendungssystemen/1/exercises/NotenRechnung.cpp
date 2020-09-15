#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int note = 0;
	int index = 0;
	float sum = 0;
	int best = 6;

	while (note != -1) 
	{
		cout << "Note eingeben, Abbruch mit -1: " << endl;
		cin >> note;

		if (note > 0 && note < 7)
		{
			sum += note;
			index++;

			if (note < best) 
			{
				best = note;
			}

		} else {
			cout << "Ungültig" << endl;
		}
		
	}

	float mean = sum / index;

	cout << "Mittelwert: " << mean << endl;
	cout << "Bestwert: " << best << endl;
}
