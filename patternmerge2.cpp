#include<iostream>
using namespace std;
int main()
{
    int choice;
    char n,c,row='A',i='A';
    cout<<"enter your choice\n 1.increase row(square)\n 2.increase col(square)\n 3.continous(square)\n 4.unique pattern(square)\n 5.increase row(triangle)\n 6.continous(triangle)\n 7.unique pattern(triangle)\n 8.decreasing row(triangle)";
    cin>>choice;
    cout<<"enter n";
    cin>>n;
    if(choice==1){
    char row='A';
    while(row<=n)
    {
        char col='A';
        while(col<=n)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    }
   else if(choice==2){
     char row='A';
     while(row<=n)
    {
        char col='A';
        while(col<=n)
        {
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   }
    else if(choice==3){
    char row='A', i='A';
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
    else if(choice==4){
    char row='A';
     while(row<=n)
    {
        char col='A',c=row;
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
     else if(choice==5){
    char row='A';
    while(row<=n)
    {
        char col='A';
        while(col<=row)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
     }
    else if(choice==6){
    char row='A',i='A';
    while(row<=n)
    {
        char col='A';
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
    else if(choice==7){
    char row='A';
    while(row<=n)
    {
        char col='A',c=row;
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
    else if(choice==8){
    char row='A';
    while(row<=n)
    {
        char col='A', s='A'+n-row;
        while(col<=row)
        {
            cout<<s;
            s=s+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    }
}