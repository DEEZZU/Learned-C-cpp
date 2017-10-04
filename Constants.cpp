//Constants amd Literals
//use of #define and const keyword for constant declaration
//use of setbase() with cout object for setting base and avoiding conversion

#include<iostream>
#include<iomanip>
using namespace std;

#define SIDE 10
#define PI 3.142856
#define NEWLINE '\n'

int main(){
	const int decVar=987654321;
	const int octVar=01234567;
	const int hexVar=0x1AB23;
	
	const float floatVar1=3.16;
	const float floatVar2=3.16e-01;
	const float floatVar3=123e3;
	
	const char charVar1='a';
	const char charVar2='\\';
//	const char charVar3=\u02C0; universal characters <??

	const char string[]="Hello \
						 deeps "; //without slash generates error
	
	int perimeter;
	float area;
	
	perimeter=4*SIDE;
	area=PI*floatVar2*floatVar2;
	
	cout << NEWLINE << " Values of Various Constants declared : " ;
	cout << NEWLINE << " DECIMAL VARIABLE : " << decVar ;
	cout << NEWLINE << " OCTAL VARIABLE (WITHOUT SETTING BASE) : " << octVar ;
	cout << NEWLINE << " OCTAL VARIABLE (AFTER SET BASE) : " << setbase(8) << octVar << setbase(10) ;
	cout << NEWLINE << " HEXADECIMAL VARIABLE (WITHOUT SETTING BASE) : " << hexVar;
	cout << NEWLINE << " HEXADECIMAL VARIABLE (AFTER SET BASE) : " << setbase(16) << hexVar << setbase(10) ;
	cout << NEWLINE << " FLOAT VAR 1 : " << floatVar1 ;
	cout << NEWLINE << " FLOAT VAR 2 : " << floatVar2 ;
	cout << NEWLINE << " FLOAT VAR 3 : " << floatVar3 ;	
	cout << NEWLINE << " CHAR VAR 1 : " << charVar1 ;
	cout << NEWLINE << " CHAR VAR 2 : " << charVar2 ;
//	cout << NEWLINE << " CHAR VAR 3 : ";
	cout << NEWLINE << " STRING CONSTANT : " << string ;
	cout << NEWLINE << " PERIMETER : " << perimeter ;
	cout << NEWLINE << " AREA : " << area ;
		
}
