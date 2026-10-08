#include<iostream>
#include<string>
using namespace std;

int main()
{
cout<<"*************************************"<<endl;
cout<<"========SPICE N ICE RESTURANT========"<<endl;
cout<<"*************************************"<<endl;
int choice;
int jazzcash =1;
int cash=2;
double item_bill;
double total_bill=0;
int total_order;
cout<<"Total person order"<<endl;
cin>>total_order;
string fast_food_name[total_order];
string Drink_name[total_order];


{
cout<<"************ Menu******************"<<endl;
cout<<" 1) Burger .Rp=300"<<endl;
cout<<" 2) Shawarma .Rp=300"<<endl;
cout<<" 3) Coca cola .Rp=100"<<endl;
cout<<" 4) Sprite .Rp=100"<<endl;

}
for (int i = 0; i < total_order; i++)
{
    cout<<"fast food name ="<<endl;
    cin>>fast_food_name[i];
    
if(fast_food_name[i]=="burger"||fast_food_name[i]=="Burger"||fast_food_name[i] =="shawarma"||fast_food_name[i]=="Shawarma")
{
    total_bill=total_bill+300;
}

    cout<<"Drink name ="<<endl;
    cin>>Drink_name[i];
    if (Drink_name[i]=="sprite"||Drink_name[i]=="Sprite"||Drink_name[i]=="Coca cola"||Drink_name[i]=="coca cola")
{
    total_bill=total_bill+100;
} 

}

cout<<"pay bill through"<<endl;
cout<<"Enter (1) for jazzcash"<<endl;
cout<<"Enter (2) for cash"<<endl;
cin>>choice;
if(choice==jazzcash)
{
    cout<<"Give bill through jazz cash"<<endl;
    cout<<"Total bill= "<<total_bill<<endl;
}else if (choice==cash)
{
   cout<<"Give bill through cash"<<endl;
      cout<<"Total bill= "<<total_bill<<endl;
   
 }
cout<<" THANKS FOR COMING"<<endl;
cout<<"HAVE A GOOD DAY"<<endl;



return 0;
}