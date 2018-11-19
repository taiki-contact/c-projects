#include <iostream>
using namespace std;

int max(int x,int y);
double max(double x,double y);

int main(){
	int inum1,inum2; 
	double dnum1, dnum2;
	int ans_i;
	double ans_d;

	cout << "input two integer numbers\n";
	cin >> inum1 >> inum2;

	cout <<"input two double numbers\n";
	cin >> dnum1 >> dnum2;

	ans_i = max(inum1,inum2);
	ans_d = max(dnum1,dnum2);

	cout << "bigger one in integer = " << ans_i << "\n";
	cout << "bigger one in double = " << ans_d << "\n";

	return 0;

}

int max(int x, int y){

	if(x >= y){
		return x;
	}else{
		return y;

	}
}

double max(double x, double y){

	if(x >= y){
		return x;
	}else{
		return y;

	}
}