#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h> 
using namespace std;
class college 
{
    string first_name,last_name,name,dob,gender,religion,nationality,house_number,city_name,district_name,state_name,address,email,language,password,pass,m,degree,subject,qualification,experience,last_college,day,month,alt_phone_number,phone_number,year,Year,admission,student,college_code="120404",bsc_code="13",bcom_code="14";
    int ask,ask2,age,pincode,ask3,choice,choice2,choice3,choice4;
    float percentage,pcm_percentage,marks1,marks2,marks3,marks4,marks5,marks6,total_marks1,total_marks2,total_marks3,total_marks4,total_marks5,total_marks6;
    public:
    void registration();
    void eligibility();
    void location();
    void canteen();
    void exam_calander();
    void result();
    void information();
    void login();
    void exit();
};
void college:: registration()
{
    system("cls");
    cout<<"What You Want To Perform\n 1.Student Registration\n 2.Teacher Registration\n";
    cin>>ask;
    if(ask==1)
    {
        cout<<"ENTER STUDENT DETAILS\n";
        cout<<"Enter Your First Name\n";
        cin>>first_name;
        cout<<"Enter Your Last Name\n";
        cin>>last_name;
        name=first_name+" "+last_name;
        cout<<"Name="<<name<<endl;
        cout<<"Enter Your Father Name\n";
        cout<<"Enter First Name\n";
        cin>>first_name;
        cout<<"Enter Last Name\n";
        cin>>last_name;
        name=first_name+" "+last_name;
        cout<<"Father Name="<<name<<endl;
        cout<<"Enter Your Mother Name\n";
        cout<<"Enter First Name\n";
        cin>>first_name;
        cout<<"Enter Last Name\n";
        cin>>last_name;
        name=first_name+" "+last_name;
        cout<<"Mother Name="<<name<<endl;
        cout<<"Enter Your Date Of Birth\n";
        cout<<"Enter Day\n";
        cin>>day;
        cout<<"Enter Month\n";
        cin>>month;
        cout<<"Enter Year\n";
        cin>>Year;
        dob=day+" "+month+" "+Year;
        cout<<"Your Date Of Birth="<<dob<<endl;
        cout<<"Enter Your Age\n";
        cin>>age;
        cout<<"Enter Your Gender\n";
        cin>>gender;
        cout<<"Enter Your Religion\n";
        cin>>religion;
        cout<<"Enter Your Nationality\n";
        cin>>nationality;
        cout<<"Enter Your Address\n";
        cout<<"House Number\n";
        cin>>house_number;
        cout<<"City Name\n";
        cin>>city_name;
        cout<<"District Name\n";
        cin>>district_name;
        cout<<"State Name\n";
        cin>>state_name;
        address=house_number+" "+city_name+" "+district_name+" "+state_name+" ";
        cout<<"Your Address="<<address<<endl;
        cout<<"Pincode\n";
        cin>>pincode;
        cout<<"Enter Your Phone Number\n";
        cin>>phone_number;
        int length_of_phone_number = phone_number.length();
        if(length_of_phone_number==10){

    }
    else{
        cout<<"Invalid Phone Number Must Be Of Length 10\n";
        cout<<"Enter Your Phone Number\n";
        cin>>phone_number;
    }
    cout<<"Enter Your Alternative Phone Number\n";
        cin>>alt_phone_number;
        length_of_phone_number = alt_phone_number.length();
        if(length_of_phone_number==10){

    }
    else{
        cout<<"Invalid Phone Number Must Be Of Length 10\n";
        cout<<"Enter Your Alternative Phone Number\n";
        cin>>alt_phone_number;
    }
        cout<<"Enter Your Email\n";
        cin>>email;
        cout<<"Enter Your Mother Tounge\n";
        cin>>language;
        cout<<"In Which Year You Have Completed Your 10th\n";
        cin>>year;
        cout<<"Overall Percentange In 10th Standard\n";
        cin>>percentage;
        cout<<"In Which Year You Have Completed Your 12th\n";
        cin>>year;
        cout<<"Overall Percentage In 12th Standard\n";
        cin>>percentage;
        cout<<"Percentage Scored In PCM\n";
        cin>>pcm_percentage;
        cout<<"Enter Your Password\n";
        cin>>password;
        cout<<"Confirm Your Password\n";
        cin>>pass;
        if(pass==password)
        {

        }
        else
        {
        cout<<"Your Password Dosen't Match Try Again..!!\n";
        cout<<"Enter Your Password\n";
        cin>>password;
        cout<<"confirm Your Password\n";
        cin>>pass;
        }
        cout<<"YOUR REGISTRATION HAS BEEN DONE\n";
    }
    if(ask==2){
     cout<<"ENTER PROFESSOR DETAILS\n";
        cout<<"Enter Your First Name\n";
        cin>>first_name;
        cout<<"Enter Your Last Name\n";
        cin>>last_name;
        name=first_name+" "+last_name;
        cout<<"Name="<<name<<endl;
        cout<<"Enter Your Date Of Birth\n";
        cout<<"Enter Day\n";
        cin>>day;
        cout<<"Enter Month\n";
        cin>>month;
        cout<<"Enter Year\n";
        cin>>Year;
        dob=day+" "+month+" "+Year;
        cout<<"Your Date Of Birth="<<dob<<endl;
        cout<<"Enter Your Age\n";
        cin>>age;
        cout<<"Enter Your Gender\n";
        cin>>gender;
        cout<<"Married or Unmarried\n";
        cin>>m;
        cout<<"Enter Your Religion\n";
        cin>>religion;
        cout<<"Enter Your Nationality\n";
        cin>>nationality;
        cout<<"Enter Your Address\n";
        cout<<"House Number\n";
        cin>>house_number;
        cout<<"City Name\n";
        cin>>city_name;
        cout<<"District Name\n";
        cin>>district_name;
        cout<<"State Name\n";
        cin>>state_name;
        address=house_number+" "+city_name+" "+district_name+" "+state_name+" ";
        cout<<"Your Address="<<address<<endl;
        cout<<"Pincode\n";
        cin>>pincode;
        cout<<"Enter Your Phone Number\n";
        cin>>phone_number;
        int length_of_phone_number = phone_number.length();
        if(length_of_phone_number==10){

    }
    else{
        cout<<"Invalid Phone Number Must Be Of Length 10\n";
        cout<<"Enter Your Phone Number\n";
        cin>>phone_number;
    }
    cout<<"Enter Your Alternative Phone Number\n";
        cin>>alt_phone_number;
        length_of_phone_number = alt_phone_number.length();
        if(length_of_phone_number==10){

    }
    else{
        cout<<"Invalid Phone Number Must Be Of Length 10\n";
        cout<<"Enter Your Alternative Phone Number\n";
        cin>>alt_phone_number;
    }
        cout<<"Enter Your Email\n";
        cin>>email;
        cout<<"Enter Your Mother Tounge\n";
        cin>>language;
        cout<<"Enter Your Qualification\n";
        cout<<"Enter The Degree You Have\n";
        cin>>degree;
        cout<<"Enter The Subject You Have Degree\n";
        cin>>subject;
        qualification=degree+" in "+subject;
        cout<<"Qualification="<<qualification<<endl;
        cout<<"Enter Your Experience\n";
        cout<<"How Many Month or Years Experience You Have\n";
        cin>>experience;
        cout<<"Enter The Name Of Last College You Have Teached\n";
        cin>>last_college;
         cout<<"Enter Your Password\n";
        cin>>password;
        cout<<"Confirm Your Password\n";
        cin>>pass;
        if(pass==password)
        {

        }
        else
        {
        cout<<"Your Password Dosen't Match Try Again..!!\n";
        cout<<"Enter Your Password\n";
        cin>>password;
        cout<<"confirm Your Password\n";
        cin>>pass;
        }
        cout<<"YOUR REGISTRATION HAS BEEN DONE\n";
        }
}
        void college:: eligibility()
        {
            cout<<"WHOSE ELIGIBILITY YOU WANT TO KNOW\n 1.STUDENT\n 2.PROFESSOR\n";
            cin>>ask2;
            if(ask2==1)
            {
                cout<<"Your Overall Percentage in PCM="<<pcm_percentage<<endl;
                if(pcm_percentage>=75)
                {
                    cout<<"You Are Eligible For BSc Computer Science\n";
                    cout<<"SEMESTER 1 SUBJECTS:\n";
                    cout<<"1.Introduction to Digital Electronics\n";
                    cout<<"2.Basics of Computer Science\n";
                    cout<<"3.Environmental Sciences\n";
                    cout<<"4.Foundation course in Mathematics\n";
                    cout<<"SEMESTER 2 SUBJECTS:\n";
                    cout<<"1.Front Office Management\n";
                    cout<<"2.Discrete Mathematics\n";
                    cout<<"3.Computer Organization\n";
                    cout<<"4.Fundamental of Open Source Software-LINUX\n";
                    cout<<"SEMESTER 3 SUBJECTS:\n";
                    cout<<"1.Object-Oriented Programming using C++\n";
                    cout<<"2.Functional English-I\n";
                    cout<<"3.Technical Writing\n";
                    cout<<"4.Analytical Skill Development-I\n";
                    cout<<"SEMESTER 4 SUBJECTS:\n";
                    cout<<"1.Database Management Systems\n";
                    cout<<"2.Value and Ethics\n";
                    cout<<"3.System Analysis and design\n";
                    cout<<"4.Analytical Skill Development-II\n";
                    cout<<"SEMESTER 5 SUBJECTS:\n";
                    cout<<"1.Operating Systems concepts\n";
                    cout<<"2.Introduction to Data Structures\n";
                    cout<<"3.System Software\n";
                    cout<<"4.Python programming\n";
                    cout<<"SEMESTER 6 SUBJECTS:\n";
                    cout<<"1.Introduction to Computer Network\n";
                    cout<<"2.Numerical Analysis\n";
                    cout<<"3.System Programming\n";
                    cout<<"4.Introduction to Web Technology\n";
                    admission=college_code+bsc_code;
                    cout<<"YOUR ADMISSION NUMBER IS="<<admission<<endl;
                }
                else if(pcm_percentage<75&&pcm_percentage>55)
                {
                    cout<<"You Are Eligible For B.Com\n";
                    cout<<"SEMESTER 1 SUBJECTS:\n";
                    cout<<"1.Financial Accounting\n"; 
                    cout<<"2.Business Computing\n";
                    cout<<"3.Business Organization & Management\n";
                    cout<<"4.Quantitative Methods\n";
                    cout<<"SEMESTER 2 SUBJECTS:\n";
                    cout<<"1.Environmental Studies\n";
                    cout<<"2.Business Laws\n";
                    cout<<"3.Corporate Communication\n";
                    cout<<"4.Financial System\n";
                    cout<<"SEMESTER 3 SUBJECTS:\n";
                    cout<<"1.Income Tax Laws\n";
                    cout<<"2.Advanced Economics\n";
                    cout<<"3.Elements of Cost Accounting\n";
                    cout<<"4.Entrepreneurship\n";
                    cout<<"SEMESTER 4 SUBJECTS:\n";
                    cout<<"1.Indirect Laws\n";
                    cout<<"2.Corporate Accounting \n";
                    cout<<"3.Stock & Commodity Market\n";
                    cout<<"4.(Advanced) Operation Research\n";
                    cout<<"SEMESTER 5 SUBJECTS:\n";
                    cout<<"1.Cost Accounting\n";
                    cout<<"2.Strategic Management\n";
                    cout<<"3.International Business\n";
                    cout<<"4.Elective Courses: Advertising, Principles of Marketing, Computer Application in Business\n";
                    cout<<"SEMESTER 6 SUBJECTS:\n";
                    cout<<"1.Principles of Auditing\n";
                    cout<<"2.Business Communication\n";
                    cout<<"3.Management & Information Business\n";
                    cout<<"4.Fundamentals of Financial Management\n";
                    admission=college_code+bcom_code;
                    cout<<"YOUR ADMISSION NUMBER IS="<<admission<<endl;
                }
                     else {
                     cout<<"You Are Not Eligible\n";
            }
            }
            if(ask2==2)
            {
                cout<<"Your Qualification is="<<qualification<<endl;
                if(qualification=="phd in account")
                cout<<"You Are Eligible for Teaching accounts\n";
                else if(qualification=="phd in commerce")
                cout<<"You Are Eligible for Teaching commerce\n";
                else if(qualification=="phd in marketing")
                cout<<"You Are Eligible for Teaching marketing\n";
                else if(qualification=="phd in business")
                cout<<"You Are Eligible for Teaching business\n";
                else if(qualification=="phd in maths")
                cout<<"You Are Eligible for Teaching maths\n";
                else if(qualification=="phd in english")
                cout<<"You Are Eligible for Teaching english\n";
                else if(qualification=="phd in science")
                cout<<"You Are Eligible for Teaching science\n";
                else if(qualification=="phd in computer")
                cout<<"You Are Eligible for Teaching computer\n";
                else if(qualification=="phd in psychology")
                cout<<"You Are Eligible for Teaching psychology\n";
                 else if(qualification=="phd in philosphy")
                cout<<"You Are Eligible for Teaching philosphy\n";
                else
                cout<<"You Are Not Eligible\n";
            }
        }
        void college:: location()
        {
            cout<<"WHICH LOCATION YOU WANT TO KNOW\n 1.CLASSROOM\n 2.LIBRARY\n 3.CANTEEN";
            cin>>ask3;
            if(ask3==1)
            {
                cout<<"Which Classroom Location You Want To Know\n 1.BSc Computer Science\n 2.B.Com\n";
                cin>>choice;
                if(choice==1)
                {
                cout<<"BSc Computer Science Classroom Location is=\n";
                cout<<"First Floor\n";
                cout<<"Block A\n";
                cout<<"Room Number 1A and 2A\n";
                }
                if(choice==2)
                {
                cout<<"B.Com Classroom Location is=\n";
                cout<<"First Floor\n";
                cout<<"Block A\n";
                cout<<"Room Number 1B and 2B\n";
                }
            }
            if(ask3==2)
            {
                cout<<"Library Location is=\n";
                cout<<"Ground Floor\n";
                cout<<"Block A\n";
            }
            if(ask3==3)
            {
                cout<<"canteen Location is=\n";
                cout<<"Ground Floor\n";
                cout<<"Block B\n";
            }
        }
        void college::canteen()
        {
            cout<<"\t\t\t\t\tWELCOME TO THE CANTEEN\t\t\t\t\t\n";
            cout<<"\t\t\t\t\t\tMENU\n";
                cout<<"\t\t\t\tBEVERAGES\n";
                cout<<"1.Tea\t\t\t\t\t\t\t5/-\n";
                cout<<"2.Coffee\t\t\t\t\t\t10/-\n";
                cout<<"3.Cold Coffee\t\t\t\t\t\t30/-\n";
                cout<<"4.Iced Tea\t\t\t\t\t\t30/-\n";
                cout<<"5.Cold Drinks\t\t\t\t\t\tM.R.P/-\n";
                cout<<"\t\t\t\tSNACKS\n";
                cout<<"1.Samosa\t\t\t\t\t\t5/-\n";
                cout<<"2.Patties\t\t\t\t\t\t15/-\n";
                cout<<"3.Maggie\t\t\t\t\t\t25/-\n";
                cout<<"4.Burger\t\t\t\t\t\t25/-\n";
                cout<<"5.French Fries\t\t\t\t\t\t30/-\n";
                cout<<"\t\t\t\tCHINESE PLATE\n";
                cout<<"1.Veg Fried Rice\t\t\t\t\t30/-\n";
                cout<<"2.Chowmein\t\t\t\t\t\t30/-\n";
                cout<<"3.Spring Roll\t\t\t\t\t\t30/-\n";
                cout<<"4.Honey Potato\t\t\t\t\t\t40/-\n";
                cout<<"5.Chilli Potato\t\t\t\t\t\t40/-\n";
                cout<<"\t\t\t\tSWEET TOOTH\n";
                cout<<"1.Gulab Jamun\t\t\t\t\t\t15/-\n";
                cout<<"2.Pastry\t\t\t\t\t\t15/-\n";
                cout<<"3.Cream Roll\t\t\t\t\t\t20/-\n";
                cout<<"4.Swiss Roll\t\t\t\t\t\t10/-\n";
                cout<<"5.Muffin\t\t\t\t\t\t5/-\n";
            }
            void college::exam_calander()
            {
                cout<<"\t\t\t\t\tWELCOME TO THE EXAM CALANDER\n";
                cout<<"Press\n1.BSc CS Exam Calander\n 2.B.Com Exam Calander\n";
                cin>>choice2;
                if(choice2==1)
                {
                    cout<<"\t\t\tFIRST SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"12th October 2023\tThursday\t\t\t\t\tIntroduction to Digital Electronics\n";
                    cout<<"16th October 2023\tMonday\t\t\t\t\t\tBasics of Computer Science\n";
                    cout<<"20th October 2023\tFriday\t\t\t\t\t\tEnvironmental Sciences\n";
                    cout<<"25th October 2023\tWednesday\t\t\t\t\tFoundation course in Mathematics\n";
                    cout<<"\t\t\tSECOND SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"2nd Feburary 2024\tFriday\t\t\t\t\t\tFront Office Management\n";
                    cout<<"5th Feburary 2024\tMonday\t\t\t\t\t\tDiscrete Mathematics\n";
                    cout<<"8th Feburary 2024\tThrusday\t\t\t\t\tComputer Organization\n";
                    cout<<"12th Feburary 2024\tMonday\t\t\t\t\t\tFundamental of Open Source Software-LINUX\n";
                    cout<<"\t\t\tTHIRD SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"5th June 2024\t\tWednesday\t\t\t\t\tObject-Oriented Programming using C++\n";
                    cout<<"10th June 2024\t\tMonday\t\t\t\t\t\tFunctional English-I\n";
                    cout<<"14th June 2024\t\tFriday\t\t\t\t\t\tTechnical Writing\n";
                    cout<<"17th June 2024\t\tMonday\t\t\t\t\t\tAnalytical Skill Development-I\n";
                    cout<<"\t\t\tFOURTH SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"1st October 2024\tTuesday\t\t\t\t\t\tDatabase Management Systems\n";
                    cout<<"4th October 2024\tFriday\t\t\t\t\t\tValue and Ethics\n";
                    cout<<"7th October 2024\tMonday\t\t\t\t\t\tSystem Analysis and design\n";
                    cout<<"9th October 2024\tWednesday\t\t\t\t\tAnalytical Skill Development-II\n";
                    cout<<"\t\t\tFIFTH SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"3rd Feburary 2025\tMonday\t\t\t\t\t\tOperating Systems concepts\n";
                    cout<<"6th Feburary 2025\tThrusday\t\t\t\t\tIntroduction to Data Structures\n";
                    cout<<"10th Feburary 2025\tMonday\t\t\t\t\t\tSystem Software\n";
                    cout<<"13th Feburary 2025\tThrusday\t\t\t\t\tPython programming\n";
                    cout<<"\t\t\tSIXTH SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"4th June 2025\t\tWednesday\t\t\t\t\tIntroduction to Computer Network\n";
                    cout<<"9th June 2025\t\tMonday\t\t\t\t\t\tNumerical Analysis\n";
                    cout<<"13th June 2025\t\tFriday\t\t\t\t\t\tSystem Programming\n";
                    cout<<"17th June 2025\t\tTuesday\t\t\t\t\t\tIntroduction to Web Technology\n";
                }
                if(choice2==2)
                {
                    cout<<"\t\t\tFIRST SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"5th October 2023\tThrusday\t\t\t\tFinancial Accounting\n"; 
                    cout<<"9th October 2023\tMonday\t\t\t\t\tBusiness Computing\n";
                    cout<<"13th October 2023\tFriday\t\t\t\t\tBusiness Organization & Management\n";
                    cout<<"17th October 2023\tTuesday\t\t\t\t\tQuantitative Methods\n";
                    cout<<"\t\t\tSECOND SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"2nd Feburary 2024\tFriday\t\t\t\t\tEnvironmental Studies\n";
                    cout<<"5th Feburary 2024\tMonday\t\t\t\t\tBusiness Laws\n";
                    cout<<"8th Feburary 2024\tThrusday\t\t\t\tCorporate Communication\n";
                    cout<<"12th Feburary 2024\tMonday\t\t\t\t\tFinancial System\n";
                    cout<<"\t\t\tTHIRD SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"5th June 2024\t\tWednesday\t\t\t\t\tIncome Tax Laws\n";
                    cout<<"10thJune 2024\t\tMonday\t\t\t\t\tAdvanced Economics\n";
                    cout<<"14th June 2024\t\tFriday\t\t\t\t\tElements of Cost Accounting\n";
                    cout<<"17th June 2024\t\tMonday\t\t\t\t\tEntrepreneurship\n";
                    cout<<"\t\t\tFOURTH SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"1st October 2024\tTuesday\t\t\t\t\tIndirect Laws\n";
                    cout<<"4th October 2024\tFriday\t\t\t\t\tCorporate Accounting \n";
                    cout<<"7th October 2024\tMonday\t\t\t\t\tStock & Commodity Market\n";
                    cout<<"9th October 2024\tWednesday\t\t\t\t(Advanced) Operation Research\n";
                    cout<<"\t\t\tFIFTH SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"3rd Feburary 2025\tMonday\t\t\t\t\tCost Accounting\n";
                    cout<<"6th Feburary 2025\tThrusday\t\t\t\tStrategic Management\n";
                    cout<<"10th Feburary 2025\tMonday\t\t\t\t\tInternational Business\n";
                    cout<<"13th Feburary 2025\tThrusday\t\t\t\tElective Courses: Advertising, Principles of Marketing, Computer Application in Business\n";
                    cout<<"\t\t\tSIXTH SEMESTER EXAM CALANDER\n";
                    cout<<"DATE AND DAY\t\t\t\t\t\t\t\t\tSUBJECT\n";
                    cout<<"4th June 2025\t\tWednesday\t\t\t\tPrinciples of Auditing\n";
                    cout<<"9th June 2025\t\tMonday\t\t\t\t\tBusiness Communication\n";
                    cout<<"13th June 2025\t\tFriday\t\t\t\t\tManagement & Information Business\n";
                    cout<<"17th June 2025\t\tTuesday\t\t\t\t\tFundamentals of Financial Management\n";
                }
            }
            void college::result()
            {
                cout<<"\t\t\t\t\tSCORE CARD\n";
                cout<<"Press\n 1.BSc CS Result\n 2.B.Com Result\n";
                cin>>choice3;
                if(choice3==1)
                {
                    cout<<"\t\t\t\t\tBSc RESULT\n";
                    cout<<"Enter Student Name\n";
                    cin>>name;
                    //admission number=college code+course code
                    cout<<"Enter Admission Number\n";
                    cin>>admission;
                    cout<<"ENTER MARKS FOR SEMESTER 1 SUBJECTS";
                    cout<<"Enter Marks of Introduction to Digital Electronics\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of Basics of Computer Science\n";
                    cin>>marks2;
                    cout<<"Enter Marks Of Environmental Sciences\n";
                    cin>>marks3;
                    cout<<"4.Foundation course in Mathematics\n";
                    cin>>marks4;
                    total_marks1=marks1+marks2+marks3+marks4;
                    percentage=total_marks1/400*100;
                    cout<<"Percentage In Semester 1="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 2 SUBJECTS:\n";
                    cout<<"Enter marks of Front Office Management\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of Discrete Mathematics\n";
                    cin>>marks2;
                    cout<<"Enter Marks Of Computer Organization\n";
                    cin>>marks3;
                    cout<<"Enter Marks Of Fundamental of Open Source Software-LINUX\n";
                    cin>>marks4;
                    total_marks2=marks1+marks2+marks3+marks4;
                    percentage=total_marks2/400*100;
                    cout<<"Percentage In Semester 2="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 3 SUBJECTS:\n";
                    cout<<"Enter Marks of Object-Oriented Programming using C++\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of Functional English-I\n";
                    cin>>marks2;
                    cout<<"Enter Marks Of Technical Writing\n";
                    cin>>marks3;
                    cout<<"Enter Marks of Analytical Skill Development-I\n";
                    cin>>marks4;
                    total_marks3=marks1+marks2+marks3+marks4;
                    percentage=total_marks3/400*100;
                    cout<<"Percentage In Semester 3="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 4 SUBJECTS:\n";
                    cout<<"Enter Marks of Database Management Systems\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of Value and Ethics\n";
                    cin>>marks2;
                    cout<<"Enter Marks Of System Analysis and design\n";
                    cin>>marks3;
                    cout<<"Enter Marks Of Analytical Skill Development-II\n";
                    cin>>marks4;
                    total_marks4=marks1+marks2+marks3+marks4;
                    percentage=total_marks4/400*100;
                    cout<<"Percentage In Semester 4="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 5 SUBJECTS:\n";
                    cout<<"Enter Marks Of Operating Systems concepts\n";
                    cin>>marks1;
                    cout<<"Enter Marks of  Introduction to Data Structures\n";
                    cin>>marks2;
                    cout<<"Enter Marks of System Software\n";
                    cin>>marks3;
                    cout<<"Enter Marks of Python programming\n";
                    cin>>marks4;
                    total_marks5=marks1+marks2+marks3+marks4;
                    percentage=total_marks5/400*100;
                    cout<<"Percentage In Semester 5="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 6 SUBJECTS:\n";
                    cout<<"Enter Marks of Introduction to Computer Network\n";
                    cin>>marks1;
                    cout<<"Enter Marks of Numerical Analysis\n";
                    cin>>marks2;
                    cout<<"Enter Marks of System Programming\n";
                    cin>>marks3;
                    cout<<"Enter Marks of Introduction to Web Technology\n";
                    cin>>marks4;
                    total_marks6=marks1+marks2+marks3+marks4;
                    percentage=total_marks6/400*100;
                    cout<<"Percentage In Semester 6="<<percentage<<endl;
                }
                if(choice3==2)
                {
                    cout<<"\t\t\t\t\tBCom RESULT\n";
                    cout<<"Enter Student Name\n";
                    cin>>name;
                    //admission number=college code+course code
                    cout<<"Enter Admission Number\n";
                    cin>>admission;
                    cout<<"ENTER MARKS FOR SEMESTER 1 SUBJECTS:\n";
                    cout<<"Enter Marks of Financial Accounting\n"; 
                    cin>>marks1;
                    cout<<"Enter Mrks of Business Computing\n";
                    cin>>marks2;
                    cout<<"Enter Mrks of Business Organization & Management\n";
                    cin>>marks3;
                    cout<<"Enter Marks of Quantitative Methods\n";
                    cin>>marks4;
                    total_marks1=marks1+marks2+marks3+marks4;
                    percentage=total_marks1/400*100;
                    cout<<"Percentage In Semester 1="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 2 SUBJECTS:\n";
                    cout<<"Enter Marks of Environmental Studies\n";
                    cin>>marks1;
                    cout<<"Enter Marks OfBusiness Laws\n";
                    cin>>marks2;
                    cout<<"Enter Marks of Corporate Communication\n";
                    cin>>marks3;
                    cout<<"Enter Marks of Financial System\n";
                    cin>>marks4;
                    total_marks2=marks1+marks2+marks3+marks4;
                    percentage=total_marks2/400*100;
                    cout<<"Percentage In Semester 1="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 3 SUBJECTS:\n";
                    cout<<"Enter Marks of Income Tax Laws\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of Advanced Economics\n";
                    cin>>marks2;
                    cout<<"Enter Marks Of Elements of Cost Accounting\n";
                    cin>>marks3;
                    cout<<"Enter Marks oF Entrepreneurship\n";
                    cin>>marks4;
                    total_marks3=marks1+marks2+marks3+marks4;
                    percentage=total_marks3/400*100;
                    cout<<"Percentage In Semester 3="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 4 SUBJECTS:\n";
                    cout<<"Enter Marks Of Indirect Laws\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of Corporate Accounting \n";
                    cin>>marks2;
                    cout<<"Enter Marks Of Stock & Commodity Market\n";
                    cin>>marks3;
                    cout<<"Enter Marks Of (Advanced) Operation Research\n";
                    cin>>marks4;
                    total_marks4=marks1+marks2+marks3+marks4;
                    percentage=total_marks4/400*100;
                    cout<<"Percentage In Semester 4="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 5 SUBJECTS:\n";
                    cout<<"Enter Marks of Cost Accounting\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of  Management\n";
                    cin>>marks2;
                    cout<<"Enter Marks Of International Business\n";
                    cin>>marks3;
                    cout<<"Enter Marks Of Elective Courses: Advertising, Principles of Marketing, Computer Application in Business\n";
                    cin>>marks4;
                    total_marks5=marks1+marks2+marks3+marks4;
                    percentage=total_marks5/400*100;
                    cout<<"Percentage In Semester 5="<<percentage<<endl;
                    cout<<"ENTER MARKS FOR SEMESTER 6 SUBJECTS:\n";
                    cout<<"Enter Marks Of Principles of Auditing\n";
                    cin>>marks1;
                    cout<<"Enter Marks Of Business Communication\n";
                    cin>>marks2;
                    cout<<"Enter Marks of Management & Information Business\n";
                    cin>>marks3;
                    cout<<"Enter Marks Of Fundamentals of Financial Management\n";
                    cin>>marks4;
                    total_marks6=marks1+marks2+marks3+marks4;
                    percentage=total_marks6/400*100;
                    cout<<"Percentage In Semester 6="<<percentage<<endl;
                }
            }
            void college::information()
            {
                cout<<"WHOSE INFORMATION YOU WANT\n 1.Student\n 2.Professor\n";
                cin>>choice4;
                if(choice4==1)
                {
                    cout<<"STUDENTS DETAILS\n";
                    cout<<"FEES FOR BSc COMPUTER SCIENCE=1.50LAKH PER YEAR\n";
                    cout<<"FEES FOR B.COM=2LAKH PER YEAR\n";
                    cout<<"Student Name\t\t\tCourse\n";
                    cout<<"1.Ava\t\t\t\t\tB.com\n";
                    cout<<"2.Amelia\t\t\t\tB.com\n";
                    cout<<"3.Abigail\t\t\t\tBSc CS\n";
                    cout<<"4.Alexander\t\t\t\tB.Com\n";
                    cout<<"5.Aiden\t\t\t\t\tB.com\n";
                    cout<<"6.Anothny\t\t\t\tBSc CS\n";
                    cout<<"7.Emma\t\t\t\t\tBSc CS\n";
                    cout<<"8.Evelyn\t\t\t\tB.Com\n";
                    cout<<"9.Emily\t\t\t\t\tB.Com\n";
                    cout<<"10.Elijah\t\t\t\tB.com\n";
                    cout<<"11.Ethan\t\t\t\tB.com\n";
                    cout<<"12.Ezra\t\t\t\t\tB.com\n";
                    cout<<"13.Luna\t\t\t\t\tB.com\n";
                    cout<<"14.Layla \t\t\t\tBSc CS\n";
                    cout<<"15.Lily\t\t\t\t\tBSc CS\n";
                    cout<<"16.Liam\t\t\t\t\tB.Com\n";
                    cout<<"17.Lucas\t\t\t\tBSc CS\n";
                    cout<<"18.Logan\t\t\t\tBSc CS\n";
                    cout<<"19.Olivia\t\t\t\tBSc CS\n";
                    cout<<"20.Oliver\t\t\t\tBSc CS\n";
                    cout<<"21.Owen\t\t\t\t\tB.Com\n";
                    cout<<"22.Sophia\t\t\t\tB.Com\n";
                    cout<<"23.Scarlett\t\t\t\tB.Com\n";
                    cout<<"24.Stella\t\t\t\tBSc CS\n";
                    cout<<"25.Sebastian\t\t\t\tBSc CS\n";
                    cout<<"26.Portia\t\t\t\tBSc CS\n";
                    cout<<"27.Basanio\t\t\t\tBSc CS\n";
                    cout<<"28.Samuel\t\t\t\tB.Com\n";
                    cout<<"29.Santiago\t\t\t\tBSc CS\n";
                    cout<<"30.Kunal\t\t\t\tB.Com\n";
                    cout<<"31.Alok\t\t\t\t\tB.Com\n";
                    cout<<"32.Anmol\t\t\t\tBSc CS\n";
                    cout<<"33.Ayush\t\t\t\tBSc CS\n";
                    cout<<"34.Badal\t\t\t\tBSc CS\n";
                    cout<<"35.Abhishek\t\t\t\tBSC CS\n";
                    cout<<"36.Rajkiran\t\t\t\tBSc CS\n";
                    cout<<"37.Diksha\t\t\t\tBSc CS\n";
                    cout<<"38.Disha\t\t\t\tBSc CS\n";
                    cout<<"39.Khushi\t\t\t\tB.Com\n";
                    cout<<"40.Urishma\t\t\t\tB.Com\n";
                    cout<<"41.Kartik\t\t\t\tB.Com\n";
                    cout<<"42.Krishna\t\t\t\tBSc CS\n";
                    cout<<"43.Mayank\t\t\t\tB.Com\n";
                    cout<<"44.Sagar\t\t\t\tB.Com\n";
                    cout<<"45.Shikha\t\t\t\tB.Com\n";
                    cout<<"46.Karan\t\t\t\tBSC CS\n";
                    cout<<"47.Vanshika\t\t\t\tB.Com\n";
                    cout<<"48.Anshul\t\t\t\tBSc CS\n";
                    cout<<"49.Aniket\t\t\t\tBSc CS\n";
                    cout<<"50.vaibhav\t\t\t\tB.Com\n";
                }
                if(choice4==2)
                {
                    cout<<"PROFESSOR DETAILS\n";
                    cout<<"FEES GIVEN TO PROFESSOR=1.50LAKH PER MONTH\n";
                    cout<<"1.Prof. Anil Kumar\t\t\t\tCommerce\n";
                    cout<<"2.Prof.Suman Bhakri\t\t\t\tMarketing\n";
                    cout<<"3.Prof. Aruna Jha\t\t\t\tBusiness\n";
                    cout<<"4.Prof. A.J.C. Bose\t\t\t\tMaths\n";
                    cout<<"5.Prof. Ritu Ranjan\t\t\t\tEnglish\n";
                    cout<<"6.Prof. Ravi Sharma\t\t\t\tScience\n";
                    cout<<"7.Prof. (Dr.) Sally Lukose\t\t\tComputer\n";
                    cout<<"8.Prof. (Dr.) Namita Rajput\t\t\tPsychology\n";
                    cout<<"9.Prof. S. P. Aggarwal\t\t\t\tPhilosphy\n";
                    cout<<"10.Prof. K. Latha\t\t\t\tAccounts\n";
                }
            }
            void college:: login()
            {
                cout<<"Enter Details To Login\n";
                cout<<"Enter Your email\n";
                cin>>email;
                cout<<"Enter Password\n";
                cin>>password;
                cout<<"WELCOME TO THE COLLEGE PAGE\n";
            }
            void college:: exit()
            {
                cout<<"\t\t\t\t\t\tEXIT\n";
            }
