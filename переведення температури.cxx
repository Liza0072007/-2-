#include <iostream>
using namespace std;

int main() {
    double TF, TC;

    cout << "Введите температуру в градусах Фаренгейта: ";
    cin >> TF;

   TC = (TF - 32) * 5.0 / 9.0;

    cout << "Температура в градусах Цельсия: " << TC << endl;

    return 0;
}
