
#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " является простым числом.\n";
    } else {
        std::cout << number << " не является простым числом.\n";
    }

    return 0;
}