#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the value of n";
    cin>>n;
    for(row=n;1<=row;row--)
    {
        for(col=n;1<=col;col--)
        {
            cout<<row;
        }
        cout<<endl;
    }
}