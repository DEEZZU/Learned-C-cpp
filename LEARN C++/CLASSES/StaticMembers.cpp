//
//  StaticMembers.cpp
//  CLASSES
//
//  Created by DEEPTI SHARMA on 02/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Manager{
    
    private :
    
    int managerSsn;
    string managerName;
    static int managerCount;
    
    
    public :
    
    Manager(){
        
        managerSsn = 0 ;
        managerName = "JohnDoe";
        managerCount++;                 // <- Keeping the Count of the Managers
    }
    
    
    static int numberOfManagers(){
//        managerName = "changed" ;
//        this->managerName;
//        displayDetails();
        //        managerCount=0;       <- VALID
//        managerCount++;               <- Valid
        return managerCount;
    }
    
    void displayDetails(){
        
        cout << " \n NAME : " << managerName ;
        cout << " \n SSN : " << managerSsn ;
        cout << " \n COUNT : " << numberOfManagers() ;
        int n;
        
        n=this->numberOfManagers();
        cout << n;
    }
    
};

int Manager::managerCount=0;

int main(){
    
//    int Manager::managerCount=9;      <- definition and redeclaration of static members in non static function is invalid
    Manager M ,M2;
    int n;
    M.displayDetails();
    M2.displayDetails();
    n=M2.numberOfManagers();
    
    cout << endl ;
    cout << " " << n ;
    cout << endl ;
    cout << Manager::numberOfManagers();
    return 0;
    
}
