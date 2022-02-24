// Parameterized constructors in Cpp

#include <iostream>
using namespace std;
 
class space
{
	private:
    	int x, y;
 
	public:
    	// Parameterized Constructor
    	space(int x1, int y1)
    	{
		cout << "This is parameterized constructor" << endl;
        	x = x1;
	        y = y1;
    	}
 
	int getX()
	{
		cout<< "Getting value of x" << endl;
        	return x;
    	}
    	
	int getY()
    	{
		cout << "Getting Value of y" << endl;
        	return y;
    	}
};
 
int main()
{
    space s1(1, 8);
 
    // Values are been accessed using constructor
    cout << "s1.x = " << s1.getX() << endl << "s1.y = " << s1.getY() << endl;

    return 0;
}
