/*
Author: vpetrigo
Task:
� ���� �������� ������� ���������� ������������� ��������������� ���,
������� ������� ���������� � ���� ������� �����, ������ �� ������� ����� ���������
�������� �� 0 �� 255, ����������� �������. ��� ������� ���������� IP-�������:
127.0.0.0
192.168.0.1
255.0.255.255
�������� ���������, ������� ����������, �������� �� �������� ������ ���������� IP-�������.

������� ������

��������� �������� �� ���� ������ �� ������������ ��������.
�������� ������

���� ��� ������ �������� ���������� ������� IP-������, �������� YES, ����� �������� NO.
����������

��� �������� �� ������ � ����� ������ ������������ �������� stoi,
������� ��������� �� ���� ������, � ���������� �����.
Sample Input:
127.0.0.1
Sample Output:
YES

*/

#include <iostream>
#include <string>

using namespace std;

// checks that ip number is in the proper format
bool check_num_ip(const string& num) {
    const char zero_sym = '0';
    int n = 0;

    if (!num.size()) {
        return false;
    }

    for (string::const_iterator it = num.cbegin(); it != num.cend(); ++it) {
        if (!isdigit(*it)) {
            return false;
        }

        // if something like 01 or 001 was passed
        if (it == num.cbegin() && *it == zero_sym && it + 1 != num.cend()) {
            return false;
        }

        n *= 10;
        n += *it - zero_sym;
    }

    bool in_limit = n >= 0 && n <= 255;

    return in_limit;
}

bool is_ipaddr(const string& ip) {
    int pos = 0;
    int prev_pos = 0;
    int cnt = 0;

    // count dots and check numbers between them
    while ((pos = ip.find('.', prev_pos)) != string::npos) {
        string s = ip.substr(prev_pos, pos - prev_pos);

        ++cnt;

        if (!check_num_ip(s)) {
            return false;
        }

        prev_pos = pos + 1;
    }

    // get the number after the last dot
    string s = ip.substr(prev_pos, ip.size() - prev_pos);

    if (!check_num_ip(s)) {
        return false;
    }

    return (cnt == 3) ? true : false;
}

int main() {
    string inp;

    cin >> inp;

    if (is_ipaddr(inp)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
