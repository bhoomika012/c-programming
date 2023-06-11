#include<iostream>
using namespace std;
int main()
{
    int n,row=1,count=1;
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<count;
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}