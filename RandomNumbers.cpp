//
//  RandomNumbers.cpp
//  
//
//  Created by DEEPTI SHARMA on 15/10/17.
//
#include <bits/stdc++.h>   // use this header files instead of using various ones it saves times in competitive coding

using namespace std;

int main () {
    
    int i,randValue;
    time_t timeVar;
    
    timeVar= time(NULL);
    srand(timeVar);
    
    for( i = 0; i < 10; i++ ) {
        randVar = rand();
        cout << "\n Random Number : " << randVar ;
    }
    
    cout << "\n Generating Random Numbers in a range : " ;
    cout << (rand()%10)+1 ;
    return 0;
}
