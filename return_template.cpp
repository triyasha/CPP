#include <iostream>

using namespace std;
template <typename FirstType, typename SecondType>

auto add( FirstType a, SecondType b)-> decltype(a+b){
	cout <<"in the function :" << a+b << endl;
return (a+b);
}

int main()
{
	
	auto c =  0;
	c = add(1,'A'); //int , char

	c = add(1,2); //int , char
	c = add(1,3.5); //int , char
	
	

return 0;
}
