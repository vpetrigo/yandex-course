/*
Author: vpetrigo
Task:
���������� ������ � ������� �������.

������� ������

�������� ����������� ������.

�������� ������

���� �������� ������ �������� �������� ������ ���������� ��������, �� �������� ����� �� ��������� �����.
� ��������� ������ �������� ��� �� ������, ������� ��� ������.

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
