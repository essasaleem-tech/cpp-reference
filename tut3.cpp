#include<iostream>
#include<string>
using namespace std;
int main()
{
int student_roll_no[6]={1,2,3,4,5,6};
string ics_section[6]={"ALI","ESSA","MUSA","HUZAIFA","IFTAKHAR"};
string FA_IT_section[6]={"AZAM","BABAR","SHOAIB","SALMAN","MANI"};
string icom_section[6]={"REHAN","BILAL","AMIR","AMJAD","SOHAIL"};

string ics_status[6]={"FAIL","PASS","FAIL","PASS","PASS"};
string FA_IT_status[6]={"FAIL","FAIL","PASS","FAIL","PASS"};
string icom_status[6]={"PASS","FAIL","PASS","PASS","PASS"};
int chose_class;
cout<<"_______________CLG MANAGEMENT SYSTEM________________"<<endl;
do
{
    cout<<"1. view ics section"<<endl;
cout<<"2. view FA_IT section"<<endl;
cout<<"3. view icom section"<<endl;
cout<<"Enter your choice(1-3)"<<endl;
cout<<"enter 4 to exit program "<<endl;
cin>>chose_class;
if(chose_class==1){
    cout<<"_______________ics section student________________"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<i+1<<"."<<ics_section[i]<<endl;
        cout<<"Roll no ="<<student_roll_no[i]<<endl;
        cout<<"status :-"<<ics_status[i]<<endl;
        if (ics_status[i]=="FAIL")
        {
            cout<<endl;
          cout<<"(____Fine RP=500_____)"<<endl;
        }
        
    }
}else if (chose_class==2)
{

    cout<<"_______________FA_IT section student________________"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<i+1<<"."<<FA_IT_section[i]<<endl;
        cout<<"Roll no ="<<student_roll_no[i]<<endl;
         cout<<"status :-"<<FA_IT_status[i]<<endl;
           if (FA_IT_status[i]=="FAIL")
        {
            cout<<endl;
          cout<<"(_____Fine RP=500____)"<<endl;
        }
    }
}else if (chose_class==3)
{
    
    cout<<"_______________icom section student________________"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<i+1<<"."<<icom_section[i]<<endl;
        cout<<"Roll no ="<<student_roll_no[i]<<endl;
         cout<<"status :-"<<icom_status[i]<<endl;
          if (icom_status[i]=="FAIL")
        {
            cout<<endl;
          cout<<"(____Fine RP=500_____)"<<endl;
        }
    }
}else if (chose_class==4)
{
    cout<<"Exiting program!Goodbye"<<endl;
}

else{
    cout<<"Enter no. 1,2,3 to chose class"<<endl;
}
} while (chose_class!=4);




return 0;
}   