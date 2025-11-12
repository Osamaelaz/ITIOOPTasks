#include <iostream>

using namespace std;
class Person{

int id;
char name[20];
int age;

public:
    Person(){cout<<"Person ctor\n";}
    ~Person(){cout<<"Person Destructor\n";}


};
class emp:public Person{
public :
    emp():Person(){cout<<"Emp Ctor\n";}
    ~emp(){cout<<"Emp Destructor\n";}
};

void swap(int& x,int& y){
int temp=x;
x=y;
y=temp;
cout<<"x: "<<x<<"y: "<<y<<"temp: "<<temp<<endl;
}
int main()
{
//    emp emp01;
int x=10,y=20;
swap(x,y);
    cout << "Hello world!" << endl;
    return 0;
}
