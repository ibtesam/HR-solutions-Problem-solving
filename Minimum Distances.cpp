// HACKER RANK MINIMUM DISTANCE

#include <iostream>
#include <vector>

using namespace std;

int minimumDistances(vector<int> a) {
    int min = a.size();
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j] && min > (j - i)) {
                min = j - i;
            }
        }
    }

    if (min == a.size()) {
        return -1;
    }
    else {
        return min;
    }
}

int main() {
    vector<int> arr{ 7,1,3,4,1,7 };
    cout << minimumDistances(arr);

    return 0;
}