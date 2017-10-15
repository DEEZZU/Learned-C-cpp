//
//  RandomNumbers.cpp
//  
//
//  Created by DEEPTI SHARMA on 15/10/17.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

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
    
    return 0;
}
