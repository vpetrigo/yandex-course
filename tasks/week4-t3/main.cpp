/*
Author: vpetrigo
Task:
Даны длины сторон треугольника. Вычислите площадь треугольника..

Формат входных данных
Вводятся три положительных числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
3
4
5
Sample Output:
6

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;

    double square = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << square;

    return 0;
}
