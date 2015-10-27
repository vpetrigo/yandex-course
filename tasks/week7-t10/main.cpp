/*
Author: vpetrigo
Task:
Возводить в степень можно гораздо быстрее, чем за n умножений!
Для этого нужно воспользоваться следующими рекуррентными соотношениями:

a^n = (a^2)^(n/2)  при четном n,

a^n = a ? a^(n?1) при нечетном n.

Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.

Формат входных данных
Вводятся действительное число a и целое число n.

Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:
2.0
1
Sample Output 1:
2

Sample Input 2:
2
2
Sample Output 2:
4

*/

#include <iostream>

using namespace std;

double fast_pow(double a, int n) {
    double res = 1;

    if (n != 0) {
        if (n % 2 == 0) {
            res = fast_pow(a * a, n / 2);
        }
        else {
            res = a;
            res *= fast_pow(a, n - 1);
        }
    }

    return res;
}

int main() {
    double a;
    int n;

    cin >> a >> n;
    cout << fast_pow(a, n);

    return 0;
}
