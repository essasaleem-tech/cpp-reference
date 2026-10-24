#include<iostream>
using namespace std;
void voting_system(){
    int IMRAN_KHAN=0;
    int NAWAZ_SHAREEF=0;

    int total_voters=3;
    int age;
    int choice;

    cout<<"====WELCOME TO VOTING SYSTEM===="<<endl;
    cout<<"CANDIDATES: \n 1)IMRAN KHAN \n 2)NAWAZ SHAREEF"<<endl;

    for (int i = 0; i < total_voters; i++)
    {
        cout<<"--VOTERS--"<<i<<"---"<<endl;
         cout<<"AGE: "<<endl;
         cin>>age; 
        
         if (age<18)
         {
            cout<<"YOU ARE NOT ELIGIBLE TO VOTE: "<<endl;
            continue;
         }
         cout<<"PRESS (1) TO VOTE IMRAN KHAN: "<<endl;
         cout<<"PRESS (2) TO VOTE NAWAZ SHAREEF: "<<endl;
         cin>>choice;
         if (choice==1)
         {
            cout<<"-----IMRAN KHAN----- "<<endl;
            IMRAN_KHAN++;
         }else if (choice==2)
         {
            cout<<"-----NAWAZ SHAREEF-----"<<endl;
            NAWAZ_SHAREEF++;
         }else{
            cout<<"INVALID NUMBER"<<endl;
         }
    
    }
    cout<<"======================="<<endl;
    cout<<"-----FINAL RESULT-----"<<endl;
    cout<<"======================="<<endl;
    cout<<"IMRAN KHAN VOTES: "<<IMRAN_KHAN<<endl;
    cout<<"NAWAZ SHAREEF VOTES: "<<NAWAZ_SHAREEF<<endl;

    if (IMRAN_KHAN>NAWAZ_SHAREEF)
    {
       cout<<"IMRAN KHAN IS WINNER "<<endl;
    }else if (NAWAZ_SHAREEF>IMRAN_KHAN)
    {
        cout<<"NAWAZ SHAREEF IS WINNER "<<endl;
    }else{
        cout<<"----MATCH IS TIE----"<<endl;
    }
    
    
}

int main()
{

    voting_system();
return 0;
}
