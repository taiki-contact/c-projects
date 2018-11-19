#include <iostream>
using namespace std;

int main(){
	int num1 = 5;
	int num2 = 4;
	double div1;
	double div2;

	div1 = num1 / num2;
	div2 = (double)num1 / (double)num2 ;

	cout << "in int type divided = " << div1 << "\n";
	cout << "used cast to double type and divided = " << div2 << "\n";

	return 0;
	
}