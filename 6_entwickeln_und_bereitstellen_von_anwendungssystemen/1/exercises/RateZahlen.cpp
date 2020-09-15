#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int num = 5;
	int guess = 0;

	while (guess != num)
	{
		cout << "Zahl erraten: " << endl;
		cin >> guess;

		if (guess > num)
		{
			cout << "Zu groß" << endl;
		} 
		
		if (guess < num) {
			cout << "Zu klein" << endl;
		}
	}
	
	cout << "Korrekt!" << endl;
}
