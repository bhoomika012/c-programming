#include<iostream>
using namespace std;
int main()
{
    int p,r,t,SI;
    cout<<"enter principal";
    cin>>p;
    cout<<"enter rate";
    cin>>r;
    cout<<"enter time";
    cin>>t;
    SI=p*r*t/100;
    cout<<"simple intrest ="<<SI;
    return 0;
}