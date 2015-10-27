/*
Author: vpetrigo
Task:
Даны числа n и m. Заполните массив размером n ? m в шахматном порядке:
клетки одного цвета заполнены нулями, а другого цвета - заполнены числами
натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
Sample Input:
3 5
Sample Output:
1   0   2   0   3
0   4   0   5   0
6   0   7   0   8

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i + j) % 2 == 0) {
                arr[i][j] = num++;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
