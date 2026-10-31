#include<iostream>
using namespace std;

void house_purchase(){
    cout<<"====================="<<endl;
    cout<<"HOUSE PURCHASE SYSTEM"<<endl;
    cout<<"====================="<<endl;

int total_person;
cout<<"ENTER TOTAL PERSON"<<endl;
cin>>total_person;

string name[100];
string father_name[100];
string cnic[100];
string contact_number[100];
double houseprice[3]{50000,75000,85000};
string house_marla[3]={"3marla","4marla","5marla"};
string society_name[3]={"Bahria","Centralpark","Parkview"};

int budget;
int total_bill=0;
for(int i=0;i<total_person;i++){
cout<<"--------------------------"<<endl;
cout<<"Processing for persson"<<(i+1)<<endl;
cout<<"--------------------------"<<endl;
 
while(true){
    cout<<"WELCOME TO HOUSING SYSTEM"<<endl;
    cout<<"ENTER 1 TO FILL YOUR DATA"<<endl;
    cout<<"ENTER 2 TO CHECK YOUR BUDGET AND SELECT HOUSE "<<endl;
    cout<<"ENTER 3 FOR EXIT"<<endl;
    int choice;
    cout<<"\nENTER YOUR CHOICE"<<endl;
    cin>>choice;
    if (choice==1)
    {
        cout<<"--------------"<<endl;
        cout<<"NAME: "<<endl;
        cout<<"--------------"<<endl;
        cin>>name[i];
        cout<<"--------------"<<endl;
        cout<<"FATHER NAME: "<<endl;
        cout<<"--------------"<<endl;
        cin>>father_name[i];
        cout<<"--------------"<<endl;
        cout<<"CNIC: "<<endl;
        cout<<"--------------"<<endl;
        cin>>cnic[i];
        cout<<"--------------"<<endl;
        cout<<"CONTACT NUMBER: "<<endl;
        cout<<"--------------"<<endl;
        cin>>contact_number[i];
        
    }else if (choice==2)
    {
         cout<<"------------------"<<endl;
        cout<<"ENTER YOUR BUDGET:"<<endl;
        cout<<"------------------"<<endl;
        cin>>budget;
     if (budget>=50000)
    {
        cout<<"---YOU ARE ELIGIBLE TO BUY A HOUSE---"<<endl;
        cout<<"ENTER SOCIETY NAME :\n "<<endl;
        cout<<"Bahria"<<endl;
        cout<<"Centralpark"<<endl;
        cout<<"Parkview"<<endl;
        string user_society;
        cin>>user_society;
       
        if (user_society=="Centralpark")
        {
            cout<<"MARLA: "<<house_marla[0]<<endl;
            cout<<"HOUSE PRICE: "<<houseprice[0]<<endl;
            //cout<<"4_MARLA HOUSE AVALIABLE IN ONLY IN 75,000"<<endl;
            total_bill=total_bill+75000;
        }else  if (user_society=="Bahria")
        {
            cout<<"MARLA: "<<house_marla[1]<<endl;
            cout<<"HOUSE PRICE: "<<houseprice[1]<<endl;
            //cout<<"3_MARLA HOUSE AVALIABLE IN ONLY IN 50,000"<<endl;
            total_bill=total_bill+50000;
        }else if (user_society=="Parkview")
        {
            cout<<"MARLA: "<<house_marla[2]<<endl;
            cout<<"HOUSE PRICE: "<<houseprice[2]<<endl;
            //cout<<"5_MARLA HOUSE AVALIABLE IN ONLY IN 75,000"<<endl;
            total_bill=total_bill+75000;
            
        }
    }else
    {
        cout<<"SORRY! 'YOUR BUDGET IS VERY LOW'"<<endl;
        continue;
    }
  
}else if (choice==3)
{
   cout<<"EXITING FROM THE HOUSE PURCHAISING SYSTEM"<<endl;
   break;
}else{
    cout<<"-----------------"<<endl;
    cout<<"ENTER VALID INFORMATION"<<endl;
    cout<<"-----------------"<<endl;
}



} 
cout<<"\n====================================="<<endl;
cout<<"TOTAL BILL = ( "<<total_bill<<" )"<<endl;
cout<<"======================================="<<endl;
}
}
    
int main()
{

house_purchase();
return 0;
} 
