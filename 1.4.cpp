#include <iostream>
using namespace std;

int main() {
    double r;
    const double PI = 3.14;

    cout << "Введіть радіус: ";
    cin >> r;

    cout << "Периметр: " << 2 * PI * r << endl;
    cout << "Площа: " << PI * r * r;
    return 0;
}