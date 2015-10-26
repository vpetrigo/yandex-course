/*
Author: vpetrigo
Task:
Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
Входные данные

Заданы сначала количество учащихся n, затем n строк, каждая из которых
содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике).
Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные

Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом.
Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно
выводить в порядке, заданном во входных данных.

Sample Input:
3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:
Markov Valeriy
Petrov Petr
Sergey Petrov

*/

#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

// As there are only three marks in input
// calculate average by 3
double calc_mean_pts() {
    constexpr int marks = 3;
    vector<int> m;
    double init = 0;

    for (int i = 0; i < marks; ++i) {
        int num;

        cin >> num;
        m.push_back(num);
    }

    return accumulate(m.begin(), m.end(), init) / marks;
}

// read name, surname and marks from input
void fill_vector_pair(vector<pair<pair<string, string>, double>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        string name, surname;
        double mean_pts;

        cin >> surname >> name;
        v.push_back(make_pair(make_pair(surname, name), calc_mean_pts()));
    }
}

// compare pairs in descending order
bool cmp_pts(const pair<pair<string, string>, double>& f, const pair<pair<string, string>, double>& s) {
    return f.second > s.second;
}

void print_vector_pair(const vector<pair<pair<string, string>, double>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first.first << ' ' << v[i].first.second << endl;
    }
}

int main() {
    int n;
    vector<pair<pair<string, string>, double>> v;

    cin >> n;
    fill_vector_pair(v, n);
    stable_sort(v.begin(), v.end(), cmp_pts);
    print_vector_pair(v);

    return 0;
}
