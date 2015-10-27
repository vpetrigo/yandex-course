/*
Author: vpetrigo
Task:
Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.).
Если элементов нечетное число, то последний элемент остается на своем месте.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
5
1 2 3 4 5
Sample Output:
2 1 4 3 5

*/

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    while (cin >> q) {
        v.push_back(q);
    }

    for (int i = 1; i < v.size(); i += 2) {
        swap(v[i], v[i - 1]);
    }

    copy(v.begin(), v.end(), ostream_iterator<int> {cout, " "});

    return 0;
}
