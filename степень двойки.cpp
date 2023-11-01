#include <iostream>
int main () {
setlocale (LC_ALL, "RU");
  int number;
  std::cin >> number;
  if (number && (number & (number - 1)) == 0)
    std::cout << " Это число есть степень двойки\n";
  else
    std::cout << "Это число не является степенью двойки\n";
}
