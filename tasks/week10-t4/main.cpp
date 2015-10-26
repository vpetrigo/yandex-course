/*
Author: vpetrigo
Task:
¬ыведите все исходные точки в пор€дке возрастани€ их рассто€ний от начала координат.

¬ходные данные

ѕрограмма получает на вход набор точек на плоскости. —начала задано количество точек n,
затем идет последовательность из n строк, кажда€ из которых содержит два числа: координаты точки.
¬еличина n не превосходит 100, все исходные координаты Ц целые числа, не превосход€щие 103.

¬ыходные данные

Ќеобходимо вывести все исходные точки в пор€дке возрастани€ их рассто€ний от начала координат.

Sample Input:
2
1 2
2 3
Sample Output:
1 2
2 3

*/

#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>

using namespace std;

double dist_calc(double x, double y) {
    return sqrt(x * x + y * y);
}

void fill_vector_pair(vector<pair<pair<double, double>, double>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        double x, y;

        cin >> x >> y;
        v.push_back(make_pair(make_pair(x, y), dist_calc(x, y)));
    }
}

bool cmp_dist(const pair<pair<double, double>, double> &f, const pair<pair<double, double>, double>& s) {
    return f.second < s.second;
}

void print_vector_pair(const vector<pair<pair<double, double>, double>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first.first << ' ' << v[i].first.second << endl;
    }
}

int main() {
    int n;
    vector<pair<pair<double, double>, double>> v;

    cin >> n;
    fill_vector_pair(v, n);
    stable_sort(v.begin(), v.end(), cmp_dist);
    print_vector_pair(v);

    return 0;
}
