#include<iostream>
#include<string>

using namespace std;
void car_rental_system(){
    string car_name[7]={"TOYOTA","TESLA","ELANTRA","SUPRA","CIVIC","MEHRAN","KIA"};
    string car_condition[7]={"6/10","7/10","8/10","6/10","7/10","4/10","8/10"};
    int car_model[7]={2008,2010,2025,2012,2022,1998,2010};
    double fuel_average[7]={12.5,11.6,11.0,8.5,12.0,14.5,13.0};
    double car_rent_per_month[7]={12000,15000,20000,40000,25000,10000,22000};
    int total_bill=0;
    string customer_name;
    string customer_id_cardno;
    string contact_number;
    string customer_gender;
    string customer_age;
    int book_car_index=-1;

    while (true)
    {
        cout<<"-------------------------------------------"<<endl;
        cout<<"          CAR RENTAL SYSTEM                "<<endl;
        cout<<"-------------------------------------------"<<endl;
         for (int i = 0; i < 7; i++)
        { 
        cout<<"ENTER 1 to     --(Check car information)--"<<endl;
        cout<<"ENTER 2 to           --(Book car)--"<<endl;
        cout<<"ENTER 3 for            --(EXIT)--"<<endl;
       
        
            int choice;
            cout<<"ENTER YOUR CHOICE (1,2,3)"<<endl;
                cin>>choice;
                  
            if (choice==1)
            {
                cout<<"---CAR INFORMATION---"<<endl;
                for(int i = 0;i < 7;i++){ 
                cout<<"CARS NAME :"<<i+1<<")"<<car_name[i]<<endl;
                cout<<"CARS MODEL :"<<i+1<<")"<<car_model[i]<<endl;
                cout<<"CARS CONDITION :"<<i+1<<")"<<car_condition[i]<<endl;
                cout<<"CARS RENT PER MONTH :"<<i+1<<")"<<car_rent_per_month[i]<<endl;
                cout<<"CARS FUEL AVERAGE :"<<i+1<<")"<<fuel_average[i]<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"==============================="<<endl;
                }        
            }else if (choice==2)
            {
                cout<<"   --BOOKING OF CAR--   "<<endl;
                cout<<"ENTER CUSTOMER NAME :"<<endl;cin>>customer_name;
                cout<<"ENTER CUSTOMER AGE :"<<endl;cin>>customer_age;
                cout<<"ENTER CUSTOMER GENDER :"<<endl;cin>>customer_gender;
                cout<<"ENTER CUSTOMER ID CARD NUMBER :"<<endl;cin>>customer_id_cardno;
                cout<<"ENTER CUSTOMER CONTACT NUMBER :"<<endl;cin>>contact_number;

                string search_name;
                bool found = false;
                cout<<"ENTER CAR NAME :";cin>>search_name;
                for (int i = 0; i < 7; i++)
                {
                    if (search_name==car_name[i])
                    {
                        cout<<"CARS MODEL :"<<i+1<<")"<<car_model[i]<<endl;
                cout<<"CARS CONDITION :"<<i+1<<")"<<car_condition[i]<<endl;
                cout<<"CARS RENT PER MONTH :"<<i+1<<")"<<car_rent_per_month[i]<<endl;
                cout<<"CARS FUEL AVERAGE :"<<i+1<<")"<<fuel_average[i]<<endl;
                book_car_index=i;
                found=true;
                break;
                    }
                    

                }if (!found)
                {
                    cout<<"\n[ERROR] INVALID CAR NAME"<<endl;
                }
                
                
                
            }
            
            else if (choice==3)
            {
                cout<<"EXITING PROGRAM... THANK YOU"<<endl;
                break;
            }
            
        }
        
    }
    
}
int main()
{
car_rental_system();
return 0;
} 
