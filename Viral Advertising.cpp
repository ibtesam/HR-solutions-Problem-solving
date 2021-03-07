// HACKER RANK VIRAL ADVERTISING.

#include <iostream>
#include <algorithm>

using namespace std;

int viralAdvertising(int n) {
    int cumsum = 0, shared = 5, liked = 0;
    for (int i = 0; i < n; i++) {
        liked = floor(shared / 2);
        cumsum += liked;
        shared = liked * 3;
        liked = 0;
    }
    return cumsum;
}

int main() {
    cout << viralAdvertising(5);
    return 0;
}