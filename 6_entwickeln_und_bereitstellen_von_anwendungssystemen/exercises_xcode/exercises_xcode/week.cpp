//
//  week.cpp
//  exercises_xcode
//
//  Created by Admin on 15.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int num_days;
    int day;
    
    cout << "Wie viele Tage möchten Sie ausgeben?" << endl;
    cin >> num_days;
    
    for(int i=0; i<num_days; i++) {
        cout << "Welchen Tag möchten Sie ausgeben?" << endl;
        cin >> day;
        switch(day) {
            case 1: cout << "Montag" << endl; break;
            case 2: cout << "Dienstag" << endl; break;
            case 3: cout << "Mittwoch" << endl; break;
            case 4: cout << "Donnerstag" << endl; break;
            case 5: cout << "Freitag" << endl; break;
            case 6: cout << "Samstag" << endl; break;
            case 7: cout << "Sonntag" << endl; break;
            default: cout << "Die Woche hat nur sieben Tage." << endl;
        }
    }
    
    return 0;
};
