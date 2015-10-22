/*
Author: vpetrigo
Task:
?ƒаны два списка чисел, которые могут содержать до 100000 чисел каждый. 
ѕосчитайте, сколько чисел содержитс€ одновременно как в первом списке, так и во втором.

¬ходные данные

¬водитс€ число N - количество элементов первого списка, а затем N чисел первого списка.

«атем вводитс€ число M - количество элементов второго списка, а затем M чисел второго списка.

¬ыходные данные

¬ыведите ответ на задачу.

Sample Input:
3
1 3 2
3
4 3 2
Sample Output:
2

*/

#include <iostream>
#include <set>

using namespace std;

set<int>& fill_set(set<int>& s, int n) {
    int num;
    for (; n > 0; --n) {
        cin >> num;
        s.insert(num);
    }

    return s;
}

set<int> intersection(const set<int>& s1, const set<int>& s2) {
    set<int> new_s;
    set<int>::const_iterator it1 = s1.begin();
    set<int>::const_iterator it2 = s2.begin();

    while (it1 != s1.end() && it2 != s2.end()) {
        if (*it1 < *it2) {
            ++it1;
        }
        else if (*it1 > *it2) {
            ++it2;
        }
        else {
            new_s.insert(*it1);
            ++it1;
            ++it2;
        }
    }

    return new_s;
}

int main() {
    set<int> s1, s2;
    int n;

    cin >> n;
    s1 = fill_set(s1, n);
    cin >> n;
    s2 = fill_set(s2, n);

    set<int> s = intersection(s1, s2);

    cout << s.size();

    return 0;
}