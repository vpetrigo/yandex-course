/*
Author: vpetrigo
Task:
¬о врем€ проведени€ олимпиады каждый из участников получил свой идентификационный номер Ц натуральное число.
Ќеобходимо отсортировать список участников олимпиады по количеству набранных ими баллов.

¬ходные данные

Ќа первой строке дано число N (1 ? N ? 1000) Ц количество участников.
Ќа каждой следующей строке даны идентификационный номер и набранное число баллов соответствующего участника.
¬се числа во входном файле не превышают 105.

¬ыходные данные

¬ выходной файл выведите исходный список в пор€дке убывани€ баллов. ≈сли у некоторых участников
одинаковые баллы, то их между собой нужно упор€дочить в пор€дке возрастани€ идентификационного номера.
Sample Input 1:
3
101 80
305 90
200 14
Sample Output 1:
305 90
101 80
200 14

Sample Input 2:
3
20 80
30 90
25 90
Sample Output 2:
25 90
30 90
20 80

*/

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

void fill_vector_pair(vector<pair<int, int>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        int id, pts;

        cin >> id >> pts;
        v.push_back(make_pair(id, pts));
    }
}

void print_vector_pair(const vector<pair<int, int>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}

bool comp_pair(const pair<int, int> &f, const pair<int, int> &s) {
    bool first_gr_second = false;

    if (f.second != s.second) {
        first_gr_second = f.second > s.second;
    }
    else {
        first_gr_second = f.first < s.first;
    }

    return first_gr_second;
}

int main() {
    int n;
    vector<pair<int, int>> participant;

    cin >> n;
    fill_vector_pair(participant, n);
    sort(participant.begin(), participant.end(), comp_pair);
    print_vector_pair(participant);

    return 0;
}
