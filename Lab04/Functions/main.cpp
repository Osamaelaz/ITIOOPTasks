#include <iostream>
using namespace std;

double operation(int a, int b, char op);
int Factorial(int n);
int Power(int a, int b);
int getLength(char str[]);
void copy(char str1[], char str2[]);

int main()
{
    int x, y;
    char op;

    cout << "Enter First Operand: ";
    cin >> x;
    cout << "Enter Operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter Second Operand: ";
    cin >> y;

    cout << "-----------------------------\n";
    cout << "Result: " << operation(x, y, op) << endl;
    cout << "-----------------------------\n";

    int n;
    cout << "\nEnter A Number For Factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << Factorial(n) << endl;

    int a, b;
    cout << "\n\nEnter Base and Exponent: ";
    cin >> a >> b;
    cout << "Power of " << a << " ^ " << b << " = " << Power(a, b) << endl;

    while (getchar() != '\n');

    char str[50];
    cout << "\n\nEnter Your String: ";
    gets(str);
    cout << "Length of " << str << " = " << getLength(str) << endl;


    char str1[10];
    cout<<"\n\nEnter Your String To Coppied: ";
    gets(str1);
    char str2[10];
    copy(str1, str2);
    cout << "\nstr1: " << str1 << "\nstr2: " << str2 << endl;

    return 0;
}

double operation(int a, int b, char op)
{
    switch (op)
    {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/':
        if (b != 0)
            return (double)a / b;
        else
        {
            cout << "Can`t Divide By Zero\n";
            return 0;
        }
    case '%':
        if (b != 0)
            return a % b;
        else
        {
            cout << "Can`t Modul By Zero\n";
            return 0;
        }
    default:
        cout << "Invalid Operator\n";
        return 0;
    }
}

int Factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
        fact *= i;
    return fact;
}

int Power(int a, int b)
{
    int power = 1;
    for (int i = 0; i < b; i++)
        power *= a;
    return power;
}

int getLength(char str[])
{
    int i = 0, len = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            len++;
        i++;
    }
    return len;
}

void copy(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}
