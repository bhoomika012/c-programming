#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Bank {
    string gst_number,min_income,company_name,min_salary,first_name,last_name,user1_phone_number,user2_phone_number,user1_first_name, user2_first_name,user1_last_name,user2_last_name,user1_dob,user2_dob,user1_age,user2_age,user1_house_number,user2_house_number,user1_city_name,user2_city_name,user1_district_name,user2_district_name,user1_state_name,user2_state_name,user1_address,user2_address,user1_pincode,user2_pincode,user1_email,user2_email,user1_name,user2_name,name,address,phone_number,pincode,city_name,district_name,state_name,email,house_number,password,dob,bank_code="10",bank_account_number,bank_user;
    float money_deposit;
    int age,user=1,choice,ask,choice2,ask2;
    public:
    void new_bank_account();
    void deposit_money();
    void withdrawl_money();
    void account_enquiry();
    void close_bank_account();
    void update_bank_account();
    void exit();
};
void Bank:: new_bank_account(){
    system("cls");
     cout<<"1.saving account\n 2.current account\n";
     cin>>choice;
     if(choice==1)
     {
        cout<<"which account you want\n 1.single\n 2.joint\n";
        cin>>ask;
        if(ask==1)
        {
    cout<<"ENTER YOUR DETAILS\n";
    cout<<"Enter Your First Name\n";
    cin>>first_name;
    cout<<"Enter Your Last Name\n";
    cin>>last_name;
    name=first_name+" "+last_name;
    cout<<"name="<<name<<endl;
    cout<<"Enter Your Date Of Birth\n";
    cin>>dob;
    cout<<"Enter Your Age\n";
    cin>>age;
    cout<<"Enter Your Address\n";
    cout<<"House Number\n";
    cin>>house_number;
    cout<<"City Name\n";
    cin>>city_name;
    cout<<"Distict Name\n";
    cin>>district_name;
    cout<<"State Name\n";
    cin>>state_name;
    address=house_number+" "+city_name+" "+district_name+" "+state_name+" ";
    cout<<"Your Address"<<address<<endl;
    cout<<"Pincode\n";
    cin>>pincode;
    cout<<"Enter Your Phone Number\n";
    cin>>phone_number;
    int length_of_phone_number = phone_number.length();
    if(length_of_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10";
        cout<<"enter your phone number\n";
    cin>>phone_number;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter money you want to deposit\n";
    cin>>money_deposit;
    cout<<"enter password\n";
    cin>>password;
    bank_user=to_string(user);
    bank_account_number=bank_code+dob+bank_user;
    user=user+1;
    cout<<"bank account number is"<<bank_account_number;
    cout<<"your Saving account with single user successfully created";
        }
    if(ask==2)
    {
        cout<<"enter first user details";
    cout<<"enter first user name first name\n";
    cin>>user1_first_name;
    cout<<"enter your last name\n";
    cin>>user1_last_name;
    user1_name=user1_first_name+" "+user1_last_name;
    cout<<"name="<<user1_name<<endl;
    cout<<"enter first uesr date of birth\n";
    cin>>user1_dob;
    cout<<"enter first user age\n";
    cin>>user1_age;
    cout<<"enter first user address\n";
    cout<<"user1 house number\n";
    cin>>user1_house_number;
    cout<<"user1_city_name\n";
    cin>>user1_city_name;
    cout<<"user1_district name\n";
    cin>>user1_district_name;
    cout<<"user1_state name\n";
    cin>>user1_state_name;
    user1_address=user1_house_number+" "+user1_city_name+" "+user1_district_name+" "+user1_state_name+" ";
    cout<<"user1 address"<<user1_address<<endl;
    cout<<"user1_pincode\n";
    cin>>user1_pincode;
    cout<<"enter user1 phone number\n";
    cin>>user1_phone_number;
    int length_of_user1_phone_number = phone_number.length();
    if(length_of_user1_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10";
        cout<<"enter user1 phone number\n";
    cin>>user1_phone_number;
    }
    cout<<"enter user1 your email\n";
    cin>>user1_email;
    cout<<"enter second user details\n";
    cout<<"enter second user name first name\n";
    cin>>user2_first_name;
    cout<<"enter second user  last name\n";
    cin>>user2_last_name;
    user2_name=user2_first_name+" "+user2_last_name;
    cout<<"name="<<user2_name<<endl;
    cout<<"enter second uesr date of birth\n";
    cin>>user2_dob;
    cout<<"enter second user age\n";
    cin>>user2_age;
    cout<<"enter second user address\n";
    cout<<"user2 house number\n";
    cin>>user2_house_number;
    cout<<"user2_city_name\n";
    cin>>user2_city_name;
    cout<<"user2_district name\n";
    cin>>user2_district_name;
    cout<<"user2_state name\n";
    cin>>user2_state_name;
    user2_address=user2_house_number+" "+user2_city_name+" "+user2_district_name+" "+user2_state_name+" ";
    cout<<"user2 address"<<user2_address<<endl;
    cout<<"user2_pincode\n";
    cin>>user2_pincode;
    cout<<"enter user2 phone number\n";
    cin>>user2_phone_number;
    int length_of_user2_phone_number = phone_number.length();
    if(length_of_user2_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10";
        cout<<"enter user2 phone number\n";
    cin>>user2_phone_number;
    }
    cout<<"enter user2 email\n";
    cin>>user2_email;
    cout<<"enter money you want to deposit\n";
    cin>>money_deposit;
    cout<<"enter password\n";
    cin>>password;
    bank_user=to_string(user);
    bank_account_number=bank_code+user1_dob+user2_dob+bank_user;
    user=user+1;
    cout<<"bank account number is"<<bank_account_number;
    cout<<"your saving account for joint user successfully created";
        }
     }
     if(choice==2)
     {
        cout<<"which account you want to open\n 1. Salried account\n 2. business account";
        cin>>choice2;
        if(choice2==1)
        {
            cout<<"enter your details for salary account\n";
            cout<<"enter your first name\n";
    cin>>first_name;
    cout<<"enter your last name\n";
    cin>>last_name;
    name=first_name+" "+last_name;
    cout<<"name="<<name<<endl;
    cout<<"enter your date of birth\n";
    cin>>dob;
    cout<<"enter your age\n";
    cin>>age;
    cout<<"enter your address\n";
    cout<<"house number\n";
    cin>>house_number;
    cout<<"city_name\n";
    cin>>city_name;
    cout<<"district name\n";
    cin>>district_name;
    cout<<"state name\n";
    cin>>state_name;
    address=house_number+" "+city_name+" "+district_name+" "+state_name+" ";
    cout<<"your address"<<address<<endl;
    cout<<"pincode\n";
    cin>>pincode;
    cout<<"enter your phone number\n";
    cin>>phone_number;
    int length_of_phone_number = phone_number.length();
    if(length_of_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10";
        cout<<"enter your phone number\n";
    cin>>phone_number;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter money you want to deposit\n";
    cin>>money_deposit;
    cout<<"enter password\n";
    cin>>password;
    cout<<"company name";
    cin>>company_name;
    cout<<"minimum salary you will receive";
    cin>>min_salary;
    bank_user=to_string(user);
    bank_account_number=bank_code+dob+bank_user;
    user=user+1;
    cout<<"bank account number is"<<bank_account_number<<endl;
    cout<<"your current salary account successfully created\n";
        }
        if(choice2==2)
        {
            cout<<"which business account you want\n 1. proprietorship\n 2. partnership";
            cin>>ask2;
            if(ask2==1)
            {
                cout<<"PROPRIETORSHIP BUSINESS ACCOUNT\n";
                cout<<"enter your details\n";
    cout<<"enter your first name\n";
    cin>>first_name;
    cout<<"enter your last name\n";
    cin>>last_name;
    name=first_name+" "+last_name;
    cout<<"name="<<name<<endl;
    cout<<"enter your date of birth\n";
    cin>>dob;
    cout<<"enter your age\n";
    cin>>age;
    cout<<"enter your address\n";
    cout<<"house number\n";
    cin>>house_number;
    cout<<"city_name\n";
    cin>>city_name;
    cout<<"district name\n";
    cin>>district_name;
    cout<<"state name\n";
    cin>>state_name;
    address=house_number+" "+city_name+" "+district_name+" "+state_name+" ";
    cout<<"your address"<<address<<endl;
    cout<<"pincode\n";
    cin>>pincode;
    cout<<"enter your phone number\n";
    cin>>phone_number;
    int length_of_phone_number = phone_number.length();
    if(length_of_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10";
        cout<<"enter your phone number\n";
    cin>>phone_number;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter money you want to deposit\n";
    cin>>money_deposit;
    cout<<"enter password\n";
    cin>>password;
    cout<<"company name";
    cin>>company_name;
    cout<<"minimum income";
    cin>>min_income;
    cout<<"enter your GST number\n";
    cin>>gst_number;
    bank_user=to_string(user);
    bank_account_number=bank_code+dob+bank_user;
    user=user+1;
    cout<<"bank account number is"<<bank_account_number<<endl;
    cout<<"your business proprietorship account successfully created\n";
        }
        if(ask2==2)
        {
            cout<<"PARTNERSHIP BUSINESS ACCOUNT\n";
             cout<<"enter first user details";
    cout<<"enter first user name first name\n";
    cin>>user1_first_name;
    cout<<"enter your last name\n";
    cin>>user1_last_name;
    user1_name=user1_first_name+" "+user1_last_name;
    cout<<"name="<<user1_name<<endl;
    cout<<"enter first uesr date of birth\n";
    cin>>user1_dob;
    cout<<"enter first user age\n";
    cin>>user1_age;
    cout<<"enter first user address\n";
    cout<<"user1 house number\n";
    cin>>user1_house_number;
    cout<<"user1_city_name\n";
    cin>>user1_city_name;
    cout<<"user1_district name\n";
    cin>>user1_district_name;
    cout<<"user1_state name\n";
    cin>>user1_state_name;
    user1_address=user1_house_number+" "+user1_city_name+" "+user1_district_name+" "+user1_state_name+" ";
    cout<<"user1 address"<<user1_address<<endl;
    cout<<"user1_pincode\n";
    cin>>user1_pincode;
    cout<<"enter user1 phone number\n";
    cin>>user1_phone_number;
    int length_of_user1_phone_number = phone_number.length();
    if(length_of_user1_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10\n";
        cout<<"enter user1 phone number\n";
    cin>>user1_phone_number;
    }
    cout<<"enter user1 your email\n";
    cin>>user1_email;
    cout<<"enter second user details\n";
    cout<<"enter second user name first name\n";
    cin>>user2_first_name;
    cout<<"enter second user  last name\n";
    cin>>user2_last_name;
    user2_name=user2_first_name+" "+user2_last_name;
    cout<<"name="<<user2_name<<endl;
    cout<<"enter second uesr date of birth\n";
    cin>>user2_dob;
    cout<<"enter second user age\n";
    cin>>user2_age;
    cout<<"enter second user address\n";
    cout<<"user2 house number\n";
    cin>>user2_house_number;
    cout<<"user2_city_name\n";
    cin>>user2_city_name;
    cout<<"user2_district name\n";
    cin>>user2_district_name;
    cout<<"user2_state name\n";
    cin>>user2_state_name;
    user2_address=user2_house_number+" "+user2_city_name+" "+user2_district_name+" "+user2_state_name+" ";
    cout<<"user2 address"<<user2_address<<endl;
    cout<<"user2_pincode\n";
    cin>>user2_pincode;
    cout<<"enter user2 phone number\n";
    cin>>user2_phone_number;
    int length_of_user2_phone_number = phone_number.length();
    if(length_of_user2_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10\n";
        cout<<"enter user2 phone number\n";
    cin>>user2_phone_number;
    }
    cout<<"enter user2 email\n";
    cin>>user2_email;
    cout<<"enter money you want to deposit\n";
    cin>>money_deposit;
    cout<<"enter password\n";
    cin>>password;
    cout<<"company name\n";
    cin>>company_name;
    cout<<"minimun income\n";
    cin>>min_income;
    cout<<"enter your GST number\n";
    cin>>gst_number;
    bank_user=to_string(user);
    bank_account_number=bank_code+user1_dob+user2_dob+bank_user;
    user=user+1;
    cout<<"bank account number is"<<bank_account_number<<endl;
    cout<<"your partnership account successfully created\n";
        }
            }
        }
        }
        void Bank::deposit_money()
        {
        string account_holder;
        int amount;
        cout<<"enter account number\n";
        cin>>bank_account_number;
        cout<<"account holder\n";
        cin>>account_holder;
        cout<<"how much you want to deposit";
        cin>>amount;
        money_deposit=money_deposit+amount;
        cout<<"new balance\n"<<money_deposit;
        }
        void Bank::withdrawl_money()
        {
            int amount;
            string account_holder;
             cout<<"enter account number\n";
        cin>>bank_account_number;
        cout<<"account holder\n";
        cin>>account_holder;
        cout<<"how much you want to withdrawl";
        cin>>amount;
        money_deposit=money_deposit-amount;
        cout<<"new balance\n"<<money_deposit;
        }
        void Bank::account_enquiry()
        {
            cout<<"Your total balance is"<<money_deposit;
        }
        void Bank::update_bank_account()
        {
            int update_choice;
            char x;
            do{
            cout<<"What you want to change\n";
            cout<<"You can only change gmail,password,phone number and address\n";
            cout<<"press\n 1.change gamil\n 2.change password\n 3.change address\n 4.chnage phone number\n";
            cin>>update_choice;
            switch(update_choice)
            {
                case 1:
                cout<<"enter your new gmail\n";
                cin>>email;
                cout<<"your updated mail is\n"<<email<<endl;
                break;
                case 2:
                cout<<"enter your new password\n";
                cin>>password;
                break;
                 case 3:
                cout<<"enter your new address\n";
                cin>>address;
                cout<<"your updated address is\n"<<address<<endl;
                break;
                case 4:
                cout<<"enter your new phone number\n";
                cin>>phone_number;
                cout<<"your updated phone number is\n"<<phone_number<<endl;
                int length_of_phone_number = phone_number.length();
    if(length_of_phone_number==10){

    }
    else{
        cout<<"invalid phone number must be of length 10\n";
        cout<<"enter your phone number\n";
    cin>>phone_number;
    cout<<"your updated password is\n"<<password<<endl;
    break;
            }
            }
            cout<<"YOUR UPDATED DETAILS:";
            cout<<name<<endl;
            cout<<dob<<endl;
            cout<<age<<endl;
            cout<<address<<endl;
            cout<<pincode<<endl;
            cout<<phone_number<<endl;
            cout<<email<<endl;
            cout<<password<<endl;
            cout<<money_deposit<<endl;
            cout<<bank_account_number<<endl;
             cout<<"do you want to perform more Y or N\n";
    cout<<"if you want to exit press N\n";
    cin>>x;
    if(x=='n'||x=='N'){
        cout<<"exit";
    }
    }
    while(x=='y'||x=='Y');
        }
int main(){
    int ch;
    char x;
    Bank obj;
    system("cls");
    do{
    cout<<"1.new_bank_account()";
    cout<<"2.deposit_money()";
    cout<<"3.withdrawl_money()";
    cout<<"4.account_enquiry()";
    cout<<"5.update_bank_account()";
    cout<<"6.close_bank_account()";
    cout<<"7.exit()";
    cout<<"select any option from above";
    cin>>ch;
    switch(ch){
        case 1: "1.new_bank_account";
        obj.new_bank_account();
        break;
        case 2: "2.deposit_money";
        obj.deposit_money();
        break;
        case 3: "3.withdrawl_money";
        obj.withdrawl_money();
        break;
        case 4: "4.account_enquiey";
        obj.account_enquiry();
        break;
        case 5: "5.update_bank-account";
        obj.update_bank_account();
        break;
        default:
            cout<<"invalid input";
        }
    cout<<"do you want to perform more Y or N\n";
    cout<<"if you want to exit press N\n";
    cin>>x;
    if(x=='n'||x=='N'){
        cout<<"exit";
    }
    }
    while(x=='y'||x=='Y');
    return 0;
}

