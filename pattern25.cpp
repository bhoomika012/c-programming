#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter te value of n";
    cin>>n;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row)
        {
            cout<<col;
            col=col+1;
        }
        int r=row-1;
        while(r)
        {
            cout<<r;
            r=r-1;
        }
        cout<<endl;
        row=row+1;
    }
}