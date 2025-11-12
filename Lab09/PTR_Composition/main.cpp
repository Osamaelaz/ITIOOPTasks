#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point() {
        x = y = 0;
        cout << "Point Parameterless CTOR\n";
    }

    Point(int _x) {
        x = _x;
        y = 0;
        cout << "Point Parameterized CTOR (one param)\n";
    }

    Point(int _x, int _y) {
        x = _x;
        y = _y;
        cout << "Point Parameterized CTOR (two params)\n";
    }

    ~Point() { cout << "Point Destructor\n"; }

    void SetX(int _x) { x = _x; }
    void SetY(int _y) { y = _y; }
    void SetPoint(int _x, int _y) { x = _x; y = _y; }

    int GetX() { return x; }
    int GetY() { return y; }

    void Print() { cout << "(" << x << "," << y << ")\n"; }
};

class Rectangle {
    Point UL;
    Point LR;

public:
    Rectangle() {
        cout << "Rectangle Parameterless CTOR\n";
    }

    Rectangle(int x1, int y1, int x2, int y2) {
        UL.SetPoint(x1, y1);
        LR.SetPoint(x2, y2);
        cout << "Rectangle Parameterized CTOR (coords)\n";
    }

    Rectangle(Point p1, Point p2) {
        UL = p1;
        LR = p2;
        cout << "Rectangle Parameterized CTOR (points)\n";
    }

    ~Rectangle() {
        cout << "Rectangle Destructor\n";
    }

    void Print() {
        cout << "Rectangle Points:\n";
        cout << "UL = "; UL.Print();
        cout << "LR = "; LR.Print();
    }
};

class Triangle {
    Point A, B, C;

public:
    Triangle() {
        cout << "Triangle Parameterless CTOR\n";
    }

    Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
        A.SetPoint(x1, y1);
        B.SetPoint(x2, y2);
        C.SetPoint(x3, y3);
        cout << "Triangle Parameterized CTOR (coords)\n";
    }

    Triangle(Point p1, Point p2, Point p3) {
        A = p1;
        B = p2;
        C = p3;
        cout << "Triangle Parameterized CTOR (points)\n";
    }

    ~Triangle() {
        cout << "Triangle Destructor\n";
    }

    void Print() {
        cout << "Triangle Points:\n";
        cout << "A = "; A.Print();
        cout << "B = "; B.Print();
        cout << "C = "; C.Print();
    }
};

int main() {
    cout << "-======= Start Of Main =======-\n";



//    cout << "\n-======= Rectangle Parameterless =======-\n";
//    Rectangle R1;
//    R1.Print();
//
//    cout << "\n-======= Rectangle Parameterized (coords) =======-\n";  //Same Of Above in Compilation
//    Rectangle R2(0, 0, 5, 4);
//    R2.Print();
//
//    cout << "\n-======= Rectangle Parameterized (Points) =======-\n";
//    Point P1(2, 3);
//    Point P2(5, 7);

//    Rectangle R3(P1, P2);
//    R3.Print();

//    cout << "\n-======= Triangle Parameterless =======-\n";
//    Triangle T1;
//    T1.Print();

//    cout << "\n-======= Triangle Parameterized (coords) =======-\n";  //Same Of Above in Compilation
//    Triangle T2(0, 0, 4, 0, 2, 3);
//    T2.Print();

//    cout << "\n-======= Triangle Parameterized (Points) =======-\n";
//    Point A(1, 1), B(5, 1), C(3, 4);
//    Triangle T3(A, B, C);
//    T3.Print();

    cout << "\n-======= End Of Main =======-\n";
    return 0;
}
