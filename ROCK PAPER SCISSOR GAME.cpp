#include<iostream>
using namespace std;
int main()
{
srand(time(0));
int userchoice=0;
int computerchoice=(rand()%3)+1;
cout<<"============================="<<endl;
cout<<" ROCK,PAPER,SCISSOR (GAME)"<<endl;
cout<<"        CHOICES"<<endl;
cout<<"1) ROCK"<<endl;
cout<<"2) PAPER"<<endl;
cout<<"3) SCISSOR"<<endl;
cout<<"Enter number btw (1-3)"<<endl;
cin>>userchoice;

if (userchoice<1||userchoice>3)
{
 cout<<"Wrong choice! Enter valid number btw (1-3)only"<<endl;
 return 1;
}
if (computerchoice==1)
{
    cout<<"ROCK"<<endl;
}else if (computerchoice==2)
{
    cout<<"PAPER"<<endl;
}else{
    cout<<"SCISSOR"<<endl;
}
if (userchoice==1)
{
    cout<<"ROCK"<<endl;
}else if (userchoice==2)
{
    cout<<"PAPER"<<endl;
}else{
    cout<<"SCISSOR"<<endl;
}
if (userchoice==computerchoice)
{
    cout<<"MATCH TIE"<<endl;
}else if ((userchoice==1 && computerchoice==3)||(userchoice==2 && computerchoice==1)||(userchoice==3 && computerchoice==2))
{
    cout<<"YOU WIN"<<endl;
}else{
    cout<<"COMPUTER WIN"<<endl;
}




return 0;
}
