//Operators in C++
#include<iostream>
#include<windows.h>
using namespace std;

void ClearScreen();

int main(){
	auto num1 = 0, num2 = 0;

	//USING OPERATORS
	cout << "\n Enter two values: " ;
	cout << "\n Number 1: " ;
	cin >> num1 ;
	cout << "\n Number 2: " ;
	cin >> num2 ;
	
	//system("CLS") ;
	void ClearScreen();
	
	cout << "\n You Entered :" << endl << " Number 1 :" << num1 << endl << " Number 2 :" << num2 << endl ;
	
	cout << "\n Result of Various Operators : " ;
	
	cout << "\n Post fix ++ : " << num1++ ;
	cout << "\n Updation    : " << num1 ;
	//cout << "\n\n Post fix -- : " << num1-- ;
	cout << "\n Updation    : " << num1 ;
	cout << "\n\n Pre fix ++  : " << ++num1 ;
	cout << "\n Pre fix --  : " << --num1 ;
	cout << "\n\n Evaluation of num1++ + ++num1 :" << num1++ + ++num1 ; 
	cout << "\n Number 1 : num1++ + ++num1 : " << num1 ;
	cout << "\n\n Unary -     : " << -num1 ;
	cout << "\n Unary ~     : " << ~num1 ;
	cout << "\n Unary (type): " << (char)num1 ;
	cout << "\n Unary &     : " << &num1 ;
    cout << "\n Unary !     : " << !num2 ;	
    sizeof() opertaor already covered    
    cout << "\n\n Multiplicative : num1*num2/4%num 2 :" << num1*num2/4%num2 ;
    cout << "\n\n Aditive : num1+num2-num1*num2 : " << num1+num2-num1*num2 ;
    num1 = num1<<2 ;
	cout << "\n\n Shift Operators << : ( Multiply by 2 ) : " << num1 ;
	num1 = num1>>2 ;
	cout << "\n Shift Operators >> : ( Devide by 2 ) : " << num1 ;
	//Relational and Equaltiy Operators are easy to evaluate and will be covered in the subsequent in decision making structure 
	num1 = num1&num2 ;
	cout << "\n\n Bitwise & : " << num1 ;
	num1 = num1|num2 ;
	cout << "\n Bitwise | : " << num1 ;
	num1 = num1^num2 ;
	cout << "\n Bitwise ^ : " << num1 ; //IMPORTANT 
	cout << "\n\n Logical && : " << num1&&num2 ;
	cout << "\n Logical || : " << num1||num2 ;
	//Conditional will be covered in decision making stmt 
	//Assignment and comma will follow around 

	//For Float following operators generator error : ~ , % , << , >> , & , |(pipe) , ^
	//for boolean following operators generate error : -- (post and pre) 
	 
}

void ClearScreen()
  {
  HANDLE                     hStdOut;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD                      count;
  DWORD                      cellCount;
  COORD                      homeCoords = { 0, 0 };

  hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
  if (hStdOut == INVALID_HANDLE_VALUE) return;

  /* Get the number of cells in the current buffer */
  if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
  cellCount = csbi.dwSize.X *csbi.dwSize.Y;

  /* Fill the entire buffer with spaces */
  if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Fill the entire buffer with the current colors and attributes */
  if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Move the cursor home */
  SetConsoleCursorPosition( hStdOut, homeCoords );
  }
