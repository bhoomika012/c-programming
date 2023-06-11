#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"enter n value";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
                cout<<" not prime";
                break;
        }
        i=i+1;
    }
    if(i==n)
    {
        cout<<"prime";
    }
}
