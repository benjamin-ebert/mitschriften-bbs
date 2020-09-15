//
//  count_back.cpp
//  exercises_xcode
//
//  Created by Admin on 07.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int zahl;
    
    cout << "Zahl eingeben: ";
    cin >> zahl;
    cout << "Countdown:" << endl;
    cout << zahl << endl;
    
    do {
        zahl--;
        cout << zahl << endl;
    } while(zahl > 0);
    
    cout << "BOOM!" << endl;
    
    return 0;
}
