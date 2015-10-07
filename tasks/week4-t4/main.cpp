/*
Author: vpetrigo
Task:
Процентная ставка по вкладу составляет P процентов годовых, 
которые прибавляются к сумме вклада. 
Вклад составляет X рублей Y копеек. Определите размер вклада через год.

При решении этой задачи нельзя пользоваться условными инструкциями и циклами.

Формат входных данных
Программа получает на вход целые числа P, X, Y.

Формат выходных данных
Программа должна вывести два числа: величину вклада через год в рублях и копейках. Дробная часть копеек отбрасывается.

Sample Input:
12
179
0
Sample Output:
200 48

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int p, x, y;

    cin >> p >> x >> y;

    // Option 1
    double rate = p / 100.0;

    double coins = x * 100 + y;

    int k_dep = coins + coins * rate;

    cout << k_dep / 100 << ' ' << k_dep % 100;

    // Option 2
    double money = x + y / 100.0;
    double after_year = money + money * p / 100;

    after_year *= 100;

    int rub = trunc(after_year) / 100;
    int kop = static_cast<int> (trunc(after_year)) % 100;

    cout << rub << ' ' << kop;

    return 0;
}