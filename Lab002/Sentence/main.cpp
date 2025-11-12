#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    cout<<"Please Enter Your Sentence\n";
    char ch;
    int chCount=0,wCount=0,spCount=0;
    int flag=0;
    while(cin.get(ch) && ch!='\n'){
        if(ch!=' ')chCount++;
        if(ch!=' ' && !flag){
            flag=1;
            wCount++;
        }
        else if(ch==' '){
                flag=0;
                spCount++;
        }
    }
    cout << "Count Of Words  : "<<wCount<<"\n";
    cout<<  "Count Of Chars  : "<<chCount<<"\n";
    cout<<  "Count Of Spaces : "<<spCount<<"\n";
}
