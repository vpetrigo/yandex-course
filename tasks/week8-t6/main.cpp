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

string word_size(const string& s, int& pos) {
    const char space = ' ';
    int end_of_word = s.find(space, pos);

    if (end_of_word == string::npos) {
        return string{};
    }

    string lw{s.begin() + pos, s.begin() + end_of_word};

    pos = end_of_word + 1;

    return lw;
}

int main() {
    string inp;
    int max_len = 0;
    int pos = 0;
    string longest_word;
    string word;

    getline(cin, inp);

    longest_word = word_size(inp, pos);
    word = longest_word;
    while(!word.empty()) {
        word = word_size(inp, pos);

        if (word.size() > longest_word.size()) {
            longest_word = word;
        }
    }
    
    cout << longest_word;

    return 0;
}