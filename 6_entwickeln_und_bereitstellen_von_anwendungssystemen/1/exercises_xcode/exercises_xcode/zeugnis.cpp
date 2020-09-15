//
//  zeugnis.cpp
//  exercises_xcode
//
//  Created by Admin on 15.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int note;
    string subject;
    
    for (int i=0; i<2; i++) {
        
        cout << "Fach eingeben: " << endl;
        cin >> subject;
        
        cout << subject << " bewerten: " << endl;
        cin >> note;
        
        switch (note) {
            case 1: cout << "Sehr gut" << endl;break;
            case 2: cout << "Gut" << endl;break;
            case 3: cout << "Befriedigend" << endl;break;
            case 4: cout << "Ausreichend" << endl;break;
            case 5: cout << "Mangelhaft" << endl;break;
            case 6: cout << "Ungenügend" << endl;break;
                
            default:
                break;
        }
        
    }
    
    return 0;
}
