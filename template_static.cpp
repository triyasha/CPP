#include <iostream>
#include <fstream>
using namespace std;

//int i =10;
template <class T>

void fun(const T &x){
	static int i =10;
	cout << ++i << endl;
return;
}

int main()
{
	fun<int>(1);
	fun<int>(2);
	fun<double>(10.1);

return 0;
}
