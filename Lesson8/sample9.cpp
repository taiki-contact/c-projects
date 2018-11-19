#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main(){

	int num1 = 5;
	int num2 = 10;

	cout << "num1 = " << num1 << "\n";
	cout << "num2 = " << num2 << "\n";

	swap(num1,num2);

	cout << "num1 = " << num1 << "\n";
	cout << "num2 = " << num2 << "\n";

	return 0;
}

void swap(int& x, int& y){
	int tmp;

	tmp = x;
	x = y;
	y = tmp;

}