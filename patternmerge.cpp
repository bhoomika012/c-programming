#include<iostream>
using namespace std;
int main()
{
    int choice,n,row=1;
    cout<<"enter your choice 1.triangle star\n 2.square star\n 3.increase column\n 4. increase row";
    cin>>choice;
    cout<<"enter the value of n";
    cin>>n;
    if(choice==1)
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
    if(choice==2)
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    if(choice==3)
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    if(choice==4)
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}