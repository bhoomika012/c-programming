#include<iostream>
using namespace std;
int print(arr[])
{
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    print(arr);
}