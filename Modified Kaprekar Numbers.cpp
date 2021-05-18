// HACKER RANK MODIFIED KAPREKAR NUMBERS.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void kaprekarNumbers(int p, int q) {
    long long num;
    string str, strL, strR; // L represent the left half of the string and R reperesnts the right.
    vector<int> numArr;
    for (long long i = p; i <= q; i++) {
        // We define the dtype of 'i' as "long long" because we have to the num which is also of dtype "long long".
        num = i * i;
        if (i <= 3) {
            if (num == i) {
                numArr.push_back(i);
            }
            else {
                continue;
            }
        }
        else {
            str = to_string(num);
            strL = str.substr(0, (int)str.length() / 2);
            strR = str.substr((int)str.length() / 2, str.length());
            if (stoi(strL) + stoi(strR) == i) {
                numArr.push_back(i);
            }
        }
    }
    if (numArr.empty()) {
        cout << "INVALID RANGE";
    }
    for (int i : numArr) {
        cout << i << " ";
    }
}

int main() {
    kaprekarNumbers(1, 99999);
    return 0;
}