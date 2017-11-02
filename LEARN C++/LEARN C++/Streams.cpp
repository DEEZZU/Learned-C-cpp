//
//  Streams.cpp
//  LEARN C++
//
//  Created by DEEPTI SHARMA on 31/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    char Error[]="Unable to read \n";
    int input;
    
    cout << "\n This is ostream object " ;
    cout << "\n Enter some in input : " ;
    cin >> input ;
    cerr << Error ; //UnBuffered Output Stream
    clog << Error ; //Buffered Output Stream
    
    return 0 ;
}
