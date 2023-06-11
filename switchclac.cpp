#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3, choice, result;
    char ask;
    cout<<"enter number 1";
    cin>>num1;
    cout<<"enter the operator\n 1.+\n 2.-\n 3.*\n 4./\n 5.%";
    cin>>choice;
    cout<<"enter number 2";
    cin>>num2;
    switch(choice)
    {
        case 1:
        result=num1+num2;
        cout<<result;
        break;
        case 2:
        result=num1-num2;
        cout<<result;
        break;
        case 3:
        result=num1*num2;
        cout<<result;
        break;
        case 4:
        result=num1/num2;
        cout<<result;
        break;
        case 5:
        result=num1%num2;
        cout<<result;
        break;
        default:
        cout<<"wrong operator";
    }
    cout<<"do you want to perform more\n Y:yes\n N:no";
    cin>>ask;
    switch(ask)
    {
        case 'Y':
        cout<<"enter the operator\n 1.+\n 2.-\n 3.*\n 4./\n 5.%";
    cin>>choice;
    cout<<"enter number 3";
    cin>>num3;
    switch(choice)
    {
        case 1:
        result=result+num3;
        cout<<result;
        break;
        case 2:
        result=result-num3;
        cout<<result;
        break;
        case 3:
        result=result*num3;
        cout<<result;
        break;
        case 4:
        result=result/num3;
        cout<<result;
        break;
        case 5:
        result=result%num3;
        cout<<result;
        break;
        default:
        cout<<"wrong operator";
    }
    cout<<"do you want to perform more\n Y:yes\n N:no";
    cin>>ask;
    switch(ask)
    {
        case 'Y':
        continue;
        case 'N':
        break;
    }
    }
}