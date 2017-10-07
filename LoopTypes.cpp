//Various Cpp Loop types 
#include<iostream>
using namespace std;

int main(){
	
	int i ; //iterator
	int endCount=10;
	
	cout << "\n Enter the number of times you want to execute the loop : " ;
	cin >> endCount ; 
	
	for ( i = 0; i < endCount ; i++ ){
		
		if( i != 4 ){
			cout << " for ( " << i+1 << " ) " << endl ;
		}
		continue; // it will skip fifth iteration 
		
	}

	i = 0 ;
	
	while ( i< endCount ){
		if( i > 6){
			
			goto label ;
		}
		else{	
			
			cout << " while ( " << i+1 << " ) " << endl ; 
			i++;
		}
	}	
	
	label :
	i = 0 ;

	do{
		if( i< 5){
			
			cout << " do...while ( " << i+1 << " ) " << endl ;
			i++;
		}
		else{
			
			break;
		}
		
	}while ( i < endCount );
	
	
	return 0;	
}

