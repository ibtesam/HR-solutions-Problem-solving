// HACKER RANK CIRCULAR ARRAY ROTATTION

#include <iostream>
#include <vector>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int length = a.size();
    vector<int> tempArr(length, 0);
    vector<int> arr;

    int d = k;

    for (int i = 0; i < length; i++) {
        tempArr[(length + (d % length)) % length] = a[i];
        d++;
    }

    for (int i = 0; i < queries.size(); i++) {
        arr.push_back(tempArr[queries[i]]);
    }
    return arr;
}

int main() {
    vector<int> arr = circularArrayRotation({ 1,2,3 }, 2, { 0,1,2 });
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    return 0;
}