#include <iostream>
using namespace std;

static int glbStatCnt=10;

void dispCount(){
	static int lclStatCnt=0;
	lclStatCnt++;
	cout << "\n Local Static Count : " << lclStatCnt ;
	cout << "\n Global Static Count : " << glbStatCnt ;
	cout <<	endl ;
}

int main(int argc, char** argv) {
	
	while(glbStatCnt){
	dispCount();
	glbStatCnt--;
	}
	
	
	return 0;
}
