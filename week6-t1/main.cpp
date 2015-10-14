/*
Author: vpetrigo
Task:
Найдите индексы первого вхождения максимального элемента.

Формат входных данных
Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой. n и m не превышают 100.

Формат выходных данных
Выведите два числа: номер строки и номер столбца, в которых стоит 
наибольший элемент в двумерном массиве. Если таких элементов несколько, 
то выводится тот, у которого меньше номер строки, а если номера строк 
равны то тот, у которого меньше номер столбца.

Sample Input:
3 4
0 3 2 4
2 3 5 5
5 1 2 3
Sample Output:
1 2

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int n, m;
    int arr[size][size];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int max_i = 0, max_j = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << max_i << ' ' << max_j;

    return 0;
}