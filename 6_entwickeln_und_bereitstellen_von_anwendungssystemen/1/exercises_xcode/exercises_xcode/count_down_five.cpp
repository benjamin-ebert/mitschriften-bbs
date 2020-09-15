//
//  count_down_five.cpp
//  exercises_xcode
//
//  Created by Admin on 08.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Zahl eingeben:" << endl;
    cin >> num;
    
    do {
        cout << num << endl;
        num = num-5;
    } while (num >= 0);
    
    cout << "0" << endl;
    
    return 0;
}
