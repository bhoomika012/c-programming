#include<iostream>
using namespace std;
int main()
{
    char row='A',n,i='A';
    cout<<"enter the character n";
    cin>>n;
    while(row<=n)
    {
        char col='A';
        while(col<=n)
        {
            cout<<i;
            i=i+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}