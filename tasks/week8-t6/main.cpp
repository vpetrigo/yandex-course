/*
Author: vpetrigo
Task:
Найдите в этой строке самое длинное слово и выведите его.

Входные данные

Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные

Выведите самое длинное слово. Если таких слов несколько, 
то выводить нужно, которое встречается раньше.

Sample Input:
Everyone of us has all we need

Sample Output:
Everyone

*/

#include <iostream>
#include <string>

using namespace std;

int word_size(const string& s, int pos) {
    int new_pos = s.find(" ", pos);

    return new_pos - pos;
}

int main() {
    string s;
    int max_len = 0;
    int size = 0;

    getline(cin, s);
    while ((size = word_size(s, size)) > 0) {
        if (max_len < size) {
            
        }
    }

    return 0;
}