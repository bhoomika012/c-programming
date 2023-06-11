#include<iostream>
using namespace std;
void duplicate(int arr[])
{
    for(int i=0;i<10;i++)
    {
        for(int j=j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            cout<<"duplicate numbers are:"<<arr[j];
        }
    }
}
int main()
{
     int arr[10],i;
    cout<<"Enter array";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    duplicate(arr);
    for(int i=0;i<10;i++)
    {
        for(int j=j=i+1;j<10;j++)
        {
            cout<<"duplicate numbers are:"<<arr[j];
        }
    }
}