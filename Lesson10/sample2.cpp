#include <iostream>
using namespace std;

void func();

int a = 0;

int main(){
	for (int i = 0; i < 5; i++ )
	{
		func();
		/* code */
	}

	return 0;

}

void func(){

	int b = 0;
	static int c = 0;

	cout << "a = " << a << "\t" << "b = " << b << "\t" << "c = " << c << "\n";

	a++;
	b++;
	c++;
	
}