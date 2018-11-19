#include <iostream>

class Car{
private:
	int num;
	double gas;

public:
	Car();
	Car(int n, double g);
	void show();

};

Car::Car(){
	num = 0;
	gas = 0.0;
	std::cout << "made car object\n";

}

Car::Car(int n, double g){
	num = n;
	gas = g;
	std::cout << "number is " << num << ": the amount of gasoline is " << gas << "\n";
	std::cout << "object Car was made \n"; 
}

void Car::show(){
	std::cout << "the number of car : " << num << "\n";
	std::cout << "the amount of gasoline :" << gas << "\n";

}

int main(){
	Car car1;
	Car car2(1234,20.5);
	car1.show();

	return 0;
}
