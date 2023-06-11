#include<iostream>
using namespace std;
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int x,y,z;
    cout<<"enter the value of x and y";
    cin>>x;
    cin>>y;
    z=add(x,y);
    cout<<z;
    int d,e,f;
    cout<<"enter the value of d and e";
    cin>>d;
    cin>>e;
    f=add(d,e);
    cout<<f;
}