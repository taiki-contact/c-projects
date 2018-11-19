#include <iostream>
using namespace std;

class Car{
	protected:
		int num;
		double gas;
	public:
		Car();
		Car(int n ,double g);
		void setCar(int n, double g);
		void show();
};


class RacingCar : public Car{
	private:
		int course;
	public:
		RacingCar();
		RacingCar(int n, double g, int c);
		void setCourse(int c);
		void newShow();
};

Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "made Car \n";
}


Car::Car(int n, double g){
	num = n;
	gas = g;
	cout << "Car number : " << num << "\t" 
	<< "the amount of gasoline : " << gas << "\t"
	<< "made Car \n"; 
}


void Car::setCar(int n ,double g){
	num = n;
	gas = g;
	cout << "number was changed to " << num 
	<< " the amount of gasoline was changed to " << gas << "\n";
}


void Car::show(){
	cout << "Car number : " << num << "\n" ;
	cout << "gasoline : " << gas << "\n";
}


RacingCar::RacingCar(){
	course = 0;
	cout << "made RacingCar \n";
}


RacingCar::RacingCar(int n, double g, int c):Car(n,g){
	course= c;
	cout << "course number : " << course << "\t"
	<< "made RacingCar \n"; 
}


void RacingCar::setCourse(int c){
	course = c;
	cout << "course number was changed to " << course << "\n";
}



void RacingCar::newShow(){
	cout << "number of racingcar : " << num << "\n";
}


int main(){
	RacingCar rccar1(1234,20.5,20);
	rccar1.newShow();

	return 0;

}