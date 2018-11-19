#include <iostream>
using namespace std;

int main(){

	const int num = 5;
	int test[num];

	cout << "input score of " << num << " people" << "\n";
	for (int i = 0; i < num; i++)
	{
		cin >> test[i];
	}

	for(int elmt =0 ; elmt < num ; elmt++){
		for (int cmp_elmt = elmt +1 ; cmp_elmt < num ; cmp_elmt++ ){
			if(test[elmt] > test[cmp_elmt]){
				int change;
				change = test[elmt];
				test[elmt] = test[cmp_elmt];
				test[cmp_elmt] = change;
			}
		}
	}

	cout << "--------------------------\n";

	for (int j = 0; j < num; j++)
	{
		cout << test[j] << "\t" ;
	}

	cout << "\n";

return 0;

}
