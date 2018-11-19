#include <iostream>
using namespace std;

int main(){

	int num ;
	int* pT;

	cout << "how many people do you input scores of \n";

	cin >> num;

	pT = new int[num];

	cout << "input the scores　for the amount of people \n";

	for (int i = 0; i < num; i++)
	{
		cin >> pT[i];
		/* code */
	}

	for (int j = 0; j < num; j++)
	{
		cout << "personal number : "<< j+1 << "\t" << "score : " << pT[j] << "\n";
		/* code */
	}

	delete[] pT;

	return 0;
}