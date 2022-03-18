#include <iostream>
#include <exception>

using namespace std;


int main(){
	try{
		int* myarray = new int[100];
		cout << " my array is :" << myarray << "\n";
		cin >> myarray;
	}
	catch(exception &e){
		cout << "Std exception " << e.what() << endl;
	}

return 0;
} 
