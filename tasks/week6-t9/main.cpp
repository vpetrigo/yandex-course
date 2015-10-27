/*
Author: vpetrigo
Task:
Дан прямоугольный массив размером n?m.
Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m?n.

Формат входных данных
Вводятся два числа n и m, не превосходящие 100, затем массив размером n?m.

Формат выходных данных
Выведите получившийся массив. Числа при выводе разделяйте одним пробелом.

Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:
31 21 11
32 22 12
33 23 13
34 24 14

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int r_arr[size][size];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < m; ++j) {
            r_arr[j][n - 1 - i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << r_arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
