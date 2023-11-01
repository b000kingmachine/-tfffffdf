#include <iostream>
using namespace std;
int main() {
setlocale(0, "");

int year;

 cout << "введите год: ";
 cin >> year;

if (year % 100 == 0) {
	cout << "год вековой";
}
else {
    cout << "год не вековой";
}
return 0;
}