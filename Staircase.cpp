// HACKER RANK STAIRCASE

#include <iostream>
#include <vector>

using namespace std;

void staircase(int n) {
    int j = n;
    for (int row = 0; row < n; row++) {
        j--;
        for (int i = 0; i < j; i++) {
            cout << " ";
        }
        for (int col = -1; col < row; col++) {
            cout << "#";
        }
        cout << endl;
    }

}

int main() {
    staircase(6);
	return 0;
}