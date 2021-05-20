// HACKER RANK MIN-MAX SUM

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long min = 0, max = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; (i < arr.size() - 1); i++) {
        min += arr[i];
    }
    for (int i = 1; i < arr.size(); i++) {
        max += arr[i];
    }
    cout << min << " " << max;
}

int main() {
    miniMaxSum({ 1, 2, 3, 4, 5 }); // 10 14
	return 0;
}