/*
Author: vpetrigo
Task:
ѕо данной строке определите, €вл€етс€ ли она палиндромом 
(то есть, читаетс€ одинаково как слева-направо, так и справа-налево).
¬ходные данные

Ќа вход подаетс€ 1 строка без пробелов.
¬ыходные данные

Ќеобходимо вывести yes, если строка €вл€етс€ палиндромом, и no в противном случае.

Sample Input:
kayak
Sample Output:
yes

*/

#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const char *first, const char *last) {
    if (first < last) {
        if (*first != *last) {
            return false;
        }
        return is_palindrome(first + 1, last - 1);
    }

    return true;
}

int main() {
    string s;

    cin >> s;

    if (is_palindrome(&s[0], &s[s.size() - 1])) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}