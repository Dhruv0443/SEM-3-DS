#include<iostream>
using namespace std;
int main()
{
    int number,i,pos;
    cout<<"Enter number of elements want in array = ";
    cin>>number;
    int arr[number];
    cout<<"Enter array's elements: ";
    for (i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position where num to be delete: = ";
    cin>>pos;
    for(i=p-1;i<number;i++)
    {
          arr[i]=arr[i+1];
    }
    cout<<"The new array is = ";
    for (i=0;i<number-1;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}
