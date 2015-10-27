/*
Author: vpetrigo
Task:
Дана последовательность натуральных чисел x1, x2, ..., xn. Стандартным отклонением называется величина

Image: https://ucarecdn.com/a5272a3c-f857-4969-a054-0a362300c32d/ где
Image: https://ucarecdn.com/f6612807-4fb8-42fc-802e-5221860e8fa2/- среднее значение последовательности.
Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0
(само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
7
9
0
Sample Output:
4.16333199893

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // evaluate upper part as \sum_1^k {x ^ 2} - s * \sum_1_k {x} + n * s ^ 2
    int num;
    int cnt = 0;
    int sum = 0;
    int double_x = 0; // x ^ 2
    double mean;
    double st_dev;

    while (cin >> num && num != 0) {
        ++cnt;
        double_x += num * num;
        sum += num;
    }

    mean = static_cast<double> (sum) / cnt;

    st_dev = sqrt((double_x - 2 * mean * sum + cnt * mean * mean) / (cnt - 1));

    cout << setprecision(11);
    cout << st_dev;

    return 0;
}
