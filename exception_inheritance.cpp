#include <iostream>
#include <exception>

using namespace std;

class Base {};
class Derived : public Base{};

int main(){
	try{
		throw Base();
	}
	catch (Derived d)
		{
			cout << "Derived object caught\n";
		}
	catch (Base b)
		{
			cout << "Base object caught\n";
		}
	
	return 0;
}
			

