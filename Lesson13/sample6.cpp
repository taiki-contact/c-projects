#include <iostream>
using namespace std;

class Car{
	private:
		int num;
		double gas;

	public:
		static int sum;
		Car();
		Car(int n , double g);
		void show();
		static void showSum();

};

Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "object car was maded\n";
	sum++;
}

Car::Car(int n, double g){
	num = n;
	gas = g;
	sum++;
	cout << "Car number :" << num << "the amount of gasoline :" << gas << "\n";
	cout << "object Car was maded\n";

}

void Car::showSum(){
	cout << "the number of cars is " << sum << "\n";
}

int Car::sum = 0;

int main(){
	Car mycars[3]={
		Car(),
		Car(1234,25.5),
		Car(4567,52.2)
	};

	Car::showSum();

	return 0;

}
