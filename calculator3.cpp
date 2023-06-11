#include<iostream>
using namespace std;
int main()
{
    int a,b,choice,c,result;
    char ask;
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
    result=a+b;
    cout<<result;
    break;
    case 2:
    result=a-b;
    cout<<result;
    break;
    case 3:
     result=a*b;
    cout<<result;
    break;
    case 4:
     result=a/b;
    cout<<result;
    break;
    case 5:
    result=a%b;
    cout<<result;
    break;
    }
    cout<<"do you want to perform more\n Y:yes\n N:no";
    cin>>ask;
    switch(ask)
    {
        case 'Y':
        while(true)
        {
                cout<<"enter your operator\n 1.+\n 2.-\n 3.*\n 4./\n 5.%";
    cin>>choice;
    cout<<"enter third number";
    cin>>c;
    switch(choice)
    {
    case 1:
    result=result+c;
    cout<<result;
    break;
    case 2:
    result=result-c;
    cout<<result;
    break;
    case 3:
     result=result*c;
    cout<<result;
    break;
    case 4:
     result=result/c;
    cout<<result;
    break;
    case 5:
    result=result%c;
    cout<<result;
    break;
    }
    cout<<"do you want to perform more\n Y:yes\n N:no";
    cin>>ask;
    if(ask=='Y')
        continue;
    if(ask=='N')
        break;
    }
        }
}