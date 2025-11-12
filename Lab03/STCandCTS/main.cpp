#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[10];
    cout<<"Enter Your Name: ";
    cin>>name;
    int i=0;
    cout<< "\nName Before Toggle Case Char By Char\n";
    while(name[i]!='\0'){
        cout<<name[i];
        if(name[i] >= 97 && name[i] <= 122) name[i] -=32;
        else if(name[i] >=65 && name[i] <=90)name[i]+=32;
        i++;
    }
    cout<<"\n\n";
    i=0;
    cout<< "\n\nName After Toggle Case Char By Char\n";
    while(name[i]!='\0'){
        cout<<name[i];
        i++;
    }
    cout<<"\n\n";
    return 0;
}
