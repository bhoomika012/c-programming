#include<iostream>
using namespace std;
int main()
{
    int arr[10],i;
    cout<<"Enter array";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        for(int j=j=i+1;j<10;j++)
        {
            if(arr[i]!=arr[j])
            cout<<"unique numbers are:"<<arr[j];
        }
    }
}
