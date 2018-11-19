#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 10;

	int* pA;

	pA = &a;

	cout << "a = " << a << "\n";
	cout << "pA = " << pA << "\n";
	cout << "*pA = " << *pA << "\n";

	pA = &b;

	cout << "\n";

	cout << "b = " << b << "\n";
	cout << "pA = " << pA << "\n";
	cout << "*pA = " << *pA << "\n";

	*pA = 100;

	cout << "\n";

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	return 0;
}