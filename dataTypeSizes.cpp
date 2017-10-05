//BASIC DATA TYPES
#include<iostream>
using namespace std;

int main() {
	int intVar;
	char charVar;
	double doubleVar;
	bool boolVar;
	float floatVar;
	unsigned char unsCharVar;
	signed char sgnCharVar;
	unsigned int unsIntVar;
	signed int sgnIntVar;
	short int shortIntVar;
	unsigned short int unsShortIntVar;
	signed short int sgnShortIntVar;
	long int longIntVar;
	unsigned long int unsLongIntVar;
	signed long int sgnLongIntVar;
	long double longDoubleVar;
	
	//ARRAY DECLARATION
	int intArr[5];
	char charArr[5];
	double doubleArr[5];
	bool boolArr[5];
	float floatArr[5];
	unsigned char unsCharArr[5];
	signed char sgnCharArr[5];
	unsigned int unsIntArr[5];
	signed int sgnIntArr[5];
	short int shortIntArr[5];
	unsigned short int unsShortIntArr[5];
	signed short int sgnShortIntArr[5];
	long int longIntArr[5];
	unsigned long int unsLongIntArr[5];
	signed long int sgnLongIntArr[5];
	long double longDoubleArr[5];
	
	
	cout  << " \n Printing Sizes of all data types.........." ;
	cout  << " \n SizeOf(intVar): " << sizeof ( intVar ) ;
	cout  << " \n SizeOf(charVar): " << sizeof ( charVar ) ;
	cout  << " \n SizeOf(doubleVar): " << sizeof ( doubleVar ) ;
	cout  << " \n SizeOf(boolVar): " << sizeof ( boolVar ) ;
	cout  << " \n SizeOf(floatVar): " << sizeof ( floatVar ) ;
	cout  << " \n SizeOf(unsCharVar): " << sizeof ( unsCharVar ) ;
	cout  << " \n SizeOf(sgnCharVar): " << sizeof ( sgnCharVar ) ;
	cout  << " \n SizeOf(unsIntVar): " << sizeof ( unsIntVar ) ;
	cout  << " \n SizeOf(sgnIntVar): " << sizeof ( sgnIntVar ) ;
	cout  << " \n SizeOf(shortIntVar): " << sizeof ( shortIntVar ) ;
	cout  << " \n SizeOf(unsShortIntVar): " << sizeof ( unsShortIntVar ) ;
	cout  << " \n SizeOf(sgnShortIntVar): " << sizeof ( sgnShortIntVar ) ;
	cout  << " \n SizeOf(longIntVar): " << sizeof ( longIntVar ) ;
	cout  << " \n SizeOf(unsLongIntVar): " << sizeof ( unsLongIntVar ) ;
	cout  << " \n SizeOf(sgnLongIntVar): " << sizeof ( sgnLongIntVar ) ;
	cout  << " \n SizeOf(longDoubleVar): " << sizeof ( longDoubleVar ) ;
	
	cout  << "Printing Sizes of Arrays of all possible data types..........";
	cout  << "\n SizeOf(intArr):" << sizeof(intArr);
	cout  << "\n SizeOf(charArr):" << sizeof(charArr);
	cout  << "\n SizeOf(doubleArr):" << sizeof(doubleArr);
	cout  << "\n SizeOf(boolArr):" << sizeof(boolArr);
	cout  << "\n SizeOf(floatArr):" << sizeof(floatArr);
	cout  << "\n SizeOf(unsCharArr):" << sizeof(unsCharArr);
	cout  << "\n SizeOf(sgnCharArr):" << sizeof(sgnCharArr);
	cout  << "\n SizeOf(unsIntArr):" << sizeof(unsIntArr);
	cout  << "\n SizeOf(sgnIntArr):" << sizeof(sgnIntArr);
	cout  << "\n SizeOf(shortIntArr):" << sizeof(shortIntArr);
	cout  << "\n SizeOf(unsShortIntArr):" << sizeof(unsShortIntArr);
	cout  << "\n SizeOf(sgnShortIntArr):" << sizeof(sgnShortIntArr);
	cout  << "\n SizeOf(longIntArr):" << sizeof(longIntArr);
	cout  << "\n SizeOf(unsLongIntArr):" << sizeof(unsLongIntArr);
	cout  << "\n SizeOf(sgnLongIntArr):" << sizeof(sgnLongIntArr);
	cout  << "\n SizeOf(longDoubleArr):" << sizeof(longDoubleArr);
	
	return 0;
	
}
