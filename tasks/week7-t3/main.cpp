/*
Author: vpetrigo
Task:
Даны два действительных числа x и y.
Проверьте, принадлежит ли точка с координатами (x, y)
заштрихованному квадрату (включая его границу). Если точка принадлежит квадрату, выведите слово
YES, иначе выведите слово NO. На рисунке сетка проведена с шагом 1.
Image: https://ucarecdn.com/5f9db9bd-c610-474a-9a62-1d05acdd44c3/

Решение должно содержать функцию IsPointInSquare(x, y),
возвращающую True, если точка принадлежит квадрату и False, если не принадлежит.
Основная программа должна считать координаты точки, вызвать функцию IsPointInSquare и в зависимости
от возвращенного значения вывести на экран необходимое сообщение.

Функция IsPointInSquare не должна содержать инструкцию if.

Формат входных данных
Вводятся два действительных числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
0
0
Sample Output 1:
YES

Sample Input 2:
3
-7
Sample Output 2:
NO

*/

#include <iostream>

using namespace std;

bool IsPointInSquare(double x, double y) {
    const double x_l = -1, x_r = 1;
    const double y_b = -1, y_t = 1;

    bool x_in_sq = (x >= x_l) && (x <= x_r);
    bool y_in_sq = (y >= y_b) && (y <= y_t);

    return x_in_sq && y_in_sq;
}

int main() {
    double x, y;

    cin >> x >> y;

    if (IsPointInSquare(x, y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
