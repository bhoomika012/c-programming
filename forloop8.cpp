#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter the value of n";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<i;
            i++;
        }
        cout<<endl;
    }
}