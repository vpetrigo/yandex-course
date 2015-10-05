/*
Author: vpetrigo
Task:
Дано целое число, не меньшее 2. 
Выведите его наименьший натуральный делитель, отличный от 1.

Формат входных данных
Вводится целое положительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
15
Sample Output:
3

*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int div = 2;
    while (n % div != 0) {
        ++div;
    }

    cout << div;

    return 0;
}