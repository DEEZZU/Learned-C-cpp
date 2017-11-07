#include <iostream>
using namespace std;

static auto glbStatCnt=10;

void dispCount(){
	static auto lclStatCnt=0;
	lclStatCnt++;
	cout << "\n Local Static Count : " << lclStatCnt ;
	cout << "\n Global Static Count : " << glbStatCnt ;
	cout <<	endl ;
}

//One can use static to return local variables in main 

int dispCount_2(){
	static auto new_num=5;
	return new_num;
}

int main(int argc, char** argv) {
	
	while(glbStatCnt){
	dispCount();
	glbStatCnt--;
	}
	
	int retNum;
	retNum=dispCount_2();
	cout << "\n Returning Local Variable : " << retNum ;

}
