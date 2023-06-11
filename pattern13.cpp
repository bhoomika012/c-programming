#include<iostream>
using namespace std;
int main()
{
    char n, row='A';
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n)
    {
        char col='A', c=row;
        while(col<=n)
        {
            cout<<c;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}