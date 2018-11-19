#include <iostream>
using namespace std;

void func();

int a = 0; 			//global variable

int main(){
	int b = 1; 		 //local variable

	int a = 10;

	cout << "in main, a and b can be used \n";
	cout << "global variable a = " << ::a << "\n";
	cout << "local variable b =  " << b << "\n";
	cout << "local variable a = " << a << "\n";

	func();

	return 0;
}

void func(){

	int b = 2;
	cout << "in func, a and c can be used \n";
	cout << "a = " << a << "\n";
	cout << "b_func = " << b << "\n";
}