#include <fstream>
#include <iostream>
using namespace std;

class student{
	int roll;
	char name[50];
	float marks;
	void getData(){
		cout << "Enter roll no and name " << endl;
		cin >> roll >> name;
		cout << "marks" <<endl;
		cin >> marks;
	}

	public : void AddRecord(){
		fstream f;
		student s;
		f.open("student.dat", ios::in | ios :: binary);
		s.getData();
		f.write((char*)&s, sizeof(s));
		f.close();
	}

	void display(int n) {
		fstream f; 
		student s;
		
		f.open("student.dat", ios::in | ios :: binary);
		for(int i = 0; i<n ; i++){
		//while(!f.eof()){
			f.read((char*) &s, sizeof(s));
		
			cout << " Roll : " << s.roll << "Name  : " << s.name << " Mark : " << s.marks << endl;
		}
	//}
		f.close();	
	} 
};

int main()
{
	student s1;
	int n=0;
	char ch = 'n';
	do{
		s1.AddRecord();
		cout<< "Want add more?(y/n)" << endl;
		cin >> ch;
		n++;	
	}
	
	while(ch == 'y' || ch == 'Y');
	cout << "updated !! "<< endl;

	s1.display(n);
	
}	 
