#include<iostream>
using namespace std;
int main()
{
    int n,a,rev=0,rem;
    cout<<"enter the value of n";
    cin>>n;
    a=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"the reverse number is" <<rev<<endl;
    if(rev==a)
    cout<<"it is palandrom";
    else
    cout<<"it is not palandrom";
}