#include <fstream>
#include <iostream>
using namespace std;

int main(){

	ifstream input;
	string str;
	input.open("file.txt");
	if(!input)
		cout << "file did not open" << endl;
	else{
		while(input>>str){
			cout << str << " ";
		}
	}
}
