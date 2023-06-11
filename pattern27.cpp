#include<iostream>
using namespace std;
int main()
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