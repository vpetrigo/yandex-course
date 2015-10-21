/*
Author: vpetrigo
Task:
Вводится один символ, измените его регистр. 
То есть, если была введена прописная буква - сделайте ее заглавной и наоборот. 
Символы, не являющиеся латинской буквой, нужно выводить без изменений.

Входные данные

Вводится единственый символ.

Выходные данные

Выведите ответ на задачу.

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

    if (isalpha(c)) {
        if (islower(c)) {
            c = toupper(c);
        }
        else {
            c = tolower(c);
        }
    }

    cout << c;

    return 0;
}