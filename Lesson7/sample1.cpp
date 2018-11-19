#include <iostream>
using namespace std;

void Hello(int x ){
	for (int j = 0; j < x ; j++)
	{
		cout << "Hello World " ;
	}

}

int main(){

	int num = 0;

	cout << "input number\n";
	cin >> num;

	for (int i = 0; i < 5; i++ )
	{
		Hello(num);
		cout << "\n";
	}

	return 0;
}