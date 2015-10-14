/*
Author: vpetrigo
Task:
ƒан квадратный двумерный массив размером n ? n и число k. 
¬ыведите элементы k-й по счету диагонали ниже главной диагонали 
(т.е. если k = 1, то нужно вывести элементы первой диагонали, 
лежащей ниже главной, если k = 2, то второй диагонали и т.д.).

«начение k может быть отрицательным, например, если k = ?1, то нужно 
вывести значение первой диагонали лежащей выше главной. ≈сли k = 0, то нужно вывести элементы главной диагонали.

ѕрограмма получает на вход число n, не превосход€щие 10, затем массив размером n ? n, затем число k.

Sample Input 1:
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
1
Sample Output 1:
5 1 6

Sample Input 2:
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
-2
Sample Output 2:
3 8

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, k;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    cin >> k;

    int i_k = 0, j_k = 0;

    if (k > 0) {
        // shift down
        i_k += k;
    }
    else if (k < 0) {
        // shift to the right 0 - (-k) = k
        j_k -= k;
    }

    for (int i = i_k, j = j_k; i < n && j < n; ++i, ++j) {
        cout << arr[i][j] << ' ';
    }

    return 0;
}