#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout<<endl;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter your operator\n 1.+\n 2.-\n 3.*\n 4./\n 5.%";
    cin>>choice;
    cout<<"enter second number";
    cin>>b;
    switch(choice)
    {
    case 1:
    cout<< "sum ="<<a+b;
    break;
    case 2:
    cout<<"sub="<<a-b;
    break;
    case 3:
    cout<<"multiplication="<<a*b;
    break;
    case 4:
    cout<<"division="<<a/b;
    break;
    case 5:
    cout<<"remainder="<<a%b;
    break;
    default:
    cout<<"invalid";
}
}