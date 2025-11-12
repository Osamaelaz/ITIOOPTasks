#include <iostream>

using namespace std;

int main()
{
         int n05;
     cout<<"Please Enter Your Number: ";
     cin>>n05;
     int fact=1;
     for(int i=n05;i>=1;i--)fact*=i;
     cout<<"Factorial: "<<fact<<"\n";

}
