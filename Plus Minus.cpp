// HACKERT RANK PLUS MINUS

#include <iostream>
#include <vector>

using namespace std;

void plusMinus(vector<int> arr) {
    int length;
    float pos = 0, neg = 0, null = 0;
    length = arr.size();
    for (int i = 0; i < length; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            null++;
    }
    pos = pos / length;
    neg = neg / length;
    null = null / length;
    cout << pos << "\n" << neg << "\n" << null;
}

int main() {
    vector<int> arr{ -4, 3, -9, 0, 4, 1 };
    plusMinus(arr);  // Output: 0.5
                     //         0.333333
                     //         0.166667
	return 0;
}