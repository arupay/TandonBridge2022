/*Write a program that reads from the user two positive integers, and prints the result of when we add, subtract, multiply, divide, div and mod them.

Your program should interact with user exactly a it shows in the following example:

Please enter two positive integers, separated by a space:
14 4
14+ 4 = 18
14 -4 = 10
14 * 4 = 56
14 /4 = 3.5
14 div 4 = 3
14 mod 4 = 2
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Please enter two positive integers, separated by a space" << endl;
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << int(num1 + num2) << endl;
    cout << num1 << " - " << num2 << " = " << int(num1 - num2) << endl;
    cout << num1 << " * " << num2 << " = " << int(num1 * num2) << endl;
    cout << num1 << " / " << num2 << " = " << double(double(num1) / double(num2)) << endl;
    cout << num1 << " div " << num2 << " = " << int(num1 / num2) << endl;
    cout << num1 << " mod " << num2 << " = " << int(num1 % num2) << endl;

    return 0;
}
