/*
Author: vpetrigo
Task:
Переведите символ в верхний регистр.

Входные данные

Вводится единственый символ.

Выходные данные

Если введеный символ является строчной буквой латинского алфавита, то выведите такую же заглавную букву.
В противном случае выведите тот же символ, который был введен.

Sample Input:
b
Sample Output:
B

*/

#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    if (islower(c)) {
        c = toupper(c);
    }

    cout << c;

    return 0;
}
