## OUTPUT 1
// Thanks to Venki for suggesting this code.
#include <iostream>
using namespace std;

class Empty
{ int b ; int d;};

class Derived1 : public Empty
{};

class Derived2 : virtual public Empty
{};

class Derived3 : public Empty
{ 
	char c;
};

class Derived4 : virtual public Empty
{
	char c;
};

class Dummy
{
	char c;
};

int main()
{
    int* a;
	cout << "sizeof(Empty) " << sizeof(Empty) << endl;
	cout << "sizeof(Derived1) " << sizeof(Derived1) << endl;
	cout << "sizeof(Derived2) " << sizeof(Derived2) << endl;
	cout << "sizeof(Derived3) " << sizeof(Derived3) << endl;
	cout << "sizeof(Derived4) " << sizeof(Derived4) << endl; 
	cout << "sizeof(Dummy) " << sizeof(Dummy) << endl;
	cout << "sizeof(virtual)" << sizeof(a) << endl;
	cout << "sizeof(char)" << sizeof(char) << endl;

	return 0;
}


Output :
sizeof(Empty) 8
sizeof(Derived1) 8
sizeof(Derived2) 16
sizeof(Derived3) 12
sizeof(Derived4) 24
sizeof(Dummy) 1
sizeof(virtual)8
sizeof(char)1
