#include <iostream>

using namespace std;

int main()
{
   cout<< "Please Enter 5 Numbers For Summation\n";
   int n , sum=0;
   for(int i=0;i<5;i++){
    cin>>n;
    sum+=n;
   }
   cout<<"Sum: " <<sum<<"\n";
}
