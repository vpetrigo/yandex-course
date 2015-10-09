/*
Author: vpetrigo
Task:
Дан список чисел. Если в нем есть два соседних элемента одного знака, 
выведите эти числа. Если соседних элементов одного 
знака нет - не выводите ничего. Если таких пар соседей несколько - выведите первую пару.
Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
5
-1 2 3 -1 -2
Sample Output:
2 3

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

    bool pair = false;

    for (int i = 1; i < st.size() && !pair; ++i) {
        if (st[i - 1] < 0 && st[i] < 0 || st[i - 1] > 0 && st[i] > 0) {
            cout << st[i - 1] << ' ' << st[i];
            pair = true;
        }
    }

    return 0;
}