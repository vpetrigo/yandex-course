/*
Author: vpetrigo
Task:
Следующее четное
На вход дается натуральное число N. Выведите следующее за ним четное число

Формат входных данных
На вход дается целое положительное число N, не превышающее 10000.

Формат выходных данных
Выведите одно целое число - ответ на задачу.

*/

#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;

    // Option 1
    cout << (num / 2) * 2 + 2 << endl;

    // Option 2
    cout << num + 2 - num % 2 << endl;

    return 0;
}
