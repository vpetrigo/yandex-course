/*
Author: vpetrigo
Task:
Дано положительное действительное число X. 
Выведите его первую цифру после десятичной точки.

Формат входных данных
Вводится положительное действительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1.79
Sample Output:
7

*/

#include <iostream>

using namespace std;

int main() {
    double num;

    cin >> num;

    double frac = num - static_cast<int> (num);

    cout << static_cast<int> (frac * 10);

    return 0;
}