#include<iostream>
using namespace std;
int main()
{
    int n, row=1;
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}