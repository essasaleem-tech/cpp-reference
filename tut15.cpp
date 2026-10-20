#include<iostream>
using namespace std;

void CM_sports(){

    cout<<"------CM SPORTS------"<<endl;
    int total_players;
    cout<<"ENTER TOTAL PLAYERS"<<endl;
    cin>>total_players;
    string category[100];
    string Full_name[100];
    string cnic[100];
    string father_name[100];
    string gender[100];
    string phone_number[100];
    // string address[100];
    string kit_size[100];
    string sports_selection[100];
    for (int i = 0; i < 4; i++)
    {
        int choice;
        cout<<"ENTER 1 TO APPLY"<<endl;
        cout<<"ENTER 2 FOR SELECT CATEGORY AND SPORTS SELECTION"<<endl;
        cout<<"ENTER 3 FOR EXIT"<<endl;
        cout<<"ENTER YOUR CHOICE :"<<endl;
        cin>>choice;
        if (choice==1)
        {
            cout<<"--------REGISTRATION INFORMATION----------"<<endl;
            cout<<"FULL NAME :"<<endl;
            cin>>Full_name[i];
            cout<<"FATHER NAME :"<<endl;
            cin>>father_name[i];
            cout<<"CNIC :"<<endl;
            cin>>cnic[i];
            cout<<"GENDER :"<<endl;
            cin>>gender[i];
            cout<<"PHONE NUMBER :"<<endl;
            cin>>phone_number[i];
            cout<<"KIT SIZE :"<<endl;
            cin>>kit_size[i];
            
        }    
            if (choice==2)
            {
                 cout<<"SELECT CATEGORY (COLLEGE,UNIVERSITY,SCHOOL): "<<endl;
            
            cin>>category[i];

            if (category[i]=="college")
            { 
                cout<<"YOU SELECT COLLEGE"<<endl;
            }else if (category[i]=="university")
            {
               cout<<"YOU SELECT UNIVERSITY"<<endl;
            }else if (category[i]=="school")
            {
                cout<<"YOU SELECT SCHOOL"<<endl;
            }else{
                cout<<"INVALID CHOICE"<<endl;
            }
            

            cout<<"SELECT SPORT (CRICKET,FOOTBALL,HOCKEY)"<<endl;
            cin>>sports_selection[i];
            if (sports_selection[i]=="cricket")
            {
                cout<<"YOU SELECT CRICKET"<<endl;
            }else if (sports_selection[i]=="hockey")
            {
                cout<<"YOU SELECT HOCKEY"<<endl;
            }else if (sports_selection[i]=="football")
            {
                cout<<"YOU SELECT FOOTBALL"<<endl;
            }else{
                cout<<"INVALID CHOICE"<<endl;
            }
        }
       else if (choice==3)
        {
            cout<<"----EXIT----"<<endl;
            break;
        }
        
        
        
        
    }
    

    


}

int main()
{
CM_sports();
return 0;
}