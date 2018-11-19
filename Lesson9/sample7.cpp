#include <iostream>
using namespace std;

double avg(int* p_T);

int main(){
	int test [5];

	cout << "input the scores of 5 people in the test \n";
	for (int i = 0; i < 5; i++ )
	{
		cin >> test[i];
		/* code */
	}

	cout << "----------------------------------------- \n";

	double ans = avg(test);
	cout << "average score of 5 people = " << ans << "\n";

	return 0;

}

//definition of avg
double avg(int* p_T){
	double sum = 0;
	for (int i = 0; i < 5; i++ )
	{
		sum += p_T[i];
		cout << p_T[i] <<"\t";
		/* code */
	}
	cout << "\n";

	return sum/5;
}