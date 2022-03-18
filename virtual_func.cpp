#include<iostream>
using namespace std;

class Base {
	public:
	virtual void show(){
		cout << "Base\n";
	}
};

class Derv1: public Base {
	public:
	void show(){
		cout << "Derv1\n";
	}
};

class Derv2: public Base {
	public:
	void show(){
		cout << "Derv2\n";
	}
};


int main(){
	Derv1 d1;
	Derv2 d2;
	Base* ptr;
	ptr = &d1;
	ptr->show();
	ptr = &d2;
	ptr->show();
}
