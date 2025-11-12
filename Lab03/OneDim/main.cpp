#include <iostream>
#define size 5
using namespace std;

int main()
{
    int searchValue,index,arr[size]={0},sum=0,min=1000000,max=arr[0];
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
        sum+=arr[i];
        if(min>arr[i])min=arr[i];
        if(max<arr[i])max=arr[i];
    }
    cout<<"min : "<<min<<"\n" <<"max : "<<max <<"\n"<<"sum : "<<sum<<"\n";

    cout<<"\nEnter The Value that you search : ";
    cin>>searchValue;
    int found=0;
    for(int i=0;i<size;i++){
            if(arr[i]==searchValue){
                found=1;
                index=i;
                break;
            }
    }
    if(found) cout<< "\nYour Search Value : "<<searchValue<<"\nFound at Index : "<<index<<"\n";
    else cout<<"Sorry Your Value Not Found";
    cout<<"\n\n========== Sorting Using BubbleSort Algorithm (Swapping)============ \n\n";
    cout<<"Array Before Sorting \n";
    for(int i =0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<size-1;i++){
       for(int j=0;j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
      }
    }
    cout<<"Array After Sorting \n";
    for(int i =0;i<size;i++)cout<<arr[i]<<" ";
    cout<<"\n\n=============================================================================\n";
    return 0;
}
