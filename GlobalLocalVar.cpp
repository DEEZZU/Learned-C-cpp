//global and local variables
//use of scope resolution operator
#include<iostream>
using namespace std;
typedef int Integer;

Integer globalVar=0;
Integer intVar=1;

Integer main(){

Integer localVar=0;
Integer intVar=2;


cout << " \n Global Var : " << globalVar;
cout << " \n Local Var : " << localVar;
cout << " \n Global Int Var : " << ::intVar;
cout << " \n Local Int Var : " << intVar;
intVar=::intVar+intVar;
cout << " \n Local Int Var : intVar=::intVar+intVar : " << intVar;

return 0;

}

