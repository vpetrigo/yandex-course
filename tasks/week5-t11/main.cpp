/*
Author: vpetrigo
Task:
Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. 
Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
5
1 2 3 2 3
Sample Output 1:
2

Sample Input 2:
5
1 1 1 1 1
Sample Output 2:
10

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    while (cin >> q) {
        v.push_back(q);
    }

    int cnt = 0;

    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++cnt;
            }
        }
    }

    cout << cnt;

    return 0;
}