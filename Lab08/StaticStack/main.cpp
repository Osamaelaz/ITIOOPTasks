
#include <iostream>
using namespace std;

class Stack {
    int arr[5];
    int size;
    int tos;

public:
    Stack() {
        size = 5;
        tos = -1;
        cout << "Constructor Created \n";
    }

    ~Stack() {
        cout << "Destructor \n";
    }

    void push(int ele) {
        if (tos < size - 1)
            arr[++tos] = ele;
        else
            cout << "Stack is Full\n";
    }

    int pop(int &ele) {
        if (tos > -1) {
            ele = arr[tos--];
            return 1;
        } else {
            cout << "Stack is Empty\n";
            return 0;
        }
    }


    friend void callByValue(Stack s);
    friend void callByRef(Stack &s);
    friend void callByAddress(Stack *s);
};


void callByValue(Stack s) {
    cout << "\n-======= callByValue =======-\n";
    int x;
    while (s.pop(x))
        cout << "Popped (copy): " << x << endl;
}

void callByRef(Stack &s) {
    cout << "\n-======= callByReference =======-\n";
    int x;
    while (s.pop(x))
        cout << "Popped (reference): " << x << endl;
}

void callByAddress(Stack *s) {
    cout << "\n-======= callByAddress =======-\n";
    int x;
    while (s->pop(x))
        cout << "Popped (address): " << x << endl;
}


int main() {
    cout << "\n===== Start Program =====\n";

    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    callByValue(s1);

    callByRef(s1);

    callByAddress(&s1);

    cout << "\n===== End of main =====\n";
    return 0;
}
