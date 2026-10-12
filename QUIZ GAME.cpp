 #include<iostream>
 using namespace std;
 int main()
 {
 const int TOTAL_QUESTIONS=3;

 string questions[TOTAL_QUESTIONS]={"1. WHO IS THE RICHEST PERSON IN THE WORLD CURRENTLY(2026)?",
    "2. WHICH COMPANY CREATED THE WINDOWS OPERATING SYSTEM ? ",
    "3. WHAT WAS THE FIRST COMPUTER BUG EVER FOUND IN A SYSTEM?",
 };


    string options[TOTAL_QUESTIONS][4]={  
    {"A) AMBANI",  "B) BILL GATES",  "C) ELON MUSK",  "D) JEFF BEZOS"},
    {"A) APPLE",  "B) MICROSOFT",  "C) GOOGLE",  "D) IBM"},
    {"A) A SOFTWARE ERROR",  "B) A REAL LIVE MOTH (INSECT)",  "C) A SPILLED COFFEE",  "D) A BROKEN WIRE"},
    
};

char CorrectAnswer[TOTAL_QUESTIONS]={'C','B','B'};
char useranswer[TOTAL_QUESTIONS];
int score = 0;
while (true)
{
    cout<<"-----------------------"<<endl;
    cout<<"     QUIZ GAME         "<<endl;
    cout<<"-----------------------"<<endl;
    
    
    
        cout<<"ENTER 1 TO PLAY QUIZ GAME "<<endl;
        cout<<"ENTER 2 TO CHECK QUIZ RESULT "<<endl;
        cout<<"ENTER 3 TO EXIT THE GAME "<<endl;

        int choice;
        cout<<"ENTER YOUR CHOICE: "<<endl;
        cin>>choice;

        if (choice==1)
        {
            cout<<" --WELCOME TO QUIZ GAME-- "<<endl;  
            for (int i = 0; i < TOTAL_QUESTIONS; i++)
            {
                cout<<questions[i]<<endl;
            
                for (int j = 0; j < 4; j++)
                {
                    cout<<options[i][j]<<"  "<<endl;
                }
                
            cout<<"PLZ ENTER ONLY CAPITAL ALPHABETS"<<endl;
            cout<<"YOUR ANSWER :"<<endl;
            cin>>useranswer[i];

            if (useranswer[i]==CorrectAnswer[i])
            {
                score++;
            }
            

            }
            
        }else if (choice==2)
        {
            cout<<"---------------------------"<<endl;
            cout<<"       QUIZ RESULT       "<<endl;
            cout<<"---------------------------"<<endl;
            cout<<"Result = "<<score<<"/"<<TOTAL_QUESTIONS<<endl;

            if (score==TOTAL_QUESTIONS)
            {
                cout<<"EXCELLENT !YOUR ALL ANSWERS ARE CORECT "<<endl;
            }else if (score>=3)
            {
                cout<<"WELL PLAYED "<<endl;
            }else{
                cout<<"ALAS! TRY AGAIN"<<endl;
            }
            
            
        }else if (choice==3)
        {
            cout<<"EXITING FROM THE GAME"<<endl;
            return 0;
        }
        
        
        
    
    
}

 return 0;
}
