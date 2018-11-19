#include <iostream>
using namespace std;

class Point{ //Point is (x,y) in coordinate
private:
	int x; 
	int y;

public:
	Point(int a = 0, int b = 0){x = a; y = b;}
	void setX(int a){x = a;}
	void setY(int b){y = b;}
	void show(){cout << "(x,y)= (" << x << "," << y << ") \n"; }
	Point operator++(); //preposition incliment
	Point operator++(int d); //postposition incliment
	friend Point operator+(Point p1,Point p2);
	friend Point operator+(Point p, int a);
	friend Point operator+(int a, Point p);
};

Point Point::operator++(){
	x++;
	y++;
	return *this;
}

Point Point::operator++(int d){

	Point p = *this ;
	x++;
	y++;
	return p;
}

Point operator+(Point p1, Point p2){
	Point p3;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	return p3;
}

Point operator+(Point p, int a){
	Point p3;
	p3.x = p.x + a;
	p3.y = p.y + a;
	return p3;
}

Point operator+(int a,Point p){
	Point p3;
	p3.x = a + p.x;
	p3.y = a + p.y;
	return p3; 
}

int main(){
	Point p1(1,2);
	Point p2(2,3);
	Point p3(0,0);

	p3 = p1 + p2;
	p3.show();

	p3 = p1++;
	p3.show();

	p3 = ++p2;
	p3.show();

	p3 = p1 + 5;
	p3.show();

	p3 = 3 + p2;
	p3.show();

	return 0; 
}