#include <iostream>
using namespace std;

int main(){

	const int sub = 2; //subject number
	const int num = 5; // the number of people

	int test[num][sub]=
	{
		{20,100},
		{100,50},
		{60,60},
		{30,40},
		{100,100}
	};

	for(int num_i = 0; num_i < num ; num_i++){
		cout << "person number : " << num_i + 1 << "\t";
		cout << "score of math = " << test[num_i][0] << "\t";
		cout << "score of English = " << test[num_i][1] << "\n";
	}

	return 0;

}