int main(){
    int ch;
    char x;
    college obj;
    system("cls");
    do{
    cout<<"1.registration\n";
    cout<<"2.eligibility\n";
    cout<<"3.location\n";
    cout<<"4.canteen\n";
    cout<<"5.exam_calander\n";
    cout<<"6.result\n";
    cout<<"7.information\n";
    cout<<"8.login\n";
    cout<<"9.exit\n";
    cout<<"\t\t\t\tWELCOME TO THE COLLEGE OF B.COM AND BSc COMPUTER SCIENCE\t\t\t\t\n";
    cout<<"Select What You Want To Preform From Above\n";
    cin>>ch;
    switch(ch){
        case 1: "1.registration";
        obj.registration();
        break;
        case 2: "2.eligibility";
        obj.eligibility();
        break;
        case 3: "3.location";
        obj.location();
        break;
        case 4:"4.canteen";
        obj.canteen();
        break;
        case 5:"5.exam_calander";
        obj.exam_calander();
        break;
        case 6: "6.result";
        obj.result();
        break;
        case 7: "7.information";
        obj.information();
        break;
        case 8: "8.login";
        obj.login();
        break;
        case 9: "9.exit";
        obj.exit();
        break;
        default:
            cout<<"invalid input\n";
        }
    cout<<"do you want to perform more Yes or No\n";
    cout<<"if you want to exit press N\n";
    cout<<"if you want to continue press Y\n";
    cin>>x;
    if(x=='n'||x=='N'){
        cout<<"exit";
            }
    }
    while(x=='y'||x=='Y');
    return 0;
}
