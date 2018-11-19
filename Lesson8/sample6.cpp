#include <iostream>
using namespace std;

void swap(int* p_x, int* p_y);

int main(){
	int num1 = 5;
	int num2 = 10;

	cout << "num1 = " << num1 << "\n";
	cout << "num2 = " << num2 << "\n";
	cout << "address of num1 = " << &num1 << "\n";
	cout << "address of num2 = " << &num2 << "\n";

	cout << "swapped \n";

	swap( &num1, &num2);

	cout << "num1 = " << num1 << "\n";
	cout << "num2 = " << num2 << "\n";

	return 0;
}

void swap (int* p_x, int* p_y){
	int tmp ;

	tmp = *p_x;
	*p_x = *p_y;
	*p_y = tmp;

}

/*void swap(int x, int y){
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
	
	cout << "address of x = " << &x << "\n";
	cout << "address of y = " << &y << "\n";
	cout << "address of tmp = " << &tmp << "\n";

}*/