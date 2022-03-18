#include <fstream>
#include <iostream>
using namespace std;

int main(){

fstream myfile;
myfile.open("file.txt",ios::in);

cout << myfile.good();

if(!myfile)
	cout << "The file cannot open " << endl;

else
	cout << "opened" <<endl;

}

