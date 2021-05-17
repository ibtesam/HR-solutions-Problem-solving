// HACKER RANK ALTERNATING CHARACTERS

#include <iostream>
#include <vector>

using namespace std;

int alternatingCharacters(string s) {
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << alternatingCharacters("AABBAABB");
	return 0;
}