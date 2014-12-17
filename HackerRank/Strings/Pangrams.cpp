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
		if ( int(scopy[i])-65 >= 0 && int(scopy[i])-65 < 26 ) 
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
 	
 	string s1;
 	getline (std::cin,s1);

 	if (s1.length() < 1 || s1.length() > 1000) {
 		return (0);
 	}

 	if (isPangram(s1)) {
 		cout << "pangram";
 	}

 	else {
 		cout << "not pangram"; 
 	}


    return(0);
}