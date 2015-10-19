/*
Author: vpetrigo
Task:
Дано натуральное число n > 1. Выведите его наименьший делитель, отличный от 1.
Решение оформите в виде функции MinDivisor(n). Количество операций в программе должно быть пропорционально корню из n.
Указание. Если у числа n нет делителя, не превосходящего n , то число n — простое и ответом будет само число n.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
4
Sample Output 1:
2

Sample Input 2:
5
Sample Output 2:
5

*/

#include <iostream>
#include <cmath>

using namespace std;

int MinDivisor(int n) {
    int div = 2;

    for (; div < sqrt(n) && n % div != 0; ++div) {
    }

    if (n % div != 0) {
        div = n;
    }

    return div;
}

int main() {
    int n;

    cin >> n;
    cout << MinDivisor(n);

    return 0;
}