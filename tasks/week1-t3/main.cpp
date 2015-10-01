/*
Author: vpetrigo
Task:
Последняя цифра
Дано натуральное число, выведите его последнюю цифру.

Формат входных данных
На вход дается натуральное число N, не превосходящее 10000.

Формат выходных данных
Выведите одно целое число - ответ на задачу.

*/

#include <iostream>

using namespace std;

int main() {
    int num;
    const int last_dig = 10;

    cin >> num;

    cout << num % last_dig;

    return 0;
}