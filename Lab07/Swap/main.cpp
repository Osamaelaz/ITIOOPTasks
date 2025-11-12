#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "======================" << endl;
    cout << "Call By Value" << endl;
    cout << "======================" << endl;
    cout << "Before swapByValue: x=" << x << ", y=" << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue:  x=" << x << ", y=" << y << endl;

    cout << "\n======================" << endl;
    cout << "Call By Reference" << endl;
    cout << "======================" << endl;
    cout << "Before swapByReference: x=" << x << ", y=" << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference:  x=" << x << ", y=" << y << endl;

    cout << "\n======================" << endl;
    cout << "Call By Pointer" << endl;
    cout << "======================" << endl;
    cout << "Before swapByPointer: x=" << x << ", y=" << y << endl;
    swapByPointer(&x, &y);
    cout << "After swapByPointer:  x=" << x << ", y=" << y << endl;

    return 0;
}
