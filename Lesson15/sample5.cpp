#include <iostream>
#include <vector>
using namespace std;

int main(){
	int num;
	vector<int> vt;

	cout << "how many integer data will you input? \n";
	cin >> num ;

	for (int i = 0; i < num; i++)
	{
		int data;
		cout << "input integer \n";
		cin >> data;
		vt.push_back(data);
	}

	cout << "present vector \n";
	vector<int>::iterator it = vt.begin();
	while(it != vt.end()){
		cout << *it;
		cout << "-";
		it++;
	}
	cout << "\n";
}