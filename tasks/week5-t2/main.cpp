/*
Author: vpetrigo
Task:
Выведите все четные элементы массива.
Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
7
1 2 2 3 3 3 4
Sample Output:
2 2 4

*/

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        cin >> tmp;
        
        if (tmp % 2 == 0) {
            st.push_back(tmp);
        }
    }

    copy(st.begin(), st.end(), ostream_iterator<int> {cout, " "});

    return 0;
}