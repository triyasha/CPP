#include <iostream>
using namespace std;

class Liquid{

		public:
		void disp1()
		{
		cout << "inside liquid"<<endl;
		}
	};

class Fuel{
		
		public:
		void disp2(){
		cout << "inside Fuel" << endl;
		}
	};
class Petrol : public Liquid, public Fuel{
	public:
	void disp3()
	{
	cout << "inside Petrol" << endl;	
	}
};

int main()
{
	Liquid l1;
	Fuel f1;
	Petrol p1;

	l1.disp1();
	f1.disp2();
	//l1.disp2();

	//f1.disp1();
	//f1.disp3();
	p1.disp3();
	p1.disp2();
	p1.disp3();
	return 0;
}
