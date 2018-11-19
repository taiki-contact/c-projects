#include <iostream>
using namespace std;

int sum(int x,int y){

	return x+y;
}

int main(){
	int num1, num2, ans;

	cout << "input first number\n";
	cin >> num1;

	cout << "input second number\n";
	cin >> num2;

	ans = sum(num1,num2);

	cout << "sum total = " << ans << "\n";

	return 0; 

}