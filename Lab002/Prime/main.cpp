#include <iostream>

using namespace std;

int main()
{
    int n01;
    cout<<"Please Enter Your Number : ";
    cin>>n01;
    int flag=0;
    if(n01<=1)flag=1;
    for(int i=2;i<=n01/2;i++)
    {
        if(n01%i==0)
       {
           flag=1;
           break;
        }
    }
    if(flag)cout<<n01<<" is Not A Prime Number\n";
    else cout<<n01<< " Is Prime Number\n";
}
