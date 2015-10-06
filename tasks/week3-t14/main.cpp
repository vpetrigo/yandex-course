/*
Author: vpetrigo
Task:
Определите наименьшее расстояние между двумя локальными 
максимумами последовательности натуральных чисел, завершающейся числом 0. 
Если в последовательности нет двух локальных максимумов, выведите число 0.
Начальное и конечное значение при этом локальными максимумами не считаются.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 
(само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
1
2
1
1
2
1
2
1
0
Sample Output 1:
2

Sample Input 2:
1
2
3
0
Sample Output 2:
0

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int prev, cur, next;
    int dist = 0;
    int cur_dist = 0;
    int min_dist = 0;

    if (cin >> prev && prev != 0) {
        if (cin >> cur && cur != 0) {
            if (cin >> next) {
                int pos = 2;
                while (next != 0) {
                    if (prev < cur && cur > next) {
                       if (dist != 0) {
                           cur_dist = pos - dist;
                           if (min_dist == 0) {
                               min_dist = cur_dist;
                           }
                           else {
                               min_dist = min(cur_dist, min_dist);
                           }
                       }

                       dist = pos;
                    }
                    ++pos;
                    prev = cur;
                    cur = next;
                    cin >> next;
                }
            }
        }
    }

    cout << min_dist;

    return 0;
}