// HACKER RANK PICKING NUMBERS

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int pickingNumbers(vector<int> a) {
    int maxLengthSubArr = 0;
    sort(a.begin(), a.end());
    vector<int> frequency((a[a.size() - 1] + 1), 0); // initializing the vector array with zeros by giving largest element of the array as length to avoid wasting extra space.
    for (int i = 0; i < a.size(); i++) {
        frequency[a[i]]++;
    }
    for (int j = 0; j < frequency.size() - 1; j++) {
        int temp = frequency[j] + frequency[j + 1];
        if (temp > maxLengthSubArr) {
            maxLengthSubArr = temp;
        }
    }
    return maxLengthSubArr;
}

int main() {
    cout << pickingNumbers({4,6,5,3,3,1}); // output: 3 - [4,3,3]
	return 0;
}