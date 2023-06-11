#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"enter n";
    cin>>n;
    int c=(n%i==0);
    switch(n)
    {
        case 1:
        cout<<"not prime";
        case 2:
        cout<<"prime";
        default :
        cout<<"invalid";
        break;
    } 
}