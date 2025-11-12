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
    Point* UL;
    Point* LR;

public:
    Rectangle() {
        cout << "Rectangle Parameterless CTOR\n";
    }

    Rectangle(Point* p1, Point* p2) {
        UL = p1;
        LR = p2;
        cout << "Rectangle Parameterized CTOR (pointers)\n";
    }

    ~Rectangle() {
        cout << "Rectangle Destructor\n";
    }

    void SetPoints(Point* p1, Point* p2) {
        UL = p1;
        LR = p2;
    }

    void Print() {
        cout << "Rectangle Points:\n";
        if (UL && LR) {
            cout << "UL = "; UL->Print();
            cout << "LR = "; LR->Print();
        } else {
            cout << "Rectangle has no points assigned.\n";
        }
    }
};

class Triangle {
    Point *A, *B, *C;

public:
    Triangle() {
        cout << "Triangle Parameterless CTOR\n";
    }

    Triangle(Point* p1, Point* p2, Point* p3) {
        A = p1;
        B = p2;
        C = p3;
        cout << "Triangle Parameterized CTOR (pointers)\n";
    }

    ~Triangle() {
//        delete A;
//        delete B;
//        delete C;
        cout << "Triangle Destructor\n";
    }

    void SetPoints(Point* p1, Point* p2, Point* p3) {
        A = p1;
        B = p2;
        C = p3;
    }

    void Print() {
        cout << "Triangle Points:\n";
        if (A && B && C) {
            cout << "A = "; A->Print();
            cout << "B = "; B->Print();
            cout << "C = "; C->Print();
        } else {
            cout << "Triangle has no points assigned.\n";
        }
    }
};

int main() {
    cout << "-======= Start Of Main =======-\n";

    Point P1(2, 3);
    Point P2(6, 8);
//    Point P3(4, 1);
//    Point P4(7, 5);
//    Point P5(3,8);

    cout << "\n-======= Rectangle Using Aggregation =======-\n";
    Rectangle R1(&P1, &P2);
    R1.Print();

//    cout << "\n-======= Triangle Using Aggregation =======-\n";
//    Triangle T1(&P3, &P4, &P5);
//    T1.Print();

    cout << "\n-======= End Of Main =======-\n";
    return 0;
}
