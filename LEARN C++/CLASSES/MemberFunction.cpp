//
//  MemberFunction.cpp
//  CLASSES
//
//  Created by DEEPTI SHARMA on 06/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Student{
    
    private :
    
    int rollNo;
    string Name;
    
    
    public :
    
    void getrollNo();
    void getName();
    void dispInfo();

};

void Student::getrollNo(){
    
    cout << "\n Enter Roll Number of the Student : " ;
    cin >> rollNo ;
    
    if ( rollNo < 0 ) {
        cout << "\n Roll Number can not be negative or zero !!!! " ;
        this->getrollNo();
    }
}

void Student::getName(){

    cout << "\n Enter Name of the Student : " ;
    cin >> Name ;
    
}

void Student::dispInfo(){
    
    cout << "\n STUDENT RECORDS : " ;
    cout << "\n ROLL NUMBER : " << rollNo ;
    cout << "\n NAME : " << Name ;
    
}

int main(){
    
    Student Student1, Student2 ;
    
    Student1.getrollNo();
    Student1.getName();
    Student1.dispInfo();
    
    Student2.getrollNo();
    Student2.getName();
    Student2.dispInfo();
 
    return 0;
}

