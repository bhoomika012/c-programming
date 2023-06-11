#include<iostream>
using namespace std;
int main()
{
    int num1,num2,choice,result;
    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter operatr 1.+\n 2.-\n 3.*\n 4./\n 5.%";
    cin>>choice;
    cout<<"enter 2nd number";
    cin>>num2;
    if(choice==1)
    result=num1+num2;
    if(choice==2)
    result=num1-num2;
    if(choice==3)
    result=num1*num2;
    if(choice==4)
    result=num1/num2;
    if(choice==5)
    result=num1%num2;
    cout<<"the result is"<<result;
}