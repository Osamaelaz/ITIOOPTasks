#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    //Setter
    void setReal(int r) {
        real = r;
    }

    void setImag(int i) {
        imag = i;
    }

    //Getter
    int getReal() {
        return real;
    }

    int getImag() {
        return imag;
    }

    void print() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    c1.setReal(3);
    c1.setImag(-2);

    Complex c2(4, 5);

    cout << "Complex01: ";
    c1.print();

    cout << "Complex02: ";
    c2.print();

    return 0;
}
