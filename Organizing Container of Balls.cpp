// HACKER RANK ORGANIZING CONTAINER OF BALLS (MEDIUM)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

string organizingContainers(vector<vector<int>> container) {
    int len = container.size();
    vector<long> row(len, 0);
    vector<long> column(len, 0);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            row[i] += container[i][j];
        }
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            column[i] += container[j][i];
        }
    }

    sort(row.begin(), row.end());
    sort(column.begin(), column.end());

    for (int i = 0; i < len; i++) {
        if (row[i] != column[i]) {
            return "Impossible";
        }
    }
    return "Possible";
}

int main() {
    vector<vector<int>> container1{ {1,3,1},{2,1,2},{3,3,3} };
    vector<vector<int>> container2{ {0,2,1},{1,1,1},{2,0,0} };
    cout << organizingContainers(container1) << endl;
    cout << organizingContainers(container2) << endl;

    return 0;
}