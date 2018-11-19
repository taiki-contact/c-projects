#include <iostream>
using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		int getNum(){return num;}
		double getGas(){return gas;}
		void show();
		void setNumGas(int n, double g);
};

void Car::show(){
	cout << "Car number is " << num << "\n";
	cout << "The amount of gasoline is " << gas << "\n";

}

void Car::setNumGas(int n, double g){
	if(g>0 && g<1000){
		num = n;
		gas = g;
		cout << "Number was changed to " << num << "\n";
		cout << "the amount of gasoline was changed to " 
		<< gas << "\n";

		}else{
			cout << g << " is not valid value for the amount of gasoline\n";
			cout << "to change the amount of gasoline was not done \n";
		}

}

void buy(Car* pc){
	cout << "Bought Car whose the amount of gasoline is " 
	<< pc->getGas() << "and the number is " 
	<< pc->getNum() << "\n"; 
}

int main(){
	Car* pCar1;
	Car* pCar2;


	pCar1 = new Car; // Car型のメモリを確保
	pCar2 = new Car;

	/*pCar1->num = 1234;
	pCar1->gas = 20.5;

	pCar2->num = 2345;
	pCar2->gas = 30.5; */

	pCar1->setNumGas(1234,20.5);
	pCar1->show();

	pCar2->setNumGas(1630,30.5);
	pCar2->show();

	pCar2->setNumGas(1630,-10);
	pCar2->show();

	buy(pCar1);

	delete pCar1; //Car型のメモリを解放
	delete pCar2;

	return 0;
}

