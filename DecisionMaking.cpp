//Decision Making Statements
#include<iostream>
using namespace std;

enum Colors{
	Voilet ,
	Indigo ,
	Blue , 
	Green ,
	Yellow ,
	Orange ,
	Red
};

int main(){
	Colors colVar;
	colVar=Green;
	
	switch ( colVar ) {
		case Voilet : cout << "\n Voilet " ;
					  break ;
		case Indigo : cout << "\n Indigo " ;
					  break ;
		case Blue   : cout << "\n Blue " ;
				      break ;
		case 3  : cout << "\n Green " ;
		             // break ; Fall through 
		case Yellow : cout << "\n Yellow " ;
					  break ;
		case Orange : cout << "\n Orange " ;
					  break ;
		case Red    : cout << "\n Red " ;
					  break ;
		default     : cout << "\n Wrong Choice " ; 
					  break ;
	}	 
	
	if ( colVar > 3 ){
		cout << "\n Value can be from GYOR " ;
	}
	else if ( colVar == 3 ) {
		cout << "\n It is Green " ; 
	} 
	else{
		cout << "\n It is either Voilet or Indigo " ;
	}
	
	return 0 ;
}

