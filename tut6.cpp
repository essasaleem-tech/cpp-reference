#include<iostream>
using namespace std;
int main()
{
    float MATH;
    float ENG;
    float URDU;
    float COMP;
    float PHY;
    float ISL;
    float AL_QURAN;
    float percentage;
    int total_marks=560;
    float obtained_marks;
    cout<<"========================================================"<<endl;
    cout<<"Student total percentage according to all subjects marks"<<endl;
    cout<<"========================================================"<<endl;
    cout<<"Obtained marks in ENG/100"<<endl;
    cin>>ENG;
     cout<<"Obtained marks in URDU/100"<<endl;
    cin>>URDU;
 cout<<"Obtained marks in MATG/100"<<endl;
    cin>>MATH;
 cout<<"Obtained marks in COMP/75"<<endl;
    cin>>COMP;
 cout<<"Obtained marks in PHY/85"<<endl;
    cin>>PHY;
 cout<<"Obtained marks in AL_QURAN/50"<<endl;
    cin>>AL_QURAN;
 cout<<"Obtained marks in ISL/100"<<endl;
    cin>>ISL;
    obtained_marks=ENG+URDU+MATH+COMP+PHY+AL_QURAN+ISL;
    cout<<"obtained marks in all subjects = "<<obtained_marks<<endl;
    percentage=(obtained_marks/total_marks)*100;
    cout<<"total percentage of student = "<<percentage<<endl;
    cout<<"total percentage "<<percentage<<endl;


return 0;
}