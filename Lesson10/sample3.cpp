#include <iostream>
using namespace std;

int main(){

	int* pA;

	pA = new int ;

	cout << "動的なメモリを確保\n";

	*pA = 10;

	cout << "動的なメモリ内の値 *pA = "<< *pA << "\n";

	delete pA;

	cout << "動的なメモリを解放\n";

	return 0;
}