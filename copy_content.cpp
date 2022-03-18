#include <fstream>
#include <iostream>
using namespace std;

int main(){

	fstream fin,fout;
	
	fin.open("file.txt");
	fout.open("file1.txt", ios::out | ios::ate);

	char ch;
	while(!fin.eof()){
			fin.get(ch);
			fout << ch;
		}
	
	cout << "copy done !! " << endl;
	fin.close();
	fout.close();
}
