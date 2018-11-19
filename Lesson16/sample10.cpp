#include <fstream>
#include <iostream>
using namespace std;

int main(){
	ofstream fout("test2.txt");
	if(!fout){
		cout << "can't open file\n";
		return 1;
	}
	else 
		cout << "open file \n";

	fout << "Hello!\n";
	fout << "Goodbye!\n";
	cout << "write on file\n";


	fout.close();
	cout << "closed file \n";
	return 0;
}