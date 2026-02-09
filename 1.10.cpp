#includ <iostream>
using namespace std;
int main() {
    int sec;
    cout <<"Введіть кількість секунд:";
    cin >> sec;
    int h = sec / 3600;
    int m = (sec % 3600) /60;
    int s =sec % 60;
    cout << h<< ":" << m << ":"<<s;
    return 0;
}