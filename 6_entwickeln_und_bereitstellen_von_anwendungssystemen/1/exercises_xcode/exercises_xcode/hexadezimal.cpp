//
//  hexadezimal.cpp
//  exercises_xcode
//
//  Created by Admin on 16.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int zahl;
    int erg0 = 0;
    int erg1 = 0;
    int erg2 = 0;
    int stelle0 = 0;
    int stelle1 = 0;
    int stelle2 = 0;
    
    cout << "Geben Sie eine maximal dreistellige Zahl ein: " << endl;
    cin >> zahl;
    
    if (zahl <= 999 && zahl >= 0) {
        
        erg0 = zahl/16;
        stelle0 = zahl%16;
        
        if (erg0 > 0) {
            erg1 = erg0/16;
            stelle1 = erg0%16;
        }
        
        if (erg1 > 0) {
            erg2 = erg1/16;
            stelle2 = erg1%16;
        }
    }
    
    cout << erg0 << " - " << stelle0 << endl;
    cout << erg1 << " - " << stelle1 << endl;
    cout << erg2 << " - " << stelle2 << endl;
    
    int array[3] = {stelle0, stelle1, stelle2};
    
    for (auto stelle: array) {
        switch (stelle) {
            case 10: cout << "A"; break;
            case 11: cout << "B"; break;
            case 12: cout << "C"; break;
            case 13: cout << "D"; break;
            case 14: cout << "E"; break;
            case 15: cout << "F"; break;

            default: cout << stelle; break;
        };
    }
    
    cout << " " << endl;
    
    return 0;
}
