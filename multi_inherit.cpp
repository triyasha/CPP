#include <iostream>
using namespace std;

class Person{

		public:
		void disp1()
		{
		cout << "inside person"<<endl;
		}
	};

class Student : public Person{
		
		public:
		void disp2(){
		cout << "inside Student" << endl;
		}
	};
class ITStudent : public Student{
	public:
	void disp3()
	{
	cout << "inside ITStudent" << endl;	
	}
};

int main()
{
	Person p1;
	Student s1;
	ITStudent i1;

	p1.disp1();
	s1.disp2();
	i1.disp3();
	return 0;
}
