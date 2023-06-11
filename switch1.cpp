#include<iostream>
using namespace std;
int main()
{
    char ch='1';
    cout<<endl;
    switch(ch)
    {
        case 1:
        cout<<"interger 1";
        break;
        case '1':
        cout<<"character 1";
        break;
        default:
        cout<<"none of them";
        break;
    }
}