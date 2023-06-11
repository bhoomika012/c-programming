#include<iostream>
using namespace std;
int main()
{
    int n, row=1;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n)
    {
        int  star=n-row;
        while(star>=0)
        {
            cout<<"*";
            star=star-1;
        }
        cout<<endl;
        row=row+1;
    }
}