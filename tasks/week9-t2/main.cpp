/*
Author: vpetrigo
Task:
¬о входной строке записана последовательность чисел через пробел. 
ƒл€ каждого числа выведите слово YES (в отдельной строке), 
если это число ранее встречалось в последовательности или NO, если не встречалось.

¬ходные данные

¬водитс€ число N - количество элементов списка, а затем N чисел.

¬ыходные данные

¬ыведите ответ на задачу.

Sample Input:
6
1 2 3 2 3 4
Sample Output:
NO
NO
NO
YES
YES
NO

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> s;
    int n;

    cin >> n;

    while (cin >> n) {
        if (s.find(n) == s.end()) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        s.insert(n);
    }

    return 0;
}