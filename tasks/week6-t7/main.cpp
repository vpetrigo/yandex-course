/*
Author: vpetrigo
Task:
ƒан двумерный массив размером n?m (n и m не превосход€т 1000).
—имметричный ему относительно главной диагонали массив называетс€ транспонированным к данному.
ќн имеет размеры m?n: строки исходного массива станов€тс€ столбцами транспонированного,
столбцы исходного массива станов€тс€ строками транспонированного.

ƒл€ данного массива постройте транспонированный массив и выведите его на экран.

Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:
11 21 31
12 22 32
13 23 33
14 24 34

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 1000;
    int n, m;
    int arr[size][size];
    int t_arr[size][size];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            t_arr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << t_arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
