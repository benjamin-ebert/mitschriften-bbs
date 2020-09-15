//
//  sum_bewert.cpp
//  exercises_xcode
//
//  Created by Admin on 04.12.19.
//  Copyright © 2019 Benjamin Ebert. All rights reserved.
//
// beliebig viele positive / negative Zahlen (Ende mit 0)
// Minimum, Maximum, Summe, Anzahl berechnen und ausgeben

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int z = 0, min = 0, max = 0, sum = 0, index = 0;
    cout << "Zahl eingeben" << endl;
    cin >> z;
    
    while (z != 0) {
        z < min ? min = z : min = min;
        z > max ? max = z : max = max;
        sum = sum + z;
        index++;
        
        cout << "Nochmal (Beenden mit 0)" << endl;
        cin >> z;
    }
    
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Summe: " << sum << endl;
    cout << "Anzahl: " << index << endl;
    
    return 0;
}
