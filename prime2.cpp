#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n value";
    cin>>n;
    int j=2;
    while(j<n)
    {
        int i=2;
        while(i<j)
        {
        if(j%i==0)
        {
            break;
        }
        i=i+1;
        if(i==j)
        {
            cout<<"prime"<<endl<<j;
        }
    }
    j=j+1;
}
}
