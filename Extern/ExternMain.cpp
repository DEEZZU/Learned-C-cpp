#include <iostream>
using namespace std;

int count;
extern void incCount();

int main(int argc, char** argv) {
	
	count=5;
	incCount();
	return 0;
}
