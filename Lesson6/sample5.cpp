#include <iostream>
using namespace std;

int main(){

	int i =0;
	int sum = 0;
	while (i<= 10){
		cout << i <<"\n";
		sum += i;
		i += 2;
	}

	cout << sum << "\n";

	return 0;
}
