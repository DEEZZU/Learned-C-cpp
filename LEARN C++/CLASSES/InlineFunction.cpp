//
//  Inline Function
//  Classes
//
//  Author : Deepti Sharma
//
//  Inline Function :  the compiler places a copy of the code of that function at function call
//

#include <iostream>
using namespace std;

inline int max( int, int);
inline int min( int, int);

int main(){
    
    int num1, num2, result;
    
    cout << "\n Enter two numbers : " ;
    cin >> num1 >> num2 ;
    
    result = max( num1, num2);
    cout << "\n The maximum of the two is : " << result ;
    
    result = min( num1, num2);
    cout << "\n The minimum of the two is : " << result ;
    
    return 1;
}

int max(int n1, int n2){
    
    if ( n1 > n2 ){
        return n1 ;
    }
    return n2 ;
    
}

int min( int n1, int n2){
    
    if ( n1 < n2 ){
        return n1 ;
    }
    return n2 ;
}
