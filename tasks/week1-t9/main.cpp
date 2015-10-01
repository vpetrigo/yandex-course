/*
Author: vpetrigo
Task:
Покупка пирожков
Пирожок в столовой стоит A рублей и B копеек.Определите, сколько рублей и копеек нужно заплатить за N пирожков.

Формат входных данных
Программа получает на вход три числа : A, B, N - целые, положительные, не превышают 10000.

*/

#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    int k_sum;
    int r_sum;

    cin >> a >> b >> n;

    k_sum = b * n;
    r_sum = a * n + k_sum / 100;
    k_sum %= 100;

    cout << r_sum << ' ' << k_sum << endl;

    return 0;
}