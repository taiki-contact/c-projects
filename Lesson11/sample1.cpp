#include <iostream>
using namespace std;

enum Week{SUN,MON,TUE,WED,THU,FRI,SAT};

int main(){
	Week w;

	w = MON;

	cout << w << "\n"; 


	switch(w){
		case SUN: 
			cout << "Sunday\n";
			break;
		case MON:
			cout << "Monday\n";
			break;
		case TUE: 
			cout << "Tuesday\n";
			break;
		case WED:
			cout << "Wednesday\n";
			break;
		case THU: 
			cout << "Thursday\n";
			break;
		case FRI:
			cout << "Friday\n";
			break;
		case SAT:
			cout << "Saturday\n";
			break;
	}

	return 0;
}
