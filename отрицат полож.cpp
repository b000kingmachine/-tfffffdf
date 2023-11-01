/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
 setlocale (LC_ALL, "RU");
 int x;
 cin >> x;
 if (x>0){
     cout << "Это положительное ";
 }
else {
    cout << "Это отрицательное ";
}
    return 0;
}