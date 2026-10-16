#include<iostream>
#include<string>

using namespace std;
void train_reservation_system(){
    //  const int total_seats=100;
string trainname[]={"GREEN LINE","EXPRESS LINE","ORANGE LINE"};
int total_passenger;
cout<<"ENTER TOTAL PASSENGER"<<endl;
cin>>total_passenger;
string passenger_name[100];
string passenger_age[100];
string passenger_CNIC[100];
string passenger_gender[100];
cout<<"ENTER 1 TO SELECT TRAIN"<<endl;
cout<<"ENTER 2 FOR BOOKING"<<endl;
cout<<"ENTER 3 FOR EXIT"<<endl;
     while(true){  

    cout<<"ENTER 1 TO SELECT TRAIN ,ENTER 2 FOR BOOKING ,AND ENTER 3 FOR EXIT"<<endl;
    int choice;
    cin>>choice;
    if (choice == 1)
    {
        cout<<"SELECT TRAIN NUMBER :"<<endl;
        cout<<"ENTER 1 TO SELECT GREEN LINE"<<endl;
        cout<<"ENTER 2 TO SELECT EXPRESS LINE"<<endl;
        cout<<"ENTER 3 TO SELECT ORANGE LINE"<<endl;
         cin>>choice;

         if (choice==1)
         {
            cout<<" GREEN LINE TRAIN "<<endl;
         }else if (choice==2)
         {
            cout<<" EXPRESS LINE TRAIN "<<endl;  
         }else if (choice==3)
         {
            cout<<" ORANGE LINE TRAIN "<<endl;
         }else{
            cout<<"NOT AVAILABLE"<<endl;
         }
            
    }        
    else if (choice==2)
    {
        for (int i = 0; i < total_passenger; i++)
        {
            
        cout<<"---------BOOKING STEPS------------"<<endl;
        cout<<"ENTER YOUR NAME :"<<passenger_name[i]<<endl;
        cin>>passenger_name[i];
        cout<<"ENTER YOUR CNIC :"<<passenger_CNIC[i]<<endl;
        cin>>passenger_CNIC[i];
        cout<<"ENTER YOUR AGE :"<<passenger_age[i]<<endl;
        cin>>passenger_age[i];
        cout<<"ENTER YOUR GENDER :"<<passenger_gender[i]<<endl;
        cin>>passenger_gender[i];
        cout<<"-----------------------"<<endl;
    
        }
        
       
    }else if (choice==3)
    {
        cout<<"------EXIT------"<<endl;
        break;
    }
    
    
}




}

int main()
{
train_reservation_system();
return 0;
}
