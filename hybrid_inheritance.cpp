#include <iostream>

using namespace std;

class A{

	public:
		void disp1()
		{
			cout << "inside A"<<endl;
		}
	};

class B : public A{
		
	public:
		void disp2(){
			cout << "inside B" << endl;
		}
	};
class  C: public A{

	public:
		void disp3()
		{
			cout << "inside C" << endl;	
		}
	};

class D : public B, public C{

	public:
		void disp4()
		{
			cout << "inside D" << endl;	
		}
	};

int main()
{
	A a1;
	B b1;
	C c1;
	D d1;

	a1.disp1();

	b1.disp2();
	b1.disp1();
	//b1.disp4(); 
	//b1.disp3();

	c1.disp3();
	c1.disp1();

	d1.disp4();
	d1.disp2();
	d1.disp3();
	return 0;
}
