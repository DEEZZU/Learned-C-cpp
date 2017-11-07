//
//  main.cpp
//  POINTERS
//
//  Created by DEEPTI SHARMA on 21/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int intVar, *intPointer=NULL;
    int intArr[5] = {1,2,3,4,5} ;
    int **intPointer2;
    char charVar, *charPointer=NULL;
    float floatVar, *floatPointer=NULL;
    double doubleVar, *doublePointer=NULL;
    //void *voidPointer=NULL;
    
    intPointer = &intVar ;
    floatPointer = &floatVar ;
    charPointer = &charVar ;
    doublePointer = &doubleVar;
    
    *intPointer = 5 ;
    *charPointer = 'a' ;
    *floatPointer = 6.7 ;
    
    cout << "\n POINERS TO ADDRESS AND VALUES : " ;
    cout << "\n ADDRESS OF INTVAR : " << intPointer ;
    cout << "\n VALUE OF INTVAR : " << *intPointer ;
    cout << "\n ADDRESS OF DOUBLEVAR : " << doublePointer ;
    cout << "\n VALUE OF DOUBLEVAR : " << *doublePointer ;
    cout << "\n ADDRESS OF CHARVAR : " << charPointer ;
    cout << "\n VALUE OF CHARVAR : " << *charPointer ;
    cout << "\n ADDRESS OF FLOATVAR : " << floatPointer ;
    cout << "\n VALUE OF FLOATVAR : " << *floatPointer ;
    
    cout << "\n POINTER ARITHMETIC : " ;
    intPointer = intArr ;
    
    cout << "\n PRINTING ARRAY USING ++ : " ;
    for ( auto i =0 ; i < 5 ; i ++ ){
        cout << *intPointer << " " ;
        intPointer++;
    }
    
    intPointer = &intArr[4];
    
    while ( intPointer >= intArr ){
        cout << "\n Arr : " << *intPointer;
        intPointer--;
    }
        
    cout << "\n POINTER ARRAY : \n";
    
    char *stringArr[3] = { "Hey" , "Ho" , "Hi" };
    
    for ( auto i=0 ; i<3 ; i++ ) {
        cout << stringArr[i] << endl ;
    }
    
    *intPointer = 5;
    intPointer2 = &intPointer ;
    
    cout << "\n POINTER TO POINTER : " ;
    cout << "\n intPointer2 : " << intPointer2 ;
    cout << "\n *intPointer2 : " << *intPointer2 ;
    cout << "\n **intPointer2 : " << **intPointer2 ;
}
