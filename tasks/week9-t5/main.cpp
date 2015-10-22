/*
Author: vpetrigo
Task:
Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к 
парному ему слову. Все слова в словаре различны. 
Для одного данного слова определите его синоним.

Входные данные
Программа получает на вход количество пар синонимов N. 
Далее следует N строк, каждая строка содержит ровно два слова-синонима. 
После этого следует одно слово.

Выходные данные
Программа должна вывести синоним к данному слову.

Sample Input:
3
Hello Hi
Bye Goodbye
List Array
Goodbye
Sample Output:
Bye

*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> syn;
    int n;
    string s_word;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        string first, second;

        cin >> first >> second;
        syn[first] = second;
        syn[second] = first;
    }

    cin >> s_word;

    cout << syn[s_word];
    
    return 0;
}