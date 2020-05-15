#include <iostream>
#include <set>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int n, a;
    string filename_in;
    ifstream fin;
    // вводится количество чисел, в следующей строке сами числа
    cout << "Введите путь к входному файлу:\n";
    cin >> filename_in;
    fin.open(filename_in);

    fin >> n;
    set<int> S; // делаем множество
    for (int i = 0; i < n; ++i) {
        fin >> a;
        if (S.count(a)) cout << "YES\n"; // если число уже встречалось выводим YES
        else{ // если нет – выводим NO, добавляем число в множество
            cout << "NO\n";
            S.insert(a);
        }

    }
}