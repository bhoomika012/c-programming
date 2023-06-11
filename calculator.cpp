#include<iostream>
using namespace std;
int main(){
    int num1,num2,choice,result,num3;
    char ans;
    cout<<"enter first number\n";
    cin>>num1;
    cout<<" enter opetaror 1. + \n 2. - \n 3. * \n 4. / \n 5. %";
    cin>>choice;
    cout<<"enter second number\n";
    cin>>num2;
     if(choice==1)
        result=num1+num2;
     if(choice==2)
     result=num1-num2;
     if(choice==3)
        result=num1*num3;
     if(choice==4)
        result=num1/num2;
     if(choice==5)
    result=num1%num2;
    cout<<"the result is"<<result;
    cout<<"do you want to continue y:yes \n n:no";
    cin>>ans;
    if(ans=='y'){
        while(true){
        cout<<"enter your operator 1.+\n 2.-\n 3.* \n 4./ \n 5.%";
        cin>>choice;
        cout<<"enter your variable";
        cin>>num3;
        if(choice==1)
        result=result+num3;
        if(choice==2)
            result=result-num3;
        if(choice==3)
            result=result*num3;
        if(choice==4)
            result=result/num3;
        if(choice==5)
            result=result%num3;
        cout<<"the result is"<<result;
        cout<<"do you want to perform more y:yes \n n:no";
        cin>>ans;
        if(ans=='y')
            continue;
        else
            break;
        }
    }
}