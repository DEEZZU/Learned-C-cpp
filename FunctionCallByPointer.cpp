//Functions using call by pointer 
#include<iostream>
using namespace std;

void sum(int* , int&, int&);

int main() {
	int num1, num2;
	int sumResult;
	
	cout << "\n Enter any two numbers : " ;
	cout << "\n Enter num1 : " ;
	cin >> num1 ;
	cout << "\n Enter num2 : " ;
	cin >> num2 ;
	
	sum(&sumResult,num1,num2);
	
	cout << "\n Result of Addition : " << sumResult ;
	
	return 0;
}

void sum ( int* Res , int& n1 , int& n2 ){
	
	*Res=n1+n2;
}
