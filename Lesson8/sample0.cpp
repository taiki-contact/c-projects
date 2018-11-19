#include <iostream>
using namespace std;

void change(const int* p_x);

void change2(const int& r_y);

int main(){
	int x = 0;
	int y = 10;

	change(&x);
	change2(y);

	cout <<"x = " << x << "\n";
	cout << "y = " << y << "\n";

	return 0;
}


void change(const int* p_x){
	cout << "p_x = " << *p_x << "\n";
	//*p_x = 5;
}

void change2(const int& r_y){
	cout << "r_y = " << r_y << "\n"; 
	//y = 100;
}