/*
Author: vpetrigo
Task:
Дано число N. Определите, сколькими способами можно расставить на доске N?N N ферзей, не бьющих друг друга.

Формат входных данных
Задано единственное число N. (N ? 10)

Формат выходных данных
Выведите ответ на задачу.
Подсказка
Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец.
Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит рассматривать.
Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.

Sample Input:
8
Sample Output:
92

*/

#include <iostream>
#include <vector>

using namespace std;

//Check the condition
bool promising(const vector<int>& field, int queen_num, int pos) {
    for (int j = 0; j < queen_num; ++j) {
        // check whether a queen intersects with others
        if (field[j] == pos || j - field[j] == queen_num - pos || j + field[j] == queen_num + pos) {
            return false;
        }
    }

    return true;
}
//Backtrack algorithm
void queens(vector<int>& field, int queen_num, int& cnt) {
    // All queens are placed
    if (queen_num == field.size()) {
        ++cnt;
    }
    else {
        // Trying to put a queen into a column
        for (int i = 0; i < field.size(); ++i) {
            // Check whether a queen is not under attack
            if (promising(field, queen_num, i)) {
                field[queen_num] = i;
                queens(field, queen_num + 1, cnt);
            }
        }
    }
}

int main() {
    const int first_queen = 0;
    int n;
    // our chess board
    vector<int> v;
    int cnt = 0;

    cin >> n;
    v = vector<int>(n);
    queens(v, first_queen, cnt);
    cout << cnt;

    return 0;
}
