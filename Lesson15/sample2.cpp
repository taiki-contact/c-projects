/******************************************
auther :Taiki Karakawa
coment: get and release memory of class,
		copy-constructor&substitution operator overload
first made day : 2018/11/10 
final update day : 2018/11/10
*******************************************/

#include <iostream>
#include <cstring>
using namespace std;

class Car{
private:
	int num;
	double gas;
	char* pName;

public:
	Car(char* pN , int n ,double g);	//constructor 
	~Car(); // de-constructor 
	Car(const Car& c);
	Car& operator=(const Car& c); //substitusion operator
	void show();
};

//consturctor 
Car::Car(char* pN , int n , double g){
	pName = new char[strlen(pN) + 1];
	strcpy(pName, pN);
	num = n;
	gas = g;
	cout << pName << "is made \n";
}

//de-consturctor 
Car::~Car(){
	cout << pName << " will be deleted \n";
	delete[] pName;
}

//copy-constructor 
Car::Car(const Car& c){
	cout << "format by " << c.pName << "\n";
	pName = new char[strlen(c.pName) + strlen("'s copy1")+1];
	strcpy(pName ,c.pName);
	strcat(pName,"'s copy1");
	num = c.num;
	gas = c.gas; 
}

//overload of substitution operator
Car& Car::operator=(const Car& c){
	cout << "sustitute " << c.pName << " to " << pName << "\n";
	if(this != &c){
		delete[] pName;
		pName = new char[strlen(c.pName)+strlen("s copy2") +1];
		strcpy(pName,c.pName);
		strcat(pName,"'s copy2");
		num =c.num;
		gas = c.gas;
	} 
	return *this;
}

void Car::show(){
	cout << "Car number :" << num << "\n";
	cout << "The amount of gasoline :" << gas << "\n";
	cout << "Name :" << pName << "\n";
}

int main(){
	Car mycar("\"outback\"",1630,25.5);
	Car car1 = mycar; //format

	Car car2("car2",0,0);
	car2 = mycar; //substitution

	return 0;
}
