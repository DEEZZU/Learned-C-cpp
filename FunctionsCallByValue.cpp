//Functions in cpp
#include<iostream>
using namespace std;

int retMax(int,int);

int main(){

int num1, num2;
int res;

cout << "\n Enter first value : " ;
cin >> num1 ;
cout << "\n Enter second value : " ;
cin >> num2 ;

res=retMax( num1, num2);

cout << "\n The Maximum of two is : " << res ;

return 1;
}

int retMax( int num1, int num2){

if ( num1 > num2 ){
  return num1;
}
else {
  return num2;
}

}
