//
//  divide_by_two.cpp
//  exercises_xcode
//
//  Created by Admin on 15.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int numbers;
    int num;
    
    cout << "Wie viele Zahlen sollen auf glatte Teilbarkeit durch 2 geprüft werden?" << endl;
    cin >> numbers;
    
    for(int i=0; i<numbers; i++) {
        
        cout << "Zu prüfende Zahl eingeben: " << endl;
        cin >> num;
        
        switch(num%2) {
            case 0: cout << num << " - teilbar." << endl; break;
            case 1: cout << num << " - nicht teilbar." << endl; break;
        };
        
    };
    
    return 0;
};
