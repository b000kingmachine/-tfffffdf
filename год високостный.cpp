#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (isLeapYear(year)) {
       cout << year << " - високосный год.\n";
    } else {
       cout << year << " - невисокосный год.\n";
    }

    return 0;
}