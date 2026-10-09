#include<iostream>
#include<string>

using namespace std;
int main()
{
    cout<<"============================"<<endl;
    cout<<" HOSPITAL MANAGEMENT SYSTEM"<<endl;
    cout<<"============================"<<endl;
int total_patient;
cout<<"Enter total patient :"<<endl;
cin>>total_patient;
//int registration_number[total_patient];
string name[total_patient];
double phone_number[total_patient];
double CNIC[total_patient];
int disease[total_patient];
string doctor_name[3]={"DR.ASIM","DR.SALEEM","DR.MUDABIR"};
string doctor_spec[3]={"Heart specialist","Eyes specialist","Skin specialist"};
string doctor_timings[3]={"9:00AM - 10:00AM ","12:00AM - 2:00PM","4:00PM - 6:00PM"};

//string disease[3]={"Heart","Eyes","Skin"};
for (int i = 0; i < total_patient; i++)
{
    cout<<"    ----------REGISTRATION STEP GIVEN BELOW-----------     "<<endl;
    cout<<"STEP :1 --> ENTER NAME :"<<endl;
    cin>>name[i];

    cout<<"STEP :2 --> ENTER YOUR PHONE NUMBER :"<<endl;
    cin>>phone_number[i];

    cout<<"STEP :3 --> ENTER YOUR CNIC :"<<endl;
    cin>>CNIC[i];

    cout<<"   PATIENT DISEASE   "<<endl;
    cout<<"Enter 1 forHeart patient ,2 for Eyes patient ,3 for Skin patient "<<endl;

    cin>>disease[i];
    if (disease[i]==1)
    {
        cout<<" ("<<doctor_name[0]<<") will treat you because it is a "<<doctor_spec[0]<<endl;
        cout<<"Timing"<<doctor_timings[0]<<endl;
    }else if (disease[i]==2)
    {
        cout<<" ("<<doctor_name[1]<<") will treat you because it is a "<<doctor_spec[1]<<endl;
        cout<<"Timing"<<doctor_timings[1]<<endl;
    }else if (disease[i]==3)
    {
        cout<<" ("<<doctor_name[2]<<") will treat you because it is a "<<doctor_spec[2]<<endl;
        cout<<"Timing"<<doctor_timings[2]<<endl;
    }else{
        cout<<"Sorry, we donot have a doctor or treatment available for this disease."<<endl;
    }
    
    
    
}



return 0;
} 