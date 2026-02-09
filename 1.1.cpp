#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"Введіть тризначне число;";
    cin >> n;
    int a= n/100;
    int b= (n/10) % 10;
    int c= n % 10;
    cout <<"сума цифр:"<< a+b+c;
    return 0;
}