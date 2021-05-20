// HACKER RANK COMPARE THE TRIPLETS

#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> num;
    int  aSum = 0, bSum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i])
            aSum += 1;
        else if (a[i] < b[i])
            bSum += 1;
        else
            continue;
    }
    num.push_back(aSum);
    num.push_back(bSum);
    return num;

}

int main() {
    vector<int> result = compareTriplets({ 5, 6, 7 }, { 3, 6, 10 });
    for (int i : result) {
        cout << i << " ";   // Output: 1 1
    }
    return 0;
}