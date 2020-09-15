#include <stdlib.h>
#include <iostream>

using namespace std;

int main () 
{
	int num;
	int index = 2;
	int result = 1;

	cout << "Zahl?" << endl;
	cin >> num;

	while (index <= num)
	{
		result = index * result;
		index++;
	}

	cout << "Ergebnis: " << result << endl;
}
