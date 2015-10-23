/*
Author: vpetrigo
Task:
В обувном магазине продается обувь разного размера. Известно, что 
одну пару обуви можно надеть на другую, если она хотя бы на три размера больше. 
В магазин пришел покупатель. Требуется определить, какое наибольшее количество 
пар обуви сможет предложить ему продавец так, чтобы он смог надеть их все одновременно.

Входные данные

Сначала вводится размер ноги покупателя (обувь меньшего размера он надеть не сможет), 
затем количество пар обуви в магазине и размер каждой пары. 
Размер — натуральное число, не превосходящее 100, количество пар обуви в магазине не превосходит 1000.

Выходные данные

Выведите единственное число — максимальное количество пар обуви.
Sample Input:
26
5
30 35 40 41 42
Sample Output:
3

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int client_size;
    int n_boots;
    vector<int> v;
    int cnt = 0; // count how much pairs a client can wear up

    cin >> client_size >> n_boots;

    for (int i = 0; i < n_boots; ++i) {
        int boot_size;

        cin >> boot_size;
        v.push_back(boot_size);
    }

    vector<int>::const_iterator it = find_if(v.begin(), v.end(), [&](int a) { return client_size <= a; });
    cout << *it << endl;
    if (it != v.end()) {
        client_size = *it;
        ++cnt;
        for (vector<int>::const_iterator ait = it + 1; ait != v.end() && client_size + 3 <= *ait; ++ait) {
            client_size = *ait;
            ++cnt;
        }
    }

    cout << cnt;

    return 0;
}