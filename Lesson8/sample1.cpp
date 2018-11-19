#include <iostream>
using namespace std;

int main(){
	int a;
	int* pA;

	a = 5;
	pA = &a;

	cout << "variable a = " << a << "\n";
	cout << "address of a = " << &a << "\n";
	cout << "pointer pA = " << pA << "\n";
	cout << " *pA = " << *pA << "\n";
	cout << *(&(*pA)) << "\n";

	return 0;
}