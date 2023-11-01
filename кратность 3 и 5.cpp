#include <iostream>
using namespace std;

int main(){
int number;
cout << "Введите число: ";
cin >> number;

bool isMultipleOf3 = number % 3 == 0; 
bool isMultipleOf5 = number % 5 == 0; 

if (isMultipleOf3 && isMultipleOf5){
    cout << number << " является числом, кратным 3 и 5.";
}else{
    cout << number << " не является числом, кратным 3 и 5.";}

return 0;
}