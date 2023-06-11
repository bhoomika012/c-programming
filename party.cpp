#include<iostream>
using namespace std;
int main()
{
    int n,row,col,i;
    cout<<"enter the value of n";
    cin>>n;
     row=n;
    while(row>1)
    {
         col=n;
        while(col>row)
        {
            cout<<col;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
     col=1, i=row*2-1;
    while(col<=i)
    {
        cout<<i;
        col=col+1;
    }
    cout<<endl;
     row=1;
    while(row<n)
    {
         col=n;
        while(col>row)
        {
            cout<<col;
            col=col-1;
        }
        cout<<endl;
        row=row+1;
    }
    col=1,i=row*2-1;
    while(col<=i)
    {
        cout<<i+1;
        col=col+1;
    }
    cout<<endl;
     col=row+1;
    while(col<=n)
    {
        cout<<col;
        col=col+1;
    }
    cout<<endl;
}