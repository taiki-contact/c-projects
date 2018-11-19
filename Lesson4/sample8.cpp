#include <iostream>
using namespace std;

int main(){
	int inum  ;
	double dnum  = 160.5;

	cout << "heght is " << dnum << "cm \n" ;
	cout << "change the type to int type\n";

	inum = (int)dnum ;

	cout << "height is " << inum << "cm \n" ;
	cout << "size of inum = " << sizeof(inum) << "\n";
	cout << "size of dnum = " << sizeof(dnum) << "\n";


	return 0;


}
