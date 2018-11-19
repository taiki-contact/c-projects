#include <iostream>
using namespace std;

int main(){

	int sum = 0;

	for(int i=1; i<= 10; i+=2){
		cout << "i =" << i << "\n";
		cout << "sum =" << sum << "\n";
		sum += i; 
	}

	cout << "sum(1,5) = " << sum << "\n";

	return 0;

}