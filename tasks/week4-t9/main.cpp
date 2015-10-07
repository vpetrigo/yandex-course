#include <iostream>

/*
Author: vpetrigo
Task:
Даны действительные коэффициенты a, b, c, при этом a ? 0 . 
Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.

Формат входных данных
Вводятся три действительных числа.

Формат выходных данных
Если уравнение имеет два корня, выведите два корня в порядке 
возрастания, если один корень — выведите одно число, 
если нет корней — не выводите ничего.
Sample Input:
1
-1
-2
Sample Output:
-1 2

*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;
    double r1, r2;

    cin >> a >> b >> c;

    double discr = b * b - 4 * a * c;

    if (discr >= 0) {
        if (discr > 0) {
            r1 = (-b + sqrt(discr)) / (2 * a);
            r2 = (-b - sqrt(discr)) / (2 * a);

            cout << min(r1, r2) << ' ' << max(r1, r2);
        }
        else {
            r1 = -b / (2 * a);
            cout << r1;
        }
    }

    return 0;
}