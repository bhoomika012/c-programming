#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        int i=row;
        for(int col=1;col<=row;col++)
        {
            cout<<i;
            i++;
        }
        cout<<endl;
    }
}