#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "input number 1~9\n";
	cin >> num;

	try{
		if(num <= 0)
			throw "input under 0\n";
		if(num >= 10)
			throw "input over 10\n";
		cout <<"input number is "<< num << "\n"; 
	}

	catch(char* err){
		cout << "error:" << err << "\n";
		return 1;
	}

	return 0;
}