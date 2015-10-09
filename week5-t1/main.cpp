/*
Author: vpetrigo
Task:
Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
5
1 2 3 4 5
Sample Output:
1 3 5

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i != q; ++i) {
        int tmp;

        cin >> tmp;
        st.push_back(tmp);
    }

    for (int i = 0; i < st.size(); ++i) {
        if (i % 2 == 0) {
            cout << st[i] << ' ';
        }
    }

    return 0;
}