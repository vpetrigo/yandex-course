/*
Author: vpetrigo
Task:
Даны два целых числа. Выведите значение наибольшего из них.

Формат входных данных
Вводятся два числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
1
2
Sample Output 1:
2

Sample Input 2:
5
3
Sample Output 2:
5

*/

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << ((a > b) ? a : b) << endl;

    return 0;
}
