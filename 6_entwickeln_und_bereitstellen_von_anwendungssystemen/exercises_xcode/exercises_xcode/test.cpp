//
//  test.cpp
//  exercises_xcode
//
//  Created by Admin on 07.01.20.
//  Copyright © 2020 Benjamin Ebert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int zeile = 0;
    int stern = 1;
    int summe;
    
    do {
        summe = zeile * stern;
        for (int anzahl=0; anzahl<=summe; anzahl++) {
            cout << "*";
        }
        zeile++;
        cout << endl;
    }
    while(zeile < 5);
    
    return 0;
}
