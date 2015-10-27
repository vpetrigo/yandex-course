/*
Author: vpetrigo
Task:
ƒано число n, не превосход€щее 10, и массив размером n ? n.
ѕроверьте, €вл€етс€ ли этот массив симметричным относительно главной диагонали.
¬ыведите слово УYESФ, если массив симметричный, и слово УNOФ в противном случае.
Sample Input:
3
0 1 2
1 2 3
2 3 4
Sample Output:
YES

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int arr[size][size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    bool sym = true;

    for (int i = 0; i < n && sym; ++i) {
        for (int j = 1; j < n && sym; ++j) {
            if (arr[i][j] != arr[j][i]) {
                sym = false;
            }
        }
    }

    if (sym) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
