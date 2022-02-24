// Passing object as an argument in Calculator

#include<iostream>

using namespace std;

class Calculator {
	public:
		int input1;
		int input2;

		void setInput(int a, int b)
		{
			input1 = a;
			input2 = b;
		}

		// Calculator class objects are passed as arguments
		int add(Calculator obj1, Calculator obj2)
		{
			return obj2.input1+obj1.input2;
		}

		int sub()
		{
			return input1-input2;
		}
		
		
		int mul(int a, int b)
		{
			return a*b;
		}
		
};

int main()
{
	Calculator obj1, obj2;
	obj1.setInput(10, 7);
	obj2.setInput(5, 5);

	// passing object as arguments and printing addition
	cout<<"Inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"Inputs are:" <<obj2.input1<<" "<< obj2.input2 <<endl;

	cout<< "The Addition is : "<< obj1.add(obj1, obj2) << endl;

	return 0;
}
