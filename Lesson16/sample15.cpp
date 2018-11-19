#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	if(argc != 2){
		cout << "the number of parameter is not proper \n";
		return 1;
	}

	ifstream fin(argv[1]);
	if(!fin){
		cout << "cannnot open file \n";
		return 1;
	}

	char ch;
	fin.get(ch);

	while(!fin.eof()){
		cout.put(ch);
		fin.get(ch);
	}

	fin.close();

	return 0;
}