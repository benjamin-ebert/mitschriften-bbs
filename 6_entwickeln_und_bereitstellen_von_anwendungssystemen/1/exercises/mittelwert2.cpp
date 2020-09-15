#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	float num = 1;
	float sum = 0;
	int index = -1;

	while (num != 0) 
	{
		cout << "Zahl?" << endl;
		cin >> num;

		sum += num;
		index++;
	}

	float mean = sum / index;

	cout << "Mittel: " << mean << endl;
}
