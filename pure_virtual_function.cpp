#include <iostream>
using  namespace std;

class Shape{
	protected:
		float x;
	public:
		void getData(){cin>>x;}
		virtual float calculateArea() {}

};

class Square : public Shape {
	public:
		float calculateArea()
		{
			return x*x;
		}
};

class Circle : public Shape {
	public:
		float calculateArea()
		{
			return 3.14*x*x;
		}
};

int main(){
	
	Square a1;
	Circle a2;
	
	cout <<"Enter length to calculate the area of a square"<<endl;
	a1.getData();
	cout << "Area of square: \n"<<a1.calculateArea();

	cout <<"\nEnter radius to calculate the area of a circle"<<endl;
	a2.getData();
	cout << "Area of Circle: \n"<<a2.calculateArea();	
	
}


