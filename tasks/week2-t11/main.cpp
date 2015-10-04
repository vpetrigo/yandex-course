/*
Author: vpetrigo
Task:
Шоколадка имеет вид прямоугольника, разделенного на N?M долек. Шоколадку можно один раз разломить по прямой на две части. Определите, можно ли таким образом отломить от шоколадки ровно K долек.
Формат входных данных
Программа получает на вход три числа: N, M, K
Формат выходных данных
Программа должна вывести одно из двух слов: YES или NO.
Sample Input 1:
4
2
6
Sample Output 1:
YES

Sample Input 2:
2
10
7
Sample Output 2:
NO

*/

#include <iostream>

using namespace std;

int main() {
    int n, m, k;

    cin >> n >> m >> k;

    int square = n * m;
    int part = square - k;

    if (part >= 0 && part % n == 0 || part % m == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}