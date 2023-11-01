#include<iostream>
#include<string>

bool is_palindrome(std::string str) {
    for(int i = 0; i < str.length()/2; ++i) {
        if(str[i] != str[str.length()-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
setlocale (LC_ALL, "RU");
    std::string input;
    std::cout << "Введи строчку ";
    std::cin >> input;

    if(is_palindrome(input)) {
        std::cout << input << " Это палиндром ";
    } else {
        std::cout << input << " Это не палиндром ";
    }

    return 0;
}