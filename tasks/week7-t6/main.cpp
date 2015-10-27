/*
Author: vpetrigo
Task:
Проверьте, принадлежит ли точка данной закрашенной области:

Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
Решение должно содержать функцию IsPointInArea(x, y), возвращающую True,
если точка принадлежит области и False, если не принадлежит. Основная программа
должна считать координаты точки, вызвать функцию IsPointInArea и в зависимости от возвращенного
значения вывести на экран необходимое сообщение.
Функция IsPointInArea не должна содержать инструкцию if.

Формат входных данных
Вводятся два действительных числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
-4
-4
Sample Output 1:
NO

Sample Input 2:
-4
-3
Sample Output 2:
NO

*/

#include <iostream>

using namespace std;

bool IsPointInCircle(double x, double y) {
    const double xc = -1, yc = 1;
    const double r = 2;

    return (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;
}

bool IsPointInsideCircle(double x, double y) {
    const double xc = -1, yc = 1;
    const double r = 2;

    return (x - xc) * (x - xc) + (y - yc) * (y - yc) < r * r;
}

bool IsPointInArea(double x, double y) {
    bool left_line_right = (x + y >= 0);
    bool right_line_left = (2 * x - y + 2 <= 0);
    bool left_line_left = (x + y <= 0);
    bool right_line_right = (2 * x - y + 2 >= 0);

    bool in_circ_area = IsPointInCircle(x, y) && left_line_right && right_line_left;
    bool in_bottom = !IsPointInsideCircle(x, y) && left_line_left && right_line_right;

    return in_circ_area || in_bottom;
}

int main() {
    double x, y;

    cin >> x >> y;

    if (IsPointInArea(x, y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
