#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	std::vector<int> vt;
	for (int i = 0; i < 10; i++)
	{
		vt.push_back(i);
	}

	cout << "-----------並べ替え前--------------\n";
	std::vector<int>::iterator it = vt.begin();
	while(it != vt.end()){
		cout << *it;
		it++;
	}

	cout << "\n----------逆順にすると--------------\n";
	reverse(vt.begin(), vt.end());
	it = vt.begin();
	while(it != vt.end()){
		cout << *it;
		it++;
	}

	cout << "\n----------並べ替え後-----------------\n";
	sort(vt.begin(),vt.end());
	it = vt.begin();
	while(it != vt.end()){
		cout << *it;
		it++;
	}
	cout << "\n";

	return 0;
}