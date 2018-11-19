#include <iostream>
using namespace std;

struct Car{
	int num ;
	int gas ;
};

void show(Car& pc);

int main(){

	Car car1 = {0,0.0};
	cout << "input number \n";
	cin >> car1.num;

	cout << "input the amount of gasoline\n";
	cin >> car1.gas;

	show(car1);

	return 0;

}

void show(Car& pc){
	cout << "the number of car is " << pc.num << "\t" << 
	"the amount of gasoline is " << pc.gas << "\n";


}