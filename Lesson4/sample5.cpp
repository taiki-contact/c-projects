#include <iostream>
using namespace std;

int main(){

	int a=0;
	int b = 0;
	int c = 5;
	b = a++ ;

	cout <<"b ="<< b << "\n";
	cout << "a = " << a << "\n";

	a += c;

	cout << "a = " << a << "\n";

	return 0;
}