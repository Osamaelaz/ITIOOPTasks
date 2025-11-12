#include <iostream>
#define size 20
using namespace std;

int Fib(int index)
{
    int fib[size];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < size; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    cout << "\nFibonacci sequence: ";
    for (int i = 0; i < size; i++)
        cout << fib[i] << " ";

    cout << "\n";

    if (index >= 0 && index < size)
        return fib[index];
    else
    {
        cout << "Invalid index!\n";
        return -1;
    }
}

int main()
{
    int n;
    cout << "Enter index: ";
    cin >> n;

    int value = Fib(n);
    if (value != -1)
        cout << "\nFibonacci value at index " << n << " = " << value << endl;
    return 0;
}
