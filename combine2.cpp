#include<iostream>
using namespace std;
int main()
{
char ask;
int n;
cout<<"what you want to perform";
cin>>ask;
cout<<"enter your number";
cin>>n;
if(ask=='N')
{
int i=1;
while(i<=n)
{
    cout<<i;
    i=i+1;
}
}
if(ask=='E')
{
int j=2;
while(j<=n)
{
  cout<<j;
  j=j+2;  
}
}
if(ask=='O')
{
int k=1;
while(k<=n)
{
    cout<<k;
    k=k+2;
}
}
if(ask=='S')
{
int l=1,sum=0;
while(l<=n)
{
    sum=sum+l;
    l=l+1;
}
cout<<sum;
}

if(ask=='F')
{
int m=1,fact=1;
while(m<=n)
{
    fact=fact*m;
    m=m+1;
}
cout<<"factorial ="<<fact;
}
}