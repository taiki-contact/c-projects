#include <iostream>
using namespace std;

int main(){

	int res ;
	char ans;

	cout << "Which corse do you select \n";
	cout << "input number \n";

	cin >> res;

	ans = (res == 1) ? 'A' : 'B' ;

	cout << "you selected " << ans << " course \n" ;

	return 0;
}