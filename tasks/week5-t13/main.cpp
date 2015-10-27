/*
Author: vpetrigo
Task:
Известно, что на доске 8?8 можно расставить 8 ферзей так, чтобы они не били друг друга.
Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.

Формат входных данных
Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.

Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.

Sample Input 1:
1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:
NO

Sample Input 2:
1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:
YES

*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int x, y;
    vector<int> v;

    while (cin >> x >> y) {
        v.push_back(x);
        v.push_back(y);
    }

    bool pair = false;

    for (int i = 0; i < v.size() && !pair; i += 2) {
        for (int j = i + 2; j < v.size() && !pair; j += 2) {
            if (v[i] == v[j] || v[i + 1] == v[j + 1] || abs(v[i] - v[j]) == abs(v[i + 1] - v[j + 1])) {
                pair = true;
            }
        }
    }

    if (pair) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
