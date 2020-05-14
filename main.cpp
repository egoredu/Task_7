#include <iostream>
#include <set>
using namespace std;

int main() {
    // вводится количество чисел, в следующей строке сами числа
    int n, a;
    cin >> n;
    set<int> S; // делаем множество
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (S.count(a)) cout << "YES\n"; // если число уже встречалось выводим YES
        else{ // если нет – выводим NO, добавляем число в множество
            cout << "NO\n";
            S.insert(a);
        }

    }
}