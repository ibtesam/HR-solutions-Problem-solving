// HACKER RANK BEAUTIFUL DAYS AT THE MOVIES.

#include <iostream>
#include <vector>
using namespace std;

int beautifulDays(int i, int j, int k) {
    vector<int> tempArr;
    int reverse = 0, count = 0;
    for (int a = i; a <= j; a++) {
        tempArr.push_back(a);
    }

    for (int b : tempArr) {
        int temp = b;
        while (temp > 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        
        float fltReverse = reverse;
       
        cout << reverse << endl;
        
        float c = b;
        if (abs(c - fltReverse) / k == abs(b - reverse) / k) {
            count++;
        }
        reverse = 0;
    }
    return count;

}

int main(){
    cout << endl << beautifulDays(20, 23, 6) << endl;
    return 0;
}