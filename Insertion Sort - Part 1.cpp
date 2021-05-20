// HACKER RANK INSERTION SORT - PART 1

#include <iostream>
#include <vector>

using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int value;
    for (int i = 1; i < n; i++) {
        value = arr[i];
        int j = i - 1;
        while (j >= 0 && value < arr[j]) {
            arr[j + 1] = arr[j];
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
            j = j - 1;
        }
        arr[j + 1] = value;
    }
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
}

int main() {
    int N = 5;
    vector<int> arr{ 2, 4, 6, 8, 3 };
    insertionSort1(N, arr);     // Output:  2 4 6 8 8 
                                //          2 4 6 6 8
                                //          2 4 4 6 8
                                //          2 3 4 6 8                        
    return 0;
}