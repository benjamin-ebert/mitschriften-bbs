//
//  neighbors.cpp
//  exercises_xcode
//
//  Created by Admin on 15.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int neighbor;
    
    cout << "Welcher Nachbar soll ausgegeben werden?" << endl;
    cin >> neighbor;
    
    switch(neighbor) {
        case 1: cout << "Pascal" << endl; break;
        case 2: cout << "Sebsastian" << endl; break;
        default: cout << "Deine Mutter" << endl; break;
    }
    
    return 0;
}
