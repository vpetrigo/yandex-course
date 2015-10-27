/*
Author: vpetrigo
Task:
Улитка
Улитка ползет по вертикальному шесту высотой H метров,
поднимаясь за день на A метров, а за ночь спускаясь на B метров.
На какой день улитка доползет до вершины шеста?

Формат входных данных
Программа получает на вход натуральные числа H, A, B. Числа не превосходят 100.

Формат выходных данных
Программа должна вывести одно натуральное число. Гарантируется, что A > B.

Sample Input:
10
3
2
Sample Output:
8

*/

#include <iostream>

using namespace std;

int main() {
    int a, b, h;
    int d;

    cin >> h >> a >> b;

    const int step = a - b;
    // in any cases snail goes up at least one day: d = 1 + ...
    // if it does not reached the top it will go down for b
    // do after the first day it will go for (h - a) / (a - b)
    // (h - a) - the path it did at the first day
    // (a - b) - snail's speed for the following days
    // But we also have to deal with remainder
    // we need to calculate how this remainder part affects our day estimation
    // for example: H = 15, V_UP = 4, V_DOWN = 1
    // d = 1 + (15 - 4) / 3 = 1 + 3 = 4 (? wat ?)
    // (15 - 4) % 3 = 2 <- this is the uncounted path
    // so we need that remainder to check whether our day calculation will be overflowed
    // (2 + V_UP - V_DOWN - 1) / (V_UP - V_DOWN) = (2 + 3) / 3 = 1
    d = 1 + (h - a) / step + ((h - a) % step + step - 1) / step;

    cout << d << endl;

    return 0;
}
