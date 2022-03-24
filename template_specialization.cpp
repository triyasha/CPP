#include <iostream>

using namespace std;

template < typename T >

void swap_num(T& n1, T& n2){

	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout<< "Inside template swap.\n ";

}

void swap_num(int &n1, int &n2){

	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout<< "Inside int specialization.\n ";

}

int main()
{
	int a=10,b=20;
	double x = 10.1, y = 20.2;
	char i = 'x', j = 'y';
	

	cout << "Original a ,b :"<< a << ' ' << b <<  endl;
	cout << "Original x ,y :"<< x << ' ' << y <<  endl;
	cout << "Original i ,j :"<< i << ' ' << j <<  endl;


	swap_num(a,b);
	swap_num(x,y);
	swap_num(i,j);
 	

	cout << "Swapped a ,b :"<< a << ' ' << b <<  endl;
	cout << "Swapped x ,y :"<< x << ' ' << y <<  endl;
	cout << "Swapped i ,j :"<< i << ' ' << j <<  endl;

return 0;
}

