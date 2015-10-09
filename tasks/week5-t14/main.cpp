/*
Author: vpetrigo
Task:
N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. 
Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от 
li до ri включительно. Определите, какие кегли остались стоять на месте.

Формат входных данных
Программа получает на вход количество кеглей N и количество бросков K. 
Далее идет K пар чисел li, ri, при этом 1 ? li, ri ? N.

Формат выходных данных
Программа должна вывести последовательность из N символов, 
где j-й символ есть “I”, если j-я кегля осталась стоять, или “.”, если j-я кегля была сбита.

Sample Input:
10 3
8 10
2 5
3 6
Sample Output:
I.....I...

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    vector<int> keg;
    vector<int> throws;

    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        keg.push_back(0);
    }

    for (int i = 0; i < k; ++i) {
        int f, l;

        cin >> f >> l;
        throws.push_back(f);
        throws.push_back(l);
    }

    for (int i = 0; i < throws.size(); i += 2) {
        for (int j = throws[i] - 1; j < throws[i + 1]; ++j) {
            keg[j] = 1;
        }
    }

    for (int i = 0; i < keg.size(); ++i) {
        if (!keg[i]) {
            cout << 'I';
        }
        else {
            cout << '.';
        }
    }

    return 0;
}