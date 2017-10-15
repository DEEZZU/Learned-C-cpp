//
//  main.cpp
//  HelloWorld
//
//  Created by DEEPTI SHARMA on 12/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include<cmath>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int intVar=10;
    char charVar=9;
    double doubleVar=220.345;
    bool boolVar=true;
    float floatVar=2.34;
//    signed int sgnIntVar;
//    short shortIntVar;
//    signed short int sgnShortIntVar;
//    long int longIntVar;
//    signed long int sgnLongIntVar;
//    long double longDoubleVar;

//    Using math operator
  
    cout << "\n USING COSINE FUNCTION : ";
    cout << "\n cosine(intVar) : " << cos(intVar) ;
    cout << "\n cosine(charVar) : " << cos(charVar) ;
    cout << "\n cosine(doubleVar) : " << cos(doubleVar) ;
    cout << "\n cosine(boolVar) : " << cos(boolVar) ;
    cout << "\n cosine(floatVar) : " << cos(floatVar) ;
    
    cout << "\n USING SINE FUNCTION : ";
    cout << "\n sine(intVar) : " << sin(intVar) ;
    cout << "\n sine(charVar) : " << sin(charVar) ;
    cout << "\n sine(doubleVar) : " << sin(doubleVar) ;
    cout << "\n sine(boolVar) : " << sin(boolVar) ;
    cout << "\n sine(floatVar) : " << sin(floatVar) ;
    
    cout << "\n USING TAN FUNCTION : ";
    cout << "\n TAN(intVar) : " << tan(intVar) ;
    cout << "\n TAN(charVar) : " << tan(charVar) ;
    cout << "\n TAN(doubleVar) : " << tan(doubleVar) ;
    cout << "\n TAN(boolVar) : " << tan(boolVar) ;
    cout << "\n TAN(floatVar) : " << tan(floatVar) ;
    
    cout << "\n USING LOG FUNCTION : ";
    cout << "\n log(intVar) : " << log(intVar) ;
    cout << "\n log(charVar) : " << log(charVar) ;
    cout << "\n log(doubleVar) : " << log(doubleVar) ;
    cout << "\n log(boolVar) : " << log(boolVar) ;
    cout << "\n log(floatVar) : " << log(floatVar) ;
    
    cout << "\n USING POW FUNCTION : ";
    cout << "\n POW(intVar,2) : " << pow(intVar,2) ;
    cout << "\n POW(charVar,2) : " << pow(charVar,2) ;
    cout << "\n POW(doubleVar,2) : " << pow(doubleVar,2) ;
    cout << "\n POW(boolVar,2) : " << pow(boolVar,2) ;
    cout << "\n POW(floatVar,2) : " << pow(floatVar,2) ;
    
    cout << "\n USING HYPOT FUNCTION : ";
    cout << "\n HYPOT(intVar,intVar) : " << hypot(intVar,intVar) ;
    cout << "\n HYPOT(charVar,charVar) : " << hypot(charVar,charVar) ;
    cout << "\n hypot(doubleVar,doubleVar) : " << hypot(doubleVar,doubleVar) ;
    cout << "\n hypot(boolVar,boolVar) : " << hypot(boolVar,boolVar) ;
    cout << "\n hypot(floatVar,floatVar) : " << hypot(floatVar,floatVar) ;
    
    cout << "\n USING SQRT FUNCTION : ";
    cout << "\n Sqrt(intVar) : " << sqrt(intVar) ;
    cout << "\n Sqrt(charVar) : " << sqrt(charVar) ;
    cout << "\n Sqrt(doubleVar) : " << sqrt(doubleVar) ;
    cout << "\n Sqrt(boolVar) : " << sqrt(boolVar) ;
    cout << "\n Sqrt(floatVar) : " << sqrt(floatVar) ;
    
    cout << "\n USING ABS AND FABS FUNCTION : ";
    cout << "\n Abs(intVar) : " << abs(intVar) ;
    cout << "\n Abs(charVar) : " << abs(charVar) ;
    cout << "\n Abs(boolVar) : " << abs(boolVar) ; // has no effect -> compiler generates warning
    cout << "\n Fabs(doubleVar) : " << fabs(doubleVar) ;
    cout << "\n Fabs(floatVar) : " << fabs(floatVar) ;
    
    cout << "\n USING FLOOR FUNCTION : ";
    cout << "\n floor(doubleVar) : " << floor(doubleVar) ;
    cout << "\n floor(floatVar) : " << floor(floatVar) ;
    
    return 0;
}
