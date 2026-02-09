#include <iostream>
using namespace std;

int main() {
    double c;
    cout << "Введіть температуру в °C: ";
    cin >> c;

    double f = c * 1.8 + 32;
    cout << "Температура в °F: " << f;
    return 0;
}