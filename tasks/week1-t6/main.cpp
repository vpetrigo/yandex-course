/*
Author: vpetrigo
Task:
Сумма цифр трехзначного числа
Дано целое трехзначное число. Найдите сумму его цифр.

Формат входных данных
На вход дается число от 100 до 999.

Формат выходных данных
Выведите одно целое число - ответ на задачу.

*/

#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;

    cin >> num;

    while (num) {
        int digit = num % 10;

        sum += digit;
        num /= 10;
    }

    cout << sum << endl;

    return 0;
}
