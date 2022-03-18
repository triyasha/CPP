#include <fstream>
#include <iostream>
using namespace std;

int main(){

	fstream input;
	string str;
	input.open("file.txt");
	int count = 0;
	char word[30];
	if(!input)
		cout << "file did not open" << endl;
	else{
		while(getline(input,str)){
			count++;
		}
	}
	cout << "total lines: "<< count << endl;
	input.close();
}
