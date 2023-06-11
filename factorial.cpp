#include<iostream>
using namespace std;
int main()
{
    int n,i=1,factorial=1;
    cin>>n;
    while(i<=n)
    {
        factorial=i*factorial;
        i=i+1;
    }
    cout<<factorial;
    return 0;
}