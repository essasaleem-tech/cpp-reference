#include<iostream>
using namespace std;
int main()
{
char letter[3]={'e','a','t'};
int guesses=5;
char playerguess;
cout<<"--------------WELCOME TO THE HANGMAN GAME-------------"<<endl;
cout<<"     PLAYER HAVE FOUR CHANCES TO GUESS THE RIGHT WORD"<<endl;
while (guesses>0)
{
 cout<<"guesses"<<endl;
 cout<<"PLAYER ENTER AN ALPHABET"<<endl;
 cin>>playerguess;
 bool select=false;
 for (int turn = 0; turn < 3; turn++)
 {
    if(letter[turn]==playerguess){
        select=true;
    }
 }
 if (select=true)
 {
    cout<<"correct letter"<<endl;
 }else{
    cout<<"wrong guess"<<endl;
    guesses--;
 }
 
 
}

return 0;
}