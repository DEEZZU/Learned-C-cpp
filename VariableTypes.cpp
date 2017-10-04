#include<iostream>
using namespace std;

typedef int Integer;
typedef char Character;
typedef double Word;
typedef bool Boolean;
typedef float Real;

extern Integer IntegerVar;
extern Character CharacterVar;
extern Word doubleVar;
extern Boolean boolVar;
extern Real floatVar;
extern unsigned char unsCharacterVar;
extern signed char sgnCharacterVar;
extern unsigned int unsIntegerVar;
extern signed int sgnIntegerVar;
extern short int shortIntegerVar;
extern unsigned short int unsShortIntegerVar;
extern signed short int sgnShortIntegerVar;
extern long int longIntegerVar;
extern unsigned long int unsLongIntegerVar;
extern signed long int sgnLongIntegerVar;
extern long double longDoubleVar;
	

Integer main()
{
	Integer IntegerVar=987654321;
	Character CharacterVar='z';
	Word doubleVar=98765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198.987654321987654321987654321; // digit beyond it generates inf
	Boolean boolVar=true;
	Real floatVar=98765432198765432198765432198765432198.987654321; // one digit beyond it generates inf: infinity
	unsigned char unsCharacterVar=97;
	signed char sgnCharacterVar=-97;
	unsigned int unsIntegerVar=987654321;
	signed int sgnIntegerVar=-987654321;
	short int shortIntegerVar=9876;
	unsigned short int unsShortIntegerVar=9876;
	signed short int sgnShortIntegerVar=-9876;
	long int longIntegerVar=987654321;
	unsigned long int unsLongIntegerVar=987654321;
	signed long int sgnLongIntegerVar=-987654321;
	long double longDoubleVar=98765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198765432198.987654321987654321;
	
	
	cout  << "\n PrIntegering Values of all Variables..........";
	cout  << "\n  IntegerVar :" <<  IntegerVar ;
	cout  << "\n  CharacterVar :" <<  CharacterVar ;
	cout  << "\n  doubleVar :" <<  doubleVar ;
	cout  << "\n  boolVar :" <<  boolVar ;
	cout  << "\n  floatVar :" <<  floatVar ;
	cout  << "\n  unsCharacterVar :" <<  unsCharacterVar ;
	cout  << "\n  sgnCharacterVar :" <<  sgnCharacterVar ;
	cout  << "\n  unsIntegerVar :" <<  unsIntegerVar ;
	cout  << "\n  sgnIntegerVar :" <<  sgnIntegerVar ;
	cout  << "\n  shortIntegerVar :" <<  shortIntegerVar ;
	cout  << "\n  unsShortIntegerVar :" <<  unsShortIntegerVar ;
	cout  << "\n  sgnShortIntegerVar :" <<  sgnShortIntegerVar ;
	cout  << "\n  longIntegerVar :" <<  longIntegerVar ;
	cout  << "\n  unsLongIntegerVar :" <<  unsLongIntegerVar ;
	cout  << "\n  sgnLongIntegerVar :" <<  sgnLongIntegerVar ;
	cout  << "\n  longDoubleVar :" <<  longDoubleVar ;
	
}
