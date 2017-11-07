//
//  main.cpp
//  RANDOM NUMBER
//
//  Created by DEEPTI SHARMA on 15/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int randVar;
    time_t timeVar;
    
    timeVar = time(NULL) ;
    srand ((unsigned) timeVar ) ; // this causes different random values on every executions
    
    for ( auto i=0 ; i<10 ; i++ ) {
        randVar = rand();
        cout << "\n Random Variable : " << randVar ;
    }
}
