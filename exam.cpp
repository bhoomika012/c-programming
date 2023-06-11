#include<iostream>
using namespace std;
int main()
{
    int choice,n;
    char m,row;
    cout<<"what you want to perform\n 1.factoria\n 2.ABCD pattern\n 3. sum of number\n 4. A AB pattern";
    cin>>choice;
    if(choice==1)
    {
        int fac=1,i=1;
        cout<<"enter n value";
        cin>>n;
        while(i<=n)
        {
            fac=fac*i;
            i=i+1;
        }
        cout<<fac;
    }
    if(choice==3)
    {
        int sum=0,i=1;
        cout<<"enter the value of n";
        cin>>n;
        while(i<=n)
        {
            sum=sum+i;
            i=i+1;
        }
        cout<<sum;
    }
    if(choice==2)
    {
        char m,row='A';
    int i=1;
    cout<<"enter the character";
    cin>>m;
    while(row<=m)
    {
        int space = i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        char col=row;
        while(col<=m)
        {
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        i=i+1;
        row=row+1;
    }
}
    }