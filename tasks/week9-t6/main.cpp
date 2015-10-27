/*
Author: vpetrigo
Task:
Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь.
Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь.
Поэтому попавшийся словарь был как раз кстати.
К сожалению, для полноценного изучения языка недостаточно только одного словаря:
кроме англо-латинского необходим латинско-английский.
За неимением лучшего он решил сделать второй словарь из первого.

Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов.
Для каждого латинского слова, встречающегося где-либо в словаре, Вася
предлагает найти все его переводы (то есть все английские слова, для которых наше латинское встречалось в его списке переводов),
и считать их и только их переводами этого латинского слова.

Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.

Входные данные

В первой строке содержится единственное целое число N — количество английских слов в словаре.
Далее следует N описаний. Каждое описание содержится в отдельной строке,
в которой записано сначала английское слово, затем отделённый пробелами дефис (символ номер 45),
затем разделённые запятыми с пробелами переводы этого английского слова на латинский. Переводы отсортированы
в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.

Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов.
Общее количество слов на входе не превышает 100000.

Выходные данные

Выведите соответствующий данному латинско-английский словарь, в точности соблюдая формат входных данных.
В частности, первым должен идти перевод лексикографически минимального латинского слова,
далее — второго в этом порядке и т.д. Внутри перевода английские слова должны быть также отсортированы лексикографически.

Sample Input:
3
apple - malum, pomum, popula
fruit - baca, bacca, popum
punishment - malum, multa
Sample Output:
7
baca - fruit
bacca - fruit
malum - apple, punishment
multa - punishment
pomum - apple
popula - apple
popum - fruit
*/

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<string> get_translate() {
    const char delim = ',';
    vector<string> v;
    string tr;
    int prev_pos = 0, pos = 0;

    getline(cin, tr);
    while ((pos = tr.find(delim, prev_pos)) != string::npos) {
        v.push_back(tr.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 2;
    }

    v.push_back(tr.substr(prev_pos, tr.size() - prev_pos));

    return v;
}

map<string, vector<string>>& fill_map(map<string, vector<string>>& m, int n) {
    string s;
    char delim;

    for (int i = 0; i < n; ++i) {
        cin >> s >> delim;
        cin.get(); // remove space after delimiter
        m[s] = get_translate();
    }

    return m;
}

map<string, vector<string>> eng_to_lat(const map<string, vector<string>>& m) {
    map<string, vector<string>> tmp;

    for (map<string, vector<string>>::const_iterator it = m.begin(); it != m.end(); ++it) {
        for (int i = 0; i < it->second.size(); ++i) {
            tmp[it->second[i]].push_back(it->first);
        }
    }

    return tmp;
}

int main() {
    int n;
    map<string, vector<string>> eng_lat;
    map<string, vector<string>> lat_eng;

    cin >> n;
    eng_lat = fill_map(eng_lat, n);
    lat_eng = eng_to_lat(eng_lat);

    cout << lat_eng.size() << endl;
    for (map<string, vector<string>>::const_iterator it = lat_eng.begin(); it != lat_eng.end(); ++it) {
        cout << it->first << " - ";
        for (int i = 0; i < it->second.size(); ++i) {
            cout << it->second[i];
            if (i + 1 < it->second.size()) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}
