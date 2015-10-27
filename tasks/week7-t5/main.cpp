/*
Author: vpetrigo
Task:
Даны пять действительных чисел: x, y, xc, yc, r. Проверьте,
принадлежит ли точка (x, y) кругу с центром (xc, yc) и радиусом r.
Если точка принадлежит кругу, выведите слово YES, иначе выведите слово NO.
Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r),
возвращающую True, если точка принадлежит кругу и False, если не принадлежит.
Основная программа должна считать координаты точки, вызвать функцию IsPointInCircle
и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
Функция IsPointInCircle не должна содержать инструкцию if.

Формат входных данных
Вводятся пять действительных чисел.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
0.5
0.5
0
0
1
Sample Output 1:
YES

Sample Input 2:
0.5
0.5
1
1
0.1
Sample Output 2:
NO

*/

#include <iostream>

using namespace std;

// Checks whether a point in a circle with center in (xc, yc)
// Circle equation (x - xc) ^ 2 + (y - yc) ^ 2 = r ^ 2
// If this equation for a point is less or equal than doubled radius
// then it is in circle, otherwise not.
bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    bool in_circle = (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;

    return in_circle;
}

int main() {
    double x, y, xc, yc, r;

    cin >> x >> y >> xc >> yc >> r;

    if (IsPointInCircle(x, y, xc, yc, r)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
