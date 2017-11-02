//
//  Structures.cpp
//  LEARN C++
//
//  Created by DEEPTI SHARMA on 02/11/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//
// Defining Structure. Creating Struct Variables after definition and in Main() . Passing Structures to funciton : call be reference and value and by pointer.
// Defining typedef for structure. Pointers to Structures.

#include <iostream>
using namespace std;

struct Book{
    char bookName[50];
    char author[50];
    char publications[50];
    int bookId;
} b1 ;

typedef struct{
    int date;
    int month;
    int year;
} Date ;


void initializeBooks(struct Book &);
void printBookDetails(struct Book);
void printDate(Date*);


int main(){
    struct Book b2, b3;
    Date d1; // doesnt require us to write struct keyword
    
    //Initializing Variables of Book Structure Type
    initializeBooks(b1);
    initializeBooks(b2);
    initializeBooks(b3);
    
    //Printing Book Details
    printBookDetails(b1);
    printBookDetails(b2);
    printBookDetails(b3);
    
    // Initializing Date object
    d1.date=4;
    d1.month=11;
    d1.year=2017;
    
    // Passing to function : Pointer to structure
    printDate(&d1);
    
    return 0;
}

void initializeBooks(struct Book & B){
    
    static int countBooks=0;
    countBooks++;
    
    cout << "\n Enter Details for Book Number : " << countBooks ;
    cout << "\n Book Name : " ;
    cin >> B.bookName ;
    cout << "\n Author Name : " ;
    cin >> B.author ;
    cout << "\n Publications : " ;
    cin >> B.publications  ;
    cout << "\n Book Id : " ;
    cin >> B.bookId ;
    
}

void printBookDetails(struct Book B){
    
    cout << "\n BOOK DETAILS : " ;
    cout << "\n BOOK ID : " << B.bookId ;
    cout << "\n BOOK NAME : " << B.bookName ;
    cout << "\n BOOK AUTHOR NAME : " << B.author ;
    cout << "\n BOOK PUBLICATIONS : " << B.publications ;

}


void printDate(Date *D){
    
    cout << "\n DATE : " << D->date << "/" << D->month << "/" << D->year << "\n" ;
    
}
