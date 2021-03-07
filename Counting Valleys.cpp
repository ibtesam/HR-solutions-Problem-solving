// HACKER RANK COUNTING VALLEYS

#include <iostream>

using namespace std;

int countingValleys(int steps, string path) {
    int seaLvL = 0, valleyVisited = 0;
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            seaLvL++;
        }
        else {
            seaLvL--;
        }
        if (seaLvL == 0 && path[i] == 'U') {
            valleyVisited++;
        }
    }
    return valleyVisited;
}

int main() {
    cout << countingValleys(8, "UDDDUDUU");
    return 0;
}