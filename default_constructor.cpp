// Default Constructors in Cpp

#include <iostream>
using namespace std;
 
class construct
{
	public:
    		int a, b;
 
    		// Default Constructor
    		construct()
    		{
			cout<< "This is default constructor" << endl;
        			a = 1;
        			b = 2;
    		}
};
 
int main()
{
    construct c;
    cout << "a: " << c.a << endl;
    cout << "b: " << c.b << endl;
    return 1;
}
