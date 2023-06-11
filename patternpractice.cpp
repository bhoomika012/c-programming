#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n)
    {
       int star=row-1;
       while(star)
       {
        cout<<"*";
        star=star-1;
       }
       int col=n-row+1;
       while(col)
       {
        cout<<row;
        col=col-1;
       }
       cout<<endl;
       row=row+1;
    }
}