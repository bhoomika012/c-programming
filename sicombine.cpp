#include<iostream>
using namespace std;
int main()
{
    int p,r,t,max,sum,avg,SI;
    cout<<"enter first number";
    cin>>p;
    cout<<"enter second number";
    cin>>r;
    cout<<"enter third number";
    cin>>t;
    max=p;
    if(r>max)
    max=r;
    if(t>max)
    max=t;
    sum=p+r+t;
    avg=sum/3;
    SI=p*r*t/100;
    cout<<"maximum number is"<<max;
    cout<<"sum of numbers is"<<sum;
    cout<<"average of the number is"<<avg;
    cout<<"simple intrest is"<<SI;
    return 0;
}