#include <iostream>
using namespace std;

int main(){
	char str[] = "Hello";

	cout << str << "\n"; 		// Hello
	cout << &str << "\n"; 		// address of str
	cout << &str[0] << "\n"; 	//Hello
	cout << &str[1] << "\n";    //ello
	cout << *str << "\n"; 		//H
	cout << str[1] << "\n";		//e
	cout << str+1 << "\n";		//ello
	cout << &*(str+1) << "\n";	//ello

	return 0;
}