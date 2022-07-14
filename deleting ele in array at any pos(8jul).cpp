#include<iostream>
using namespace std;
int main()
{
    int n,i,e,p;
    cout<<"Enter number of elements want in array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter array's elements: ";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position where num to be delete: = ";
    cin>>p;
    for(i=p-1;i<n;i++)
    {
          arr[i]=arr[i+1];
    }
    cout<<"The new array is = ";
    for (i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}
