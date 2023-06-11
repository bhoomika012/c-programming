#include<iostream>
using namespace std;
int main()
{
    int row=1,n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n)
    {
        int col=row,i=1;
        while(col<=n)
        {
            cout<<i;
            i=i+1;
            col=col+1;
        }
        int star=row-1;
        while(star)
        {
            cout<<"*";
            star=star-1;
        }
        int s=row-1;
        while(s)
        {
            cout<<"*";
            s=s-1;
        }
        int c=n-row+1;
        while(c)
        {
            cout<<c;
            c=c-1;
        }
        cout<<endl;
        row=row+1;
    }
}