//
//  DateTime.cpp
//  LEARN C++
//
//  Created by DEEPTI SHARMA on 26/10/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include<ctime>
using namespace std;
#define maxSize 100


int main(){

    time_t timeVar ;
    timeVar = time(NULL) ;
    clock_t timeRunning ;
    timeRunning = clock() ;
    char buffer[maxSize] ;
    int sizeOfRes ;
    
//    struct tm timeObj;
//    timeObj = localtime(&timeVar) ;
//    struct tm {
//        int tm_sec;   // seconds of minutes from 0 to 61
//        int tm_min;   // minutes of hour from 0 to 59
//        int tm_hour;  // hours of day from 0 to 24
//        int tm_mday;  // day of month from 1 to 31
//        int tm_mon;   // month of year from 0 to 11
//        int tm_year;  // year since 1900
//        int tm_wday;  // days since sunday
//        int tm_yday;  // days since January 1st
//        int tm_isdst; // hours of daylight savings time
//    }
    
    cout << "\n Current System Time in seconds : " << timeVar ;
    cout << "\n Current System Time : ctime(&timeVar) : " << ctime(&timeVar) ;
    cout << "\n Printing Value in TM Structure : " ;
    cout << "\n TM->TM_SEC : " << localtime(&timeVar)->tm_sec ;
    cout << "\n TM->TM_MIN : " << localtime(&timeVar)->tm_min;
    cout << "\n TM->TM_HOUR : " << localtime(&timeVar)->tm_hour ;
    cout << "\n TM->TM_MDAY : " << localtime(&timeVar)->tm_mday ;
    cout << "\n TM->TM_MON : " << localtime(&timeVar)->tm_mon ;
    cout << "\n TM->TM_YEAR : " << localtime(&timeVar)->tm_year ;
    cout << "\n TM->TM_WDAY : " << localtime(&timeVar)->tm_wday ;
    cout << "\n TM->TM_YDAY : " << localtime(&timeVar)->tm_yday ;
    cout << "\n TM->TM_ISDST : " << localtime(&timeVar)->tm_isdst ;
    cout << "\n Time for which Programme is running : " << timeRunning ;
    cout << "\n STRING FORM of Structure TM : " << asctime(localtime(&timeVar)) ;
    cout << "\n Greenwich Mean Time : " << asctime(gmtime(&timeVar)) ;
    cout << "\n Calender Equivalent of Greenwich Mean Time : " << mktime(gmtime(&timeVar)) ;
    cout << "\n Difference in time : Grrenwich Mean Time - My Time : " << difftime(mktime(localtime(&timeVar)), mktime(gmtime(&timeVar))) ;
    sizeOfRes = strftime( buffer, sizeof(buffer), " %A %T ", localtime(&timeVar)) ; //we can format into other forms as well 
    cout << "\n FORMATTING TIME : " << buffer ;
    cout << endl << " " ;
    
    return 0;
    
}

