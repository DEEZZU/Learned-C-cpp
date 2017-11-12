//
//  FriendClass.cpp
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
    
    friend class employeeGrader;
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

class employeeGrader{
    
    public :
    
    employeeGrader(){
    }
    
    char evalGrade(double salary){
        
        if ( salary > 15000 ){
            return 'A' ;
        }
        else if ( salary > 10000 ){
            return 'B';
        }
        else {
            return 'C';
        }
    }
    
    void display(Employee &E){
        
        cout << "\n According to salary ..." << E.Name << " has grade = " << evalGrade(E.salary);
    }
};


int main(){
    
    Employee E1, E2("Neha", 1 , 400000 );
    Employee E3(E2);
    employeeGrader E;
    E.display(E3);
    
    return 1;
    
}
