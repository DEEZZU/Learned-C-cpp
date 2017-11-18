//
//  FriendFunction.cpp
//  CLASSES
//
//  Created by DEEPTI SHARMA on 09/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//
//  Friend : can access classes' private and protected members
//           can be a function, function template, or member function, or a class or class template,
//           in which case the entire class and all of its members are friends.
//           need not be called by an object


#include <iostream>
#include <string>
using namespace std;

class Employee{
    
    private :
    
    string Name;
    int empId;
    double salary ;
    
    public :
    
    Employee();
    Employee(const Employee&);
    Employee(string,int,double);
    ~Employee();
    
    friend void Display(Employee);
};

Employee::Employee(){
    
    Name = "John Doe" ;
    empId = 0 ;
    salary = 0.0 ;
}

Employee::Employee(const Employee &E){
    
    Name = E.Name ;
    empId = E.empId ;
    salary = E.salary ;
    
}

Employee::Employee(string N , int Id , double S){
    
    Name = N ;
    empId = Id ;
    salary = S ;
}

Employee::~Employee(){
    
    cout << "\n Destructing Object !!! " ;
    
}

void Display(Employee E){
    
    cout << "\n A friend can access private and protected Members : " ;
    cout << "\n Employee Name : " << E.Name ;
    cout << "\n Employee Id : " << E.empId ;
    cout << "\n Employee Salary : " << E.salary ;
    
}

int main(){
    
    Employee E1, E2("Neha", 1 , 45.67 );
    Employee E3(E2);
    cout << "\n size of employee : " << sizeof(Employee) ; // again 4 byte more are allocated 
    Display(E1);
    Display(E2);
    Display(E3);
    
    return 1;
    
}
