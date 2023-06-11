#include<iostream>
using namespace std;
int add()
{
    int a,b;
    cout<<"enter the value";
    cin>>a;
    cin>>b;
    int sum=a+b;
    return sum;
}
int main()
{
    int c;
    c=add();
    cout<<c;
}
