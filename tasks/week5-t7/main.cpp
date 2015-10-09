/*
Author: vpetrigo
Task:
Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:
5
0 1 2 3 4
Sample Output 1:
1

Sample Input 2:
5
2 4 6 8 10
Sample Output 2:
0

*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    while (cin >> q) {
        st.push_back(q);
    }

    int min_odd = 0;

    for (int i = 0; i < st.size(); ++i) {
        if (abs(st[i]) % 2 == 1) {
            if (min_odd == 0) {
                min_odd = st[i];
            }
            else {
                if (st[i] < min_odd) {
                    min_odd = st[i];
                }
            }
        }
    }

    cout << min_odd;

    return 0;
}