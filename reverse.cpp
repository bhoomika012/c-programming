#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,remainder;
    cout<<"enter n";
    cin>>n;
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    cout<<rev;
}