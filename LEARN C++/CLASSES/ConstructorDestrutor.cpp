//
//  ConstructorDestrutor.cpp
//  CLASSES
//
//  Created by DEEPTI SHARMA on 06/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//


#include <iostream>
using namespace std;

class Box{
    
    private :
    
    double length, breadth, height ;
    double volume ;
    
    public :
    Box(){
        length=breadth=height=0;
        cout << "\n Object Created using non parameterised contstructor " ;
    }
    
    Box(double l, double b, double h) {
        length = l ;
        breadth = b ;
        height = h ;
        cout << "\n Object Created using parameterised constructor " ;
    }
    
    Box ( double l, double b ) : length(l), breadth (b) {
        cout << "\n Using initialization list " ;
    }
    
    void getLength();
    void getBreadth();
    void getHeight();
    
    //    Example of an inline function : defined inside the class
    double calcVolume(){
        return length*breadth*height ;
    }
    
    ~Box(){
        cout << " \n DELETING OBJECT..... " ;
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
    
    Box box1, box2(10,11,12), box3(10,12) ;
    double vol1, vol2, vol3 ;
    
    box1.getLength();
    box1.getBreadth();
    box1.getHeight();
    vol1=box1.calcVolume();
    cout << "\n Volume of Box 1 : " << vol1 ;
    
    vol2=box2.calcVolume();
    cout << "\n Volume of Box 2 : " << vol2 ;
    
    box3.getHeight();
    vol3=box3.calcVolume();
    cout << "\n Volume of Box 3 : " << vol3 ;
    
    
    return 0;
}
