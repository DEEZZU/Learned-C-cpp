//
//  References.cpp
//  LEARN C++
//
//  Created by DEEPTI SHARMA on 25/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//


#include <iostream>
using namespace std ;
#define maxSize 10

// GLOBAL VARIABLE DECLARATION
int arrVar[maxSize];

// FUNCTION PROTOTYPE
int& retRef(int) ;
void swapUsingRef(int&,int&);

//MAIN FUNCTION
int main(int argc, const char * argv[]) {

    int intVar1 , intVar2;
    int& refInt = intVar1 ;
    // references should be declared with initialization
    
    
    intVar1 = 20 ;
    intVar2 = 50 ;
    
    cout << "\n Value of intVar1 : " << intVar1 ;
    cout << "\n Value of intVar2 : " << intVar2 ;
    cout << "\n Value of refInt : " << refInt ;
    
    swap(intVar1,intVar2);
    retRef(1)=5;
    
    cout << " \n After Swap Function " ;
    cout << "\n Value of intVar1 : " << intVar1 ;
    cout << "\n Value of intVar2 : " << intVar2 ;
    
    cout << "\n Using RetRef Function we can use references on left side of Assignment .....";
    cout << "\n Results of retRef(1)=5 : " << arrVar[1] ;
    
    cout << endl ;
    return 0 ;
    
}

void swap(int& refInt1, int& refInt2){
    
    //Swapping using only twp variables
    //References allow you to return more than one ouput processing from a function
    
    refInt1 += refInt2 ;
    refInt2 = refInt1 - refInt2 ;
    refInt1 = refInt1 - refInt2 ;

}

int& retRef(int index){
    return arrVar[index];
}
