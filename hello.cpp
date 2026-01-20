#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Введіть ціле число: ";
    cin >> number;
    if (number > 0) {
        cout << "Число є додатнім." << endl;
    } else if (number < 0) {
        cout << "Число є від'ємним." << endl;
    } else {
        cout << "Число дорівнює нулю." << endl;
    }
    return 0;
}