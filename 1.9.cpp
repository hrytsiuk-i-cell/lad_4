#include <iostream>
using namespace std;
int main() {
    double price, money;
    cout <<"Введіть ціну товару:";
    cin >> price;
    cout <<"Введіть кількість грошей:";
    cin >> money;
    int count =money / price;
    double change = money - count * price
    count <<"Можна купити:" <<count<<'шт.\n";
    return 0;
}
