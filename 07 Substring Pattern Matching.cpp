/* Written by Joe Ferrucci - http://joeferrucci.info */
#include <iostream>
using namespace std;

int find_substring(char* pattern, char* text) {

    int pattern_len = strlen(pattern);
    int text_len = strlen(text);

    int j;  // start of match

    for (int i = 0; i <= (text_len - pattern_len); i++) {
        j = 0;

        while ( (j < pattern_len) && (text[i+j] == pattern[j]) )
            j++;

        if (j == pattern_len) 
            return (i);

    }

    return (-1);

}

int main(int argc, char const *argv[])
{
    char article[] = "Today is November 17, 2014";
    char pattern[] = "day";

    int startOfSubstring = find_substring(pattern, article);

    if (startOfSubstring == -1) 
        cout << "No pattern was matched\n";
    else
        cout << "Substring pattern was found at position " << startOfSubstring << "\n";

    return 0;
}