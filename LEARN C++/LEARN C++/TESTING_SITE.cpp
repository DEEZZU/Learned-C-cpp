//
//  TESTING_SITE.cpp
//  LEARN C++
//
//  Created by DEEPTI SHARMA on 17/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

//int main(){

//    int num1,num2;
//
//    int a['A'] = {0};
//    int ab = 'A';
//    num1=5;
//    num2=6;
//
//    int *a1=&num1;
//    int *b1=&num2;
//    int temp=0;
//
//    temp=(*a1);
//
//    *a1=*b1;
//    *b1=temp;
//    cout  << num1 << num2 ;
//
//    cout << sizeof((int)('A')) << " " << sizeof("A") << " " << ab << endl;
//    cout << "sizeof(a)" << sizeof(a)/sizeof(a[0]) ;
//    vector<vector<int>> A({{1,2,3},{4,5,6},{7,8,9}});

//    vector<vector<int> > performOps(vector<vector<int> >&A)
//    {
//            vector<vector<int> > B;
//            B.resize(A.size());
//            for (int i = 0; i < A.size(); i++) {
//                    B[i].resize(A[i].size());
//                    for (int j = 0; j < A[i].size(); j++) {
//                            B[i][A[i].size() - 1 - j] = A[i][j];
//                        }
//                }
//        return B ;
//      }
//
//    int main()
//    {
//            vector<vector<int> > A ({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}});
//
//            vector<vector<int> > B = performOps(A);
//
//            for (int i = 0; i < B.size(); i++)
//                {
//                        for (int j = 0; j < B[i].size(); j++) cout<<B[i][j]<<" ";
//                    }
//
//            return 0;
//        }

    
//    string s;
//    s="43";
//    int sz;
//    sz=s.length();
//    int num;
//    num=0;
//
//    for(int i=0;i<sz;i++){
//        num=num*10;
//        switch(s.at(i)){
//                case '0' :num+=0; break;
//                case '1' :num+=1; break;
//                case '2' :num+=2; break;
//                case '3' :num+=3; break;
//                case '4' :num+=4; break;
//                case '5' :num+=5; break;
//                case '6' :num+=6; break;
//                case '7' :num+=7; break;
//                case '8' :num+=8; break;
//                case '9' :num+=9; break;
//        }
//    }
//
//    cout << "num :" << num;
//
//
//    return 0;
//}

int main(){
    
//    int a = 320 ;
//    char* ptr ;
////    void (*p)();
////    double (*q)();
////    size_t (*r)();
//////    p = ;
////    q = pow;
////    r = strlen;
//////    (*p)();
////    (*r)("cquestionbank.blogspot.com");
////    (*q)();
////
//    ptr=(char*)&a;
//    cout << (int)*ptr;
//    long a,b,c,d;
//    char *p = ( char *)0;
//    int *q = ( int *)0;
//    float *r = ( float *)0;
//    double *s = 0;
//    a = (long)(p+1);
//    b = (long)(q+1);
//    c = (long)(r+1);
//    d = (long)(s+1);
//    cout << a << b << c << d ;
//
    
//this gives 2
    // difference of 2 pointers declared immediately is 1
    // but if i decrease the q then i get 2
    
    int a = 5,b = 10,c;
    int *p = &a,*q = &b;
    cout << q ;
    q--;
    cout << endl << q << endl ;
    c = (p-q);
    cout << p<< endl << q << endl << c ;
    return 0;
    
}
