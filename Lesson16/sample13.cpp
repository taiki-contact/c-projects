#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	ifstream fin("test0.txt");
	if(!fin){
		cout << "cannot open file \n";
		return 1;
	}

	char str1[16];
	char str2[16];
	fin >> str1 >> str2;
	cout << "two string written in the file is ... \n";
	cout << str1 << "\n";
	cout << str2 << "\n";

	return 0;
}