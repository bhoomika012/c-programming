#include<iostream>
using namespace std;
int main()
{
    int choice,n;
    char m;
    cout<<"enter your choice 1.square star\n 2. increase row(square)\n 3.increase col(square)\n 4.reverse square\n 5.continue square\n 6.increase row(triangle)\n 7.continue triangle\n 8.1 23 345 triangle\n 9.triangle star\n 10. AAA BBB\n 11.ABC ABC\n 12.ABC DEF\n 13.ABC BCD\n 14.A BB CCC(triangle)\n 15.A BC DEF(triangle)\n 16.A BC CDE\n 17.D CD BCD";
    cin>>choice;
    cout<<"enter the value of n";
    cin>>n;
    if(choice==1){
        cout<<"enter the value of n";
    cin>>n;
        int row=1;
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
    }
     if(choice==2){
        cout<<"enter the value of n";
    cin>>n;
        int row=1;
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
     if(choice==3){
        cout<<"enter the value of n";
    cin>>n;
        int row=1;
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
    }
     if(choice==4){
        cout<<"enter the value of n";
    cin>>n;
    int row=n;
    while(1<=row)
    {
        int col=n;
        while(1<=col)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    }
     if(choice==5){
        cout<<"enter the value of n";
    cin>>n;
        int row=1, i=1;
        while(row<=n)
        {
            int col=1;
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
     if(choice==6){
        cout<<"enter the value of n";
    cin>>n;
         int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
        cout<<row;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
    }
    }
     if(choice==7){
        cout<<"enter the value of n";
    cin>>n;
        int row=1,i=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<i;
            i=i+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    }
     if(choice==8){
        cout<<"enter the value of n";
    cin>>n;
         int row=1;
    while(row<=n)
    {
        int col=1,c=row;
        while(col<=row)
        {
            cout<<c;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    }
    if(choice==9){
        cout<<"enter the value of n";
    cin>>n;
        int row=1;
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
    else if(choice==10){
        cout<<"enter the character";
        cin>>m; 
    char r='A';
    while(r<=n)
    {
        char col='A';
        while(col<=n)
        {
            cout<<r;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
    }
   else if(choice==11){
    cout<<"enter the character";
        cin>>m;
     char r='A';
     while(r<=n)
    {
        char col='A';
        while(col<=n)
        {
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
   }
    else if(choice==12){
        cout<<"enter the character";
        cin>>m;
    char r='A', j='A';
     while(r<=n)
    {
        char col='A';
        while(col<=n)
        {
            cout<<j;
            j=j+1;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
   }
    else if(choice==13){
        cout<<"enter the character";
        cin>>m;
    char r='A';
     while(r<=n)
    {
        char col='A',c=r;
        while(col<=n)
        {
            cout<<c;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
    }
     else if(choice==14){
        cout<<"enter the character";
        cin>>m;
    char r='A';
    while(r<=n)
    {
        char col='A';
        while(col<=r)
        {
            cout<<r;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
     }
    else if(choice==15){
        cout<<"enter the character";
        cin>>m;
    char r='A',j='A';
    while(r<=n)
    {
        char col='A';
        while(col<=r)
        {
            cout<<j;
            j=j+1;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
    }
    else if(choice==16){
        cout<<"enter the character";
        cin>>m;
    char r='A';
    while(r<=n)
    {
        char col='A',c=r;
        while(col<=r)
        {
            cout<<c;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
    }
    else if(choice==17){
        cout<<"enter the character";
        cin>>m;
    char r='A';
    while(r<=n)
    {
        char col='A', s='A'+n-r;
        while(col<=r)
        {
            cout<<s;
            s=s+1;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
    }
}