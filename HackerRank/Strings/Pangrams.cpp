#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isPangram(string &s) {
	string scopy = s;
	transform(s.begin(), s.end(), scopy.begin(), ::toupper);
	
	bool bits[26] = {false};

	for (int i = 0; i < scopy.length(); ++i)
	{
		if ( int(scopy[i])-65 >= 0 && int(scopy[i])-65 <= 26 ) 
		{ // its a letter
			bits[int(scopy[i])-65] = true;
		}
	}

	for (int i = 0; i < 26; ++i) {
		if (bits[i] == false) {
			return(false);
		} 
	}
	return(true);
}

int main(int argc, char const *argv[])
{
    bool bits[26] = {0};

    string s1 = "We promptly judged antique ivory buckles for the next prize";
    string s2 = "We promptly judged antique ivory buckles for the prize";

    cout << "Is s1 a pangram? " << isPangram(s1);

    cout << endl;
    
    cout << "Is s2 a pangram? " << isPangram(s2);

    cout << endl;
 
    return(0);
}