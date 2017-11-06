//
//  AccessModifier.cpp
//  CLASSES
//
//  Created by DEEPTI SHARMA on 06/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

class Base {
    
    private :
    int privateVar ;
    
    protected :
    int protectedVar ;
    
    public :
    int publicVar ;
    void setVar(int prvt, int prot, int pub){
        
        privateVar = prvt ;
        protectedVar = prot ;
        publicVar = pub ;
        
    }
    
};

class Sub : public Base {
    
    public :
    void displayVar(){
        cout << "\n Base's publicVar : " << publicVar ;
        cout << "\n Base's protectedVar : " << protectedVar ;
//        cannot access private variables
    }
};


class Sub2 : protected Base {
    
    public :
    void displayVar( int var1, int var2, int var3 ) {
        setVar(var1, var2, var3);
        cout << "\n Base's publicVar : " << publicVar ;
        cout << "\n Base's protectedVar : " << protectedVar ;
        //        cannot access private variables
    }
};


int main(){
    
    Sub subclassObj ;
    Sub2 subclassObj2 ;
    int var1, var2, var3 ;
    
    cout << "\n Enter three Values : " ;
    cin >> var1 >> var2 >> var3;
    
    subclassObj.setVar(var1, var2, var3);
    subclassObj.displayVar();
//    subclassObj2.setVar(var1, var2, var3);  <- Protected member of Sub2 class
    subclassObj2.displayVar( var1, var2, var3);
    
    return 0;
}
