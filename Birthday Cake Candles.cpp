// HACKER RANK BIRTHDAY CAKE CANDLES 

#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max = candles[0], total = 1;
    for (int i = 1; i < candles.size(); i++) {
        if (candles[i] > max) {
            max = candles[i];
            total = 1;
        }
        else if (candles[i] == max) {
            total++;
        }
    }
    return total;
}

int main() {
    vector<int> candles{ 3, 2, 1, 3 };
    cout << birthdayCakeCandles(candles); // 2
	return 0;
}