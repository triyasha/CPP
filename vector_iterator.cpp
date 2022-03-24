#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> v(10);    		// vector of length 10
	vector <char> :: iterator p;
	vector <char> :: iterator p1;
	vector <char> :: iterator p2;
	// create iterator
	int i;
	p  = v.begin();			// assign values
	i = 0;

	while(p != v.end())
	{
		*p = i +'a';
		p++;
		i++;
	}
	p = v.insert(p,'z');
	p = v.insert(p, 4,'z');

	//cout << *p << endl;

	p1 = v.begin();
	
	p2 = v.begin() +4;
	
	p = v.erase (p1, p2);
 
	cout << "Original Contents : \n";
	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " ";
		p++;
	}
	// Change contents of vector
	p = v.begin();
	while(p != v.end())
	{
		*p = toupper(*p);;
		p++;
	}
	
	cout << "\n Modified Contents : \n";

	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " "; 
		p++;
	}

return 0;
}
