/*
Author: vpetrigo
Task:
Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз.
Элементы нужно выводить в том порядке, в котором они встречаются в списке.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
6
1 2 2 3 3 3
Sample Output:
1

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    vector<int> uni(q);

    while (cin >> q) {
        v.push_back(q);
    }

    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++uni[i];
                ++uni[j];
            }
        }
    }

    for (int i = 0; i < uni.size(); ++i) {
        if (uni[i] == 0) {
            cout << v[i] << ' ';
        }
    }

    return 0;
}
