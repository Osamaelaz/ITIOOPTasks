#include <iostream>

using namespace std;

int main()
{
        int x,y,pow=1;
    cout<<"Please Enter your Data:";
    cin>>x>>y;
    for(int i=1;i<=y;i++)pow*=x;
    cout<< "Power of "<< x <<"^"<<y<<": "<<pow<<"\n";
}
