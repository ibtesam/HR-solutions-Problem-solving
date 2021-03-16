// HACKER RANK ICE CREAM PARLOR

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> icecreamParlor(int m, vector<int> arr) {

    int length = arr.size();
    int front = 0, end = length - 1;
    vector<int> temp(length);
    vector<int> pos;
    copy(arr.begin(), arr.end(), temp.begin());

    sort(arr.begin(), arr.end());

    while (1) {
        int sum = arr[front] + arr[end];
        if (sum == m) {
            break;
        }
        else if (sum > m) {
            end--;
        }
        else if (sum < m) {
            front++;
        }
    }

    for (int i = 0; i < length; i++) {
        if (temp[i] == arr[front] || temp[i] == arr[end]) {
            pos.push_back(i + 1);
        }
    }

    return pos;
}

int main() {
    int m = 4;
    vector<int> arr{ 1,4,5,3,2 };
    vector<int> temp;
    temp = icecreamParlor(m, arr);

    for (int i : temp) {
        cout << i << " ";
    }

    return 0;
}