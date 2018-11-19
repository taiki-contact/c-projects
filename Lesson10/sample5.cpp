#include <iostream>
#include "myfunc.h"

using namespace std;

int main(){
	int num1, num2, ans;

	cout << "input first number \n";
	cin >> num1;

	cout << "input second number \n";
	cin >> num2;

	ans = max(num1,num2);

	cout << "max is " << ans << "\n";

	return 0;

}