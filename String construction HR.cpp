// HACKER RANK STRING CONSTRUCTION

#include <iostream>
#include <vector>

using namespace std;

int stringConstruction(string s) {
    vector<char> chr;
    vector<char>::iterator it;
    chr.push_back(s[0]);
    int count = 1;
    for (int i = 1; i < s.size(); i++) {
        it = find(chr.begin(), chr.end(), s[i]);
        if (it != chr.end())
            continue;
        else {
            chr.push_back(s[i]);
            count++;
        }
    }
    return count;
}

int main() {
    cout << stringConstruction("abdacbfbdcf");
    return 0;
}