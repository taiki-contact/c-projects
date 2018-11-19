#include <iostream>
using namespace std;


template <class T>
T maxt(T x, T y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}

int main(){
	int a,b;
	double da, db ;

	cout << "input two integer numbers \n";
	cin >> a >> b;

	cout << "input two double numbers \n";
	cin >> da >> db;

	int ans = maxt( a, b);
	double ansd = maxt(da, db);

	cout << "integer bigger one = " << ans << "\n";
	cout << "double bigger one = " << ansd << "\n";

	return 0;
}