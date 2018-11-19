#include <iostream>
using namespace std;

int main(){

	int res;

	cout << "which process will be skipped?\n";
	cin >> res;

	for(int i=0; i<=10 ; i++){
		if(i==res)
			continue;

		cout << "process number = " << i << "\n";

	}

	return 0;

}