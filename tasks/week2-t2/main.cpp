/*
Author: vpetrigo
Task:
Даны два целых числа. Программа должна вывести число 1, если первое число больше второго, 
число 2, если второе больше первого или число 0, если они равны.

Формат входных данных
Вводятся два числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
2
Sample Output:
2


*/

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a > b) {
        cout << 1;
    }
    else if (a < b) {
        cout << 2;
    }
    else {
        cout << 0;
    }

    return 0;
}