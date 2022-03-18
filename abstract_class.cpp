#include <iostream>
using  namespace std;

class convert{
	protected:
		double x;
		double y;
	public:
		convert(double i){
			x = i;
		}		

		double getconv() {return y;}
		double getinit() {return x;}
		virtual void compute() {}

};

class l_to_g : public convert {
	public:
		l_to_g(double i) :convert(i){}
		void compute()
		{
			y = x/3.7854;
		}
};

class f_to_c : public convert {
	public:
		f_to_c(double i) :convert(i){}
		void compute()
		{
			y = (x-32)/1.8;
		}
};

int main(){
	convert *p;
		l_to_g lgob(4);
		f_to_c fcob(70);
	p = &lgob;
	
	cout <<p->getinit()<< "liters is ";
	p->compute();
	cout <<p->getconv()<< "gallons \n";

	p = &fcob;
	cout <<p->getinit()<< "fahrenheit is ";
	p->compute();
	cout <<p->getconv()<< "Celsius \n ";

return 0;
}


