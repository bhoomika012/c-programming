#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum=a+b;
    cout<<sum;
}
int main()
{
    int x,y;
    cout<<"enter the value";
    cin>>x;
    cin>>y;
    add(x,y);
}