//
//  count_down_advanced.cpp
//  exercises_xcode
//
//  Created by Admin on 08.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int num_1;
    int num_2;
    
    cout << "Erste Zahl eingeben: " << endl;
    cin >> num_1;
    
    if (num_1 <= 12) {
        do {
            cout << num_1 << " ";
            num_1 = num_1 - 5;
        } while (num_1 > 0);
    }
    
    cout << "Zweite Zahl eingeben: " << endl;
    cin >> num_2;
    
    while (num_2 > 0) {
        cout << num_2 << endl;
        num_2 = num_2 - 5;
    }
    
    return 0;
}
