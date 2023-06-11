#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}