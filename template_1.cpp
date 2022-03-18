#include <iostream>

using namespace std;

template < typename T>  // template <typename FirstType, typename SecondType>

void multiply(T n1, U n2){   //auto add( FirstType a, SecondType b)-> decltype(a+b)
	cout << "Result : " << n1*n2 <<endl; //cout <<"in the function :" << a+b << endl;
//return (a+b);
}

int main()
{
	
	int a = 10, b = 20;              //auto c =  0;
	double x = 2.2, y = 2.5;           //c = add(1,'A'); //int , char

	multiply(a,b);			//c = add(1,2); //int , char
	multiply(x,y);			//c = add(1,3.5); //int , char
	multiply(a,y);
	

return 0;
}
