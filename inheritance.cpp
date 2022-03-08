#include <iostream>
using namespace std;

class Animal{
		int legs = 4;
		public:
		void disp1()
		{
		cout << "this is inside animal"<<endl;
		}
	};

class Dog : public Animal{
		int tails = 1;
		public:
		void disp2(){
		cout << "this is inside dog" << endl;
		}
	};
class Puppies : public Dog{
	public:
	void disp3()
	{
	cout << "inside puppies" << endl;	
	}
};

int main()
{
	Animal a1;
	Dog d1;
	Puppies p1;

	a1.disp1();
	d1.disp2();
	p1.disp3();
	return 0;
}
