/*
Author: vpetrigo
Task:
Яша плавал в бассейне размером N?M метров и устал.
В этот момент он обнаружил, что находится на расстоянии X
метров от одного из длинных бортиков(не обязательно от ближайшего) и
Y метров от одного из коротких бортиков.
Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик ?

Формат входных данных
Программа получает на вход числа N, M, X, Y.

Формат выходных данных
Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

Sample Input :
23
52
8
43
Sample Output :
8

*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    int dist_l, dist_s;

    if (n > m) {
        dist_l = min(abs(n - y), y);
        dist_s = min(abs(m - x), x);
    }
    else {
        dist_l = min(abs(m - y), y);
        dist_s = min(abs(n - x), x);
    }

    if (dist_l < dist_s) {
        cout << dist_l;
    }
    else {
        cout << dist_s;
    }

    return 0;
}
