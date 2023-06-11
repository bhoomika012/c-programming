#include<iostream>
using namespace std;
int main()
{
    int a1=0,a2=1,a3,n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<a1<<a2;
   for(int i=3;i<=n;i++)
    {
    a3=a1+a2;
    a1=a2;
    a2=a3;
    cout<<a3;
    i=i+1;
    }
}
