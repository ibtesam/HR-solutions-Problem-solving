// HACKER RANK COUNTING VALLEYS

#include <iostream>

using namespace std;

int countingValleys(int steps, string path) {
    int seaLvL = 0, valleyVisited = 0;
    bool InValley = false;
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            seaLvL++;
        }
        else {
            seaLvL--;
        }
        if (seaLvL == -1) {
            InValley = true;
        }
        if (seaLvL == 0 && InValley == true) {
            valleyVisited++;
            InValley = false;
        }
    }
    return valleyVisited;
}

int main() {
    cout << countingValleys(8, "UDDDUDUU");
    return 0;
}