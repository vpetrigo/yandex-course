/*
Author: vpetrigo
Task:
Последовательность Фибоначчи определяется так:
F(0) = 0, F(1) = 1, …, F(n) = F(n?1) + F(n?2).
Дано натуральное число A. Определите, каким по счету
числом Фибоначчи оно является, то есть выведите такое
число N, что F(N) = A.
Если А не является числом Фибоначчи, выведите число -1.

Формат входных данных
Вводится натуральное число A.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
8
Sample Output:
6

*/

#include <iostream>

using namespace std;

int main() {
    int a;
    int n = 1; // counter for deducing numbering of Fibonacci number
    int f_0 = 0;
    int f_1 = 1;

    cin >> a;

    while (f_1 < a) {
        int tmp = f_1;

        ++n;
        f_1 += f_0;
        f_0 = tmp;
    }

    if (f_1 == a) {
        cout << n;
    }
    else {
        cout << -1;
    }

    return 0;
}
