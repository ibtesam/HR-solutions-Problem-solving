// HACKER RANK DIAGONAL DIFFERENCE

#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int LeftDiagonalSum = 0, RightDiagonalSum = 0, res, length = 0;
    length = arr.size();
    for (int i = 0; i < arr.size(); i++) {
        length -= 1;
        RightDiagonalSum += arr[i][length];
    }
    for (int i = 0; i < arr.size(); i++) {
        LeftDiagonalSum += arr[i][i];
    }
    res = abs(RightDiagonalSum - LeftDiagonalSum);
    return res;
}

int main() {
    vector<vector<int>> arr{ {11, 2, 4},{4, 5, 6},{10, 8, -12} };
    cout << diagonalDifference(arr);  // Output: 15
	return 0;
}