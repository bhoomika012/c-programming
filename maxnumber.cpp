#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    max=a;
    if(b>max)
    max=b;
    cout<<"maximum number is"<<max;
    return 0;
}