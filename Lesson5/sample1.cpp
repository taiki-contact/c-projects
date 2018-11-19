#include <iostream>
using namespace std;

int main(){

	int res;

	cout << "input integer number \n" ;
	cin >> res ;

	if (res == 1){
		cout << "inputed 1 \n";
		cout << "res = " << res << "\n";
	}
	else if(res == 2) { 
		cout << "inputed 2\n";
	}
	else {
		cout << "inputed number is not 1 or 2\n";
	} 

return 0;

}