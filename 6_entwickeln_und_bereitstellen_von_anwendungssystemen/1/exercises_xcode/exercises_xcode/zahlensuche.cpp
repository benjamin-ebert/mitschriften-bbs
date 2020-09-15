// int random_number = 14;
// cout << "Erraten Sie die zufällige Zahl zwischen 1 und 19. Ihr Vorschlag?
// int user_try;
// cin << user_try;
// while (user_try != random_number)
//	cout << "Falsch, nächster Versuch."
//	cin << user_try
// cout << "Richtig, guter Junge!"

#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
	int random_number = 14;
	cout << "Erraten Sie die zufällige Zahl zwischen 1 und 19. Ihr Vorschlag?";
	
	int user_try;
	int failed_tries = 0;
	cin >> user_try; // can be abandoned if I give user_try an initial value

	while (user_try != random_number) {
		cout << "Falsch, nächster Versuch";
		failed_tries++;
		cin >> user_try;
	}

	cout << "Richtig, guter Junge!";
	cout << "Sie haben " << failed_tries << " Versuche gebraucht.";
}
