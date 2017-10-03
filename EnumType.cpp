//enum type and typedef
#include<iostream>
using namespace std;

enum Months {
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

enum WeekDays {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum Colors {
	Voilet=2,
	Indigo,
	Blue,
	Green,
	Yellow=7,
	Orange,
	Red
};


//enum Alpha : char {
//	A='a',
//	B,
//	C
//};

int main()
{
	Colors colorVar;
	int intColVar;
	colorVar=Voilet;
	cout << "\n Value of colorVar after : colorVar=Voilet :" << colorVar;
	
	colorVar=Indigo;
	intColVar= Indigo;
	cout << "\n Value of colorVar after : colorVar=Indigo :" << intColVar;
	
	colorVar=Orange;
	cout << "\n Value of colorVar after : colorVar=Blue :" << colorVar;
	
/*	Alpha alphaChars;
	alphaChars = B;
	cout << "\n Value of Aplha : B :" << alphaChars;*/
		
	
	return 0;
}
