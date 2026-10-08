#include<iostream>

using namespace std;
int main()
{
double num1,num2;
char op;
char usertype;

cout<<"<----===SIMPLE CALCULATOR===---->"<<endl;
do
{
    cout<<"Select operator(+ ,-, *, /) :"<<endl;
    cin>>op;

    cout<<"Enter num1 : "<<endl;
    cin>>num1;

    cout<<"Enter num2 : "<<endl;
    cin>>num2;
switch (op)
{
case '+':

    cout<<"Sum of two number:  "<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    break;

case '-':
    cout<<"Subtraction of two number:  "<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    break;     

case '*':
    cout<<"Multiplication of two number:  "<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    break;     
case '/':
if (num2 != 0.0)
{
   
    cout<<"Division of two number:  "<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
}
else{
    cout<<"Error! Enter num2 greater than 0 "<<endl;
}
    break;         
    default:
    cout<<"You enter wrong operator"<<endl;
    break;
}
 
 cout<<"Type (C)or(c) for continue: "<<endl;
 cin>>usertype;

}while (usertype=='C'||usertype=='c');

cout<<"<---===Exit====--->"<<endl;



return 0;
}
