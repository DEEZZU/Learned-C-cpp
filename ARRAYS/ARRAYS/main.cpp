//
//  main.cpp
//  ARRAYS
//
//  Created by DEEPTI SHARMA on 15/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//
// returning array from function : point to remember is that C++ does not advocate to return the address of a local
// variable to outside of the function so you would have to define the local variable as static variable. and you return pointer to first address.

#include <iostream>
#include<iomanip>

using namespace std;

#define maxSize 10

void functionWay1(int *Arr);
void functionWay2(int Arr[maxSize]);
void functionWay3(int Arr[], int size);

int main(int argc, const char * argv[]) {
  
    int i , j ; //iterator
    // Declaring and Initializing the array
    int intArr[maxSize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;
    double doubleArr[] = {10.0, 12.34 , 7.65, 5.432 };
    char charArr[10];
    charArr[6]='a';
    
    //MultiDimensional Array
    float floatArr[2][2]={ { 2.3, 4.5 }, { 9.8, 5.6 } };
    int intArr2[2][2]={ 0, 1, 2, 3 };
    
    //Pointer to array
    int *intPointer;
    double *doublePointer;
    float *floatPointer;
    //*(pointer+i) <- access to each address
    
    for ( i=0 ; i<maxSize ; i++ ) {
        cout << "\n intArr[ " << i+1 << " ] : " << intArr[i] ;
    }
    
    for ( i=0 ; i<4 ; i++) {
        cout << "\n doubleArr[ " << i+1 << " ] : " << doubleArr[i] ;
    }
    
    for ( i=0 ; i<2 ; i++ ) {
        for( j=0 ; j<2 ; j++ ) {
            cout <<"\n floatArr[ " << i+1 << " ][  " << j+1 << " ] : " << floatArr[i][j] ;
        }
    }
    
    for ( i=0 ; i<2 ; i++ ) {
        for( j=0 ; j<2 ; j++ ) {
            cout <<"\n intArr2[ " << i+1 << " ][  " << j+1 << " ] : " << intArr2[i][j] ;
        }
    }
    
    //Accesing arrays using pointer
   
    cout << "\n ACCESING USING POINTER : " ;
    
    intPointer = intArr;
    
    for ( i=0 ; i<maxSize; i++ ) {
        cout << "\n intArr[ " << i+1 << " ] : " << *( intPointer + i )  ;
    }

    doublePointer = doubleArr ;
    
    for ( i=0 ; i<4 ; i++) {
        cout << "\n doubleArr[ " << i+1 << " ] : " << *( doublePointer + i) ;
    }
    
    for ( i=0 ; i<2 ; i++ ) {
        floatPointer = floatArr[i] ;
        for( j=0 ; j<2 ; j++ ) {
            cout <<"\n floatArr[ " << i+1 << " ][  " << j+1 << " ] : " << *( floatPointer + j ) ;
        }
    }
    
    //ACCESSING ARRAYS USING FUNCTIONS
    
    functionWay1( intPointer );
    functionWay2(intArr);
    functionWay3(intArr,10);
 
}

void functionWay1(int *Arr) {
    
    int i ;
    for ( i=0 ; i<maxSize ; i++ ) {
        cout << "\n intArr[ " << i+1 << " ] : " << *( Arr + i )  ;
    }
}

void functionWay2(int Arr[maxSize]){
    
    int i ;
    for ( i=0 ; i<maxSize ; i++ ) {
        cout << "\n intArr[ " << i+1 << " ] : " << Arr[i] ;
    }
}

void functionWay3(int Arr[], int size){
    
    int i ;
    for ( i=0 ; i<size ; i++ ) {
        cout << "\n intArr[ " << i+1 << " ] : " << Arr[i]  ;
    }
}
