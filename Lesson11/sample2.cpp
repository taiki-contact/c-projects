#include <iostream>
using namespace std;

struct Car{
	int num;
	double gas;
};

int main(){
	Car car1;

	cout << "input number for car1 \n";
	cin >> car1.num;

	cout << "input the amount of gasoline \n";
	cin >> car1.gas;

	cout << "car number is " << car1.num << "\t" 
	<< "the amount of gasoline is " << car1.gas << "\n";

	return 0;

}