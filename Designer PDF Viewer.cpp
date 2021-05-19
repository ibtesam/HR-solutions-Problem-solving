// HACKER RANK DESIGNER PDF VIEWER

#include <iostream>
#include <vector>

using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int max = 0;
    for (int i = 0; i < word.length(); i++) {
        if ((h[int(word[i]) - 97]) > max) { // ascii code of alphabets from a-z ranges from 97-122.
            max = h[int(word[i]) - 97];
        }
    }
    return max * word.length();
}

int main() {
    vector<int> arr{ 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7 };
    string word = "zaba";
    cout << designerPdfViewer(arr, word); // 28
	return 0;
}