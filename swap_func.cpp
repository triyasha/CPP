#include <iostream>

using namespace std;

template < typename T, typename U >

void swap_num(T& n1, U& n2){

	U temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	

}

int main()
{
	int a=10,b=20;
	double x = 10.1, y = 20.2;
	char *s1 = "Triyasha", *s2 = "Sen";
	string str1 = "hello", str2= "hi";

	cout << a << "  " << b << endl;
	cout << x << "  " << y << endl;
	cout << s1 << "  " << s2 << endl;
	cout << str1 << "  " << str2 << endl;

	swap_num(a,b);
	swap_num(x,y);
	swap_num(s1,s2);
 	swap_num(str1,str2);

	cout << a << "  " << b << endl;
	cout << x << "  " << y << endl;
	cout << s1 << "  " << s2 << endl;
	cout << str1 << "  " << str2 << endl;

return 0;
}
