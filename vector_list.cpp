#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst;
	int i;

	for(i = 0 ; i<10; i++)
		lst.push_back(i);
	cout << "Size : " << lst.size() << endl;
	cout << "Contents : ";
	list<int> :: iterator p = lst.begin();

	while(p != lst.end()){
		cout << *p << " ";
		p++;
		}
	cout << "\n\n";
	
	p = lst.begin();
	while(p != lst.end()){
		*p = *p + 100;
		 p++;;
		}
	cout << "Contents Modified : ";
	p = lst.begin();
	while(p != lst.end()){
		cout << *p << " ";
		p++;
		}
	
	cout <<"\n Reverse : ";
	p = lst.end();
	while(p != lst.begin()){
		p--;
		cout << *p << " ";
		
		}

return 0;
}
