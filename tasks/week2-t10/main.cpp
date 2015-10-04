/*
Author: vpetrigo
Task:
Шахматный конь ходит буквой “Г” — на две клетки по вертикали 
в любом направлении и на одну клетку по горизонтали, или наоборот.
Даны две различные клетки шахматной доски, определите, 
может ли конь попасть с первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, 
задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.

Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом 
коня можно попасть во вторую или NO в противном случае.

Sample Input 1:
1
1
1
4
Sample Output 1 :
NO

Sample Input 2 :
1
1
8
8
Sample Output 2 :
NO

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    int d_x = x1 - x2;
    int d_y = y1 - y2;

    bool step_x = (abs(d_x) == 2);
    bool step_y = (abs(d_y) == 2);
    bool side_x = (abs(d_x) == 1);
    bool side_y = (abs(d_y) == 1);

    if (step_x && side_y) {
        cout << "YES";
    }
    else if (step_y && side_x) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
