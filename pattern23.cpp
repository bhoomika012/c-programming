#include<iostream>
using namespace std;
int main()
{
    char n, row='A';
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n)
    {
        char  space=row-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        char col=row;
        while(col<=n)
        {
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}