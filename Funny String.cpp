// HACKER RANK FUNNY STRING

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

string funnyString(string s) {
    bool isFunny = true;
    vector<int> asciiLeft;
    vector<int> asciiRight;

    // Not reverse
    for (char i : s) {
        asciiRight.push_back(int(i));
    }
    // Reverse
    for (int i = s.length() - 1; i >= 0; i--) {
        asciiLeft.push_back(int(s[i]));
    }
    // Comparing the absolute differences of both the vector array;
    for (int i = 0; i < asciiLeft.size() - 1; i++) {
        if (abs(asciiRight[i] - asciiRight[i + 1]) != abs(asciiLeft[i] - asciiLeft[i + 1])) {
            isFunny = false;
            break;
        }
    }
    if (isFunny) {
        return "Funny";
    }
    return "Not Funny";
}

int main() {
    cout << funnyString("acxz") << endl;
    cout << funnyString("bcxz") << endl;
    return 0;
}