#include <iostream>
using namespace std;

int main() {
 
    double fahrenheit, celsius;
    
    fahrenheit = 65;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "Температура в градусах Цельсия: " << celsius << endl;

    return 0;
}
