#include<iostream>
using namespace std;
int main()
{
    char n,row='A';
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
        char col='A';
        while(col<=n)
        {
            cout<<col;
            col=col+1;
        }
    }
}
