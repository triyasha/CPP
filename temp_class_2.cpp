#include <iostream>
#include <fstream>
using namespace std;

template <class T1>

void sum (T1 a, T1 b, T1 c){
	cout << "Sum : " << a+b+c << endl;
}

template <class T1, class T2>

void sum (T1 a, T2 b, T1 c){
	cout << "Sum : " << a+b+c << endl;
}


void sum (int a , int b){
	cout << "Sum : " << a+b << endl;
}

int main()
{
	int a,b; float x,y,z;
	cout << "enter integers a & b : " << endl;
	cin >> a >> b;

	cout << "enter float value of x,y & z : " << endl;
	cin >> x >> y >> z;

	sum(x,y,z);
	sum(a,b);
	sum(x,a,z);
	sum(a,x,b);

return 0;
}
