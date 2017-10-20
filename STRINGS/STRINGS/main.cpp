//
//  main.cpp
//  STRINGS
//
//  Created by DEEPTI SHARMA on 20/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include<cstring>
using namespace std;
#define maxSize 10

int main(int argc, const char * argv[]) {
    
    char str2[maxSize] = "Hi!" ;
    char str1[maxSize] = { 'H', 'e', 'l' , 'l' , 'o' , '\0' } ;
    char *chPointer= NULL;
    
    string sObj1, sObj2;
    sObj1 = "New String Object";
    sObj2 = sObj1 ;
    
    cout << "\n USAGE OF STRING.H FUNCTIONS : " ;
    cout << "\n String 1 : " << str1 ;
    cout << "\n String 2 : " << str2 ;
    cout << "\n strlen ( str1 ) : " << strlen(str1) ;
    cout << "\n strlen ( str2 ) : " << strlen(str2) ;
    cout << "\n strcmp ( str1 , str2 ) : " << strcmp(str1,str2);
    chPointer = strchr(str1,'h');
    cout << "\n strchr ( str1 , ch ) : " << chPointer-str1+1;
    cout << "\n strstr ( str1 , \" ell \" ) : " << strstr(str1,"ell");
    cout << "\n strcat ( str1 , \" Good \" ) : " << strcat(str1,"Good");
    cout << "\n strcpy ( str1 , str2 ) : " << strcpy(str1,str2);
    
    cout << "\n STRING CLASS FUCNTIONS IN STANDARD C++ : " ;
    cout << "\n StrObj.size() : " << sObj1.size() ;
    cout << "\n StrObj.append( sObj2 ) : " << sObj1.append(sObj2);
    cout << "\n StrObj.append( string , pos ) : " << sObj2.append(sObj1,4);
    cout << "\n StrObj.insert( pos , string ) :" << sObj2.insert(3, "Hey" );
    sObj2.clear();
    cout << "\n StrObj.assign( StrObj ) : (called after clear()) : " << sObj2.assign(sObj1);
    cout << "\n StrObj.replace( pos , numOfChrToBeReplaced , StrObj ) : " << sObj1.replace(5, 3, sObj2);
    sObj2.swap(sObj1);
    cout << "\n StrObj.swap( StrObj ) :" << sObj2;
    cout << endl << " " ;
    
    return 0;
    
 
}

