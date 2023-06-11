#include<iostream>
using namespace std;
int main()
{
    char n,row='A', i='A';
    cout<<"enter the valus of n";
    cin>>n;
    while(row<=n)
    {
    char col='A';
    while(col<=row)
    {
        cout<<i;
        i=i+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
    }
}