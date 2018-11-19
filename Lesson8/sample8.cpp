#include <iostream>
using namespace std;

int main(){
	int a =5;
	int& rA = a;

	cout << "a = " << a << "\n";
	cout << "sanshou rA = " << rA << "\n";

	rA = 50;

	cout << "rA = " << rA << "\n";
	cout << "a = " << a << "\n";
	cout << "address of a = " << &a << "\n" ;
	cout << "address of rA = " << &rA << "\n";

	return 0;
}