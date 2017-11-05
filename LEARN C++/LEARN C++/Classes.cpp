//
//  Classes.cpp
//  LEARN C++
//
//  Created by DEEPTI SHARMA on 03/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//  A basic Class Creation program .

#include <iostream>
using namespace std;

class Box{
    
    private :
    
    double length, breadth, height ;
    double volume ;
    
    public :
    
    void getLength();
    void getBreadth();
    void getHeight();
    
    //    Example of an inline function : defined inside the class
    double calcVolume(){
        return length*breadth*height ;
    }
};

void Box::getLength(){

    int len ;
    
    cout << "\n Enter Length of the Box : " ;
    cin >> len ;
    
    if ( len > 0 ) {
        length = len;
    }
    else {
        cout << "\n Length can not be negative or zero !!!! " ;
        this->getLength();
    }
}

void Box::getBreadth(){
    
    int len ;
    
    cout << "\n Enter Breadth of the Box : " ;
    cin >> len ;
    
    if ( len > 0 ) {
        breadth = len;
    }
    else {
        breadth=1;
        cout << "\n Breadth can not be negative or zero !!!! " ;
        this->getBreadth();
    }
}

void Box::getHeight(){
    
    int len ;
    
    cout << "\n Enter Height of the Box : " ;
    cin >> len ;
    
    if ( len > 0 ) {
        height = len;
    }
    else {
        height=1;
        cout << "\n Height can not be negative or zero !!!! " ;
        this->getHeight();
    }
}

int main(){
    
    Box box1, box2 ;
    double vol1, vol2 ;
    
    box1.getLength();
    box1.getBreadth();
    box1.getHeight();
    vol1=box1.calcVolume();
    cout << "\n Volume of Box 1 : " << vol1 ;
    
    box2.getLength();
    box2.getBreadth();
    box2.getHeight();
    vol2=box2.calcVolume();
    cout << "\n Volume of Box 2 : " << vol2 ;
    
    return 0;
}
