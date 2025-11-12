#include <iostream>

using namespace std;

int main()
{
     int n07,reversed=0;
     cout<<"Please Enter your Number : ";
     cin>> n07;
     while(n07){
        int mod=n07%10;
        reversed=reversed*10+mod;
        n07/=10;
     }
     cout<<"reverse" <<" : " << reversed<<"\n";
}
