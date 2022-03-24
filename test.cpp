/*  		TRIYASHA SEN		 
	*/

#include <iostream>
#include <string>
#include<vector>

using namespace std;

bool different(string str, int i, int j)
{
    vector<bool> visited(26);
 
    for (int k = i; k <= j; k++) {
        if (visited[str[k] - 'a'] == 1)
            return 0;
        visited[str[k] - 'a'] = 1;
    }
    return 1;
}

int longest_substring ()
{
	string str;
    	int r = 0; 
    		for (int i = 0; i < str; i++)
        			for (int j = i; j < str; j++)
            			if (different(str, i, j))
                r = max(r, j - i + 1);
    return r;
}

int main()
{
	string str = " ";
    	cout << "String " << str << endl;
    	string len = longest_substring(str);
    cout << " " << len;
    
return 0;
}
