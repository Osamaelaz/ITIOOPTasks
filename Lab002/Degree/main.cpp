#include <iostream>

using namespace std;

int main()
{
   int degree ;
   cout<<"Please Enter Your Degree : ";
   cin>> degree;
   if(degree>=0 && degree < 50)cout<<"Fail\n";
   else if (degree >=50 && degree < 65)cout<<"Acceptable\n";
   else if (degree >=65 && degree < 75)cout<<"Good\n";
   else if (degree >=75 && degree < 85)cout<<"Very Good\n";
   else cout<<"Excellent\n";
}
