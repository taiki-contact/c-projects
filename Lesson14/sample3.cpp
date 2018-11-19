#include <iostream>
using namespace std;

class Car{
protected:
	int num;
	double gas;
public:
	Car();
	Car(int n,double g);
	void setCar(int n,double g);
	virtual void show();
};

class RacingCar:public Car
{
private:
	int course;
public:
	RacingCar();
	RacingCar(int n ,double g, int c);
	void setCourse(int c);
	void show();
};

//constructor of Car class 
Car::Car(){
	cout << "CONSTRUCTOR\n";
	num = 0;
	gas = 0.0;
	cout << "made Car \n";
}

Car::Car(int n ,double g){
	cout << "CONSTRUCTOR\n";
	num = n;
	gas = g;
	cout << "Car number : " << num << "\t the amount of gasoline : " << gas  << "\n";
	cout << "made Car \n";
}

void Car::setCar(int n, double g){
	num = n;
	gas = g;
	cout << "SET CAR\n";
	cout << "Car number and the amount of gasoline was set\n";
	cout << "Car number : " << num << "\t The amount of gasoline : " << gas << "\n"; 
}

void Car::show(){
	cout << "SHOW\n";
	cout << "Car number : " << num << "\t the amount of gasoline : " << gas << "\n";
}

RacingCar::RacingCar(){
	cout << "CONSTRUCTOR\n";
	course = 0;
	cout << "made RacingCar \n";
}

RacingCar::RacingCar(int n, double g, int c):Car(n,g){
	cout << "CONSTRUCTOR\n";
	course = c;
	cout << "made RacingCar \n";
	cout << "course number : " << course << "\n";
}

void RacingCar::setCourse(int c){
	course = c;
	cout << "SETCOURSE\n";
	cout << "course number was set\n";
	cout << "course number : " << course << "\n";
}

void RacingCar::show(){
	cout << "SHOW\n";
	cout << "RacingCar number : " << num << "\t the amount of gasoline : " << gas 
	<< "\t course number : " << course << "\n";
}

int main(){
	Car* pCars[2];

	Car car1;
	RacingCar rccar1(4567,30.5,5);

	pCars[0] = &car1;
	pCars[0]-> setCar(1234,20.5);

	pCars[1] = &rccar1;

	for (int i = 0; i < 2; i++)
	{
		pCars[i]->show();
	}

	return 0;
}



