#include <iostream>
using namespace std;

int main()
{
    // From Char To Integer
    char c01;
    cout << "Enter Your Char: ";
    cin >> c01;
    int num = c01;
    cout << "Number of Char = " << num;
    cout<<"\n***********************";
    // From Integer To Char
    int n01;
    cout << "\nEnter Your Number: ";
    cin >> n01;
    char ch = n01;
    cout << "Char of Number = " << ch;
    cout<<"\n***********************";
    // Operations (+, -, *, /)
    int a, b;
    cout << "\nEnter Two Numbers To do Simple Operations: ";
    cin >> a >> b;

    cout << "Addition = " << a + b <<"\n";
    cout << "Subtraction = " << a - b <<"\n" ;
    cout << "Multiplication = " << a * b  <<"\n";
    if (b != 0)
        cout << "Division = " << (float)a / b <<"\n" ;
    else
        cout << "Division = Can't divide by zero\n";
    cout<<"***********************";
    // Convert From Capital to Small and Reverse
    char c02;
    cout << "\nInput Char: ";
    cin >> c02;

    if (c02 >= 'a' && c02 <= 'z') // 97 ==> 122
        cout << "Output: " << char(c02 - 32) << "\n";  // lowercase To uppercase
    else if (c02 >= 'A' && c02 <= 'Z')//65 ==> 90
        cout << "Output: " << char(c02 + 32) << "\n";  // uppercase To lowercase
    else
        cout << "Not English letter \n";
    return 0;
}
