#include <iostream>
using namespace std;

int main(){
	int test[] = {22,11,34,5,88,57};

	cout << "test[0] = " << test[0] << "\n";
	cout << "address of test[0]= " << &test[0] << "\n";
	cout << "the value of test = " << test << "\n";
	cout << "therefore *test = " << *test << "\n";
	cout << "the value of &(test+1) = " << test+1 <<"\n";
	cout << "*(test+1) = " << *(test+1) << "\n"; 

	return 0;
}