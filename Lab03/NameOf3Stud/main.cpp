#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char studNames[3][10];
    cout<<"Enter Student Names"<<endl;;
    for(int i=0;i<3;i++){
        cout<<"Student "<<i+1<<" : ";
        cin>>studNames[i];
     }
    cout<<"\n=============================\n\n";
    for(int i=0;i<3;i++)cout<<studNames[i]<<" : "<<strlen(studNames[i])<<endl; ;
    cout<<"\n\n";

    return 0;
}
