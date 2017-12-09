//
//  PointersToClass.cpp
//  CLASSES
//
//  Created by DEEPTI SHARMA on 02/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Employee{
    
    private :
    
    int ssn;
    string name;
    double salary;
    
    public :
    
    Employee(int s=0,string N="John Doe",double sa=0.0){
        
        ssn = s ;
        name = N ;
        salary = sa ;
    }
    
    void calcTax(){

        double Tax;
        
        if ( salary <= 10000 ){
            cout << "\n No Tax has to be paid " ;
        }
        else {
            Tax = salary*0.6;
            cout << " \n The tax to be paid is : " << Tax ;
        }
    }
    
    void display(){
        
        cout << "\n DETAILS : " ;
        cout << "\n NAME : " <<  name ;
        cout << "\n SSN : " << ssn ;
        cout << "\n SALARY : " << salary ;
    }
    
};

int main(){
    
    Employee* E1;
    Employee E2,E3(12,"DEEPTI",12000 );
    
    //E1->display() ; //unitialized
    cout << endl ;

    E1 = &E2;
    E1->display();
    cout <<"\n SIZE OF CLASS : " << sizeof(Employee) ;
    cout << "\n Value of E1 : " << E1 ;
    E1 = E1+2 ;
    cout << endl << " Value of E1 after update : " << E1 ;
    cout << "\n size of string " << sizeof(string);
    E1->display();
    
    cout << endl ;
    E2.display() ;
    cout << endl ;
    E3.display() ;
    cout << endl ;
    
    return 1;
}
