/*
Author: vpetrigo
Task:
Процентная ставка по вкладу составляет P процентов годовых,
которые прибавляются к сумме вклада через год.
Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.

Формат входных данных
Программа получает на вход целые числа P, X, Y, K .

Формат выходных данных
Программа должна вывести два числа: величину вклада через K лет в рублях и копейках.
Дробное число копеек по истечение года отбрасывается.
Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
Примечание
В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.
Sample Input:
12
179
0
5
Sample Output:
315 43

*/

#include <iostream>

using namespace std;

int main() {
    int p, x, y, k;
    constexpr double percent = 100;
    constexpr double coins_in_rub = 100;

    cin >> p >> x >> y >> k;

    double rate = p / percent;
    double deposit = x + y / coins_in_rub;

    while (k--) {
        deposit += deposit * rate;
        deposit = static_cast<int> (deposit * 100) / coins_in_rub;
    }

    int rub = static_cast<int> (deposit);
    int coins = static_cast<int> (deposit * 100) % 100;

    cout << rub << ' ' << coins;

    return 0;
}
