#include <iostream>

using namespace std;
class Stack{
    int* arr;
    int size;
    int tos;
public:
    Stack(int _size){
    cout <<"Stack CTOR"<<endl;
    tos = -1;
    size = _size;
    arr = new int[size];
}
//    Stack(Stack& s){
//         tos = s.tos;
//         size =s.size;
//        arr = new int[size];
//        for(int i=0; i<=tos;i++)
//            arr[i] = s.arr[i];
//        cout << "Copy CTOR"<<endl;
//    }

    void Push(int element){
        if(tos < size-1){
            tos++;
            arr[tos] = element;
        }
        else
            cout<<"Stack is Full"<<endl;
    }

    int Pop(int& element){
        if(tos > -1){
            element = arr[tos];
            tos--;
            return 1;
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return 0;
        }

    }
    ~Stack(){
        delete[] arr;
        cout <<"Stack Destructor"<<endl;

}

friend void MyFun(Stack s);
//friend void MyFun(Stack& s);
//friend void MyFun(Stack* s);
};


void MyFun(Stack s){
    int element;
    while(s.Pop(element))
        cout<<element<<endl;
}

//void MyFun(Stack& s){
//    int element;
//    if(s.Pop(element))
//        cout<<element<<endl;
//}

//void MyFun(Stack* s){
//    int element;
//    if(s->Pop(element))
//        cout<<element<<endl;
//    if(s->Pop(element))
//        cout<<element<<endl;
//    if(s->Pop(element))
//        cout<<element<<endl;
//}
int main()
{
    Stack s3(3);
    s3.Push(55);
    s3.Push(68);
//    // call by value
    MyFun(s3);
//    //call by ref
//    MyFun(s3);
    //call by address
//    MyFun(&s3);
    return 0;
}

