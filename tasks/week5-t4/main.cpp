/*
Author: vpetrigo
Task:
Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
5
1 5 2 4 3
Sample Output:
5 4

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        cin >> tmp;
        st.push_back(tmp);
    }

    for (int i = 1; i < st.size(); ++i) {
        if (st[i - 1] < st[i]) {
            cout << st[i] << ' ';
        }
    }

    return 0;
}
