#include <iostream>

using namespace std;

int main()
{
      int n08;
      cout<<"Please Enter Your Decimal Number : ";
      cin>>n08;
      int binary=0,position=1;
      while(n08){
        int bit=n08%2;
        binary+=bit*position;
        position*=10;
        n08/=2;
      }
      cout<<"Binary : "<<binary<<"\n";
}
