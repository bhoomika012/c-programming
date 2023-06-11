#include <iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
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