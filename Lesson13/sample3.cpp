#include <iostream>
using namespace std;

class Car{
	private:
		int num;
		double gas;

	public:
		Car();
		Car(int n , double g);
		void show();

};

Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "object car was maded\n";
}

Car::Car(int n, double g){
	num = n;
	gas = g;
	cout << "Car number :" << num << "the amount of gasoline :" << gas << "\n";
	cout << "object Car was maded\n";

}

int main(){
	Car mycars[3]={
		Car(),
		Car(1234,25.5),
		Car(4567,52.2)
	};

	return 0;

}
