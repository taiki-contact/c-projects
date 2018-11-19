#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle{ // abstract class
protected:
	int speed;
public:
	void setSpeed(int s);
	virtual void show() = 0 ;// 	pure virtual function
};

class Car : public Vehicle{
private:
	int num;
	double gas;
public:
	Car(int n,double g);
	void show();
};

class Plane :public Vehicle{
private:
	int flight;
public:
	Plane(int f);
	void show();
};

void Vehicle::setSpeed(int s){
	speed = s;
	cout << "speed was set to  " << speed << "\n"; 
}

Car::Car(int n,double g){
	num = n;
	gas = g;
	cout << "Car number : " << num << "\t the amount of gasoline : "
	<< gas << "\t car was made\n";
}

void Car::show(){
	cout << "Car number : " << num 
	<< "\t the amount of gasoline : "<< gas 
	<< "\t speed : " << speed << "\n";
}

Plane::Plane(int f){
	flight = f;
	cout << "flight number : " << flight << "\t Plane was made\n"; 
}

void Plane::show(){
	cout << "flight number : " << flight 
	<< "\tspeed : " << speed << "\n"; 
}

int main(){
	Vehicle* pVc[2];

	Car car1(1234,20.5);
	pVc[0] = &car1;

	Plane pln1(747);
	pVc[1] = &pln1;

	for (int i = 0; i < 2; i++)
	{
			cout << "index " << (i+1) 
			<< " 's type is  " << typeid(*pVc[i]).name() << "\n";
	}

}