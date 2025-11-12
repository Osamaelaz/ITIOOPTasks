#include <iostream>
#include<string.h>
#include define 15
using namespace std;

int main()
{
    char str01[6];
    char str02[7];
    char str03[size];
    cout<<"Enter First String : ";
    gets(str01);
    cout<<"\nEnter Second String : ";
    gets(str02);
    strcpy(str03,str01);
    strcat(str03," ");
    strcat(str03,str02);
    cout<<"\nFull String After concatenation : "<<str03<<"\n\n";
    return 0;
}
