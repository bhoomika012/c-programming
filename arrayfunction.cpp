#include<iostream>
using namespace std;
int getmax(int arr[]);
int max=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        return max;
    }
int getmin(int arr[]);
    int min=arr[0];
     for(int i=0;i<10;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int main()
    {
        int arr[10],max,min;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    max=getmax(arr[i]);
    cout<<max;
    min=getmin(arr[i]);
    cout<<min;
    }