//
//  InlineFunction.cpp
//  CLASSES
//
//  Created by DEEPTI SHARMA on 09/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

class Box{
    
    private :
    
    int length, breadth, height;
    int *lengthPtr;
    
    public :
    
    Box();
    Box(const Box&);
    Box(int,int,int);
    ~Box();
    
    void display(Box);
};

Box::Box(){
    
    cout << "\n CALLED CONSTRUCTOR : Box() ! " ;
    length = breadth = height = 0 ;
    lengthPtr = NULL ;
}

Box::Box( const Box &boxObj ){
    
    cout << "\n CALLED CONSTRUCTOR : Box( const Box &boxObj ) ! " ;
    length = boxObj.length ;
    breadth = boxObj.breadth ;
    height = boxObj.height ;
    lengthPtr = &this->length ;
}

Box::Box(int l, int b, int h){
    
    cout << "\n CALLED CONSTRUCTOR : Box(int l, int b, int h) ! " ;
    length = l ;
    breadth = b ;
    height = h ;
    lengthPtr = &this->length ;
}

Box::~Box(){
    
    cout << "\n CALLED DESTRUCTOR !!";
//    delete lengthPtr ;
}

void Box::display(Box boxObj){
    
    cout << "\n Displaying Box Dimensions : " ;
    cout << "\n BOX LENGTH : " << boxObj.length ;
    cout << "\n BOX BREADTH : " << boxObj.breadth ;
    cout << "\n BOX HEIGHT : " << boxObj.height ;
    cout << "\n BOX LENGTH POINTER : " << boxObj.lengthPtr ;
    
}

int main(){
    
    Box B1, B2(10,20,30);
    Box B3(B2);
    cout << endl ;
    B1.display(B2);
    cout << endl ;
    B1.display(B3);
    cout << endl ;
    return 0 ;
}

