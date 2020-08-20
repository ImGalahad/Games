#include<iostream>
#include<string>
#include<ctime>
using namespace std;


//unreal uses upper camel case[ie:Playgame]
void introduction()
{
    cout<<endl<<"Welcome here you are playing as curator to help the thief who is here to  steal some important data from a multinational company\n help the thief to break into the heavily guarded security by using your mathematical hacking skills "<<endl;
    cout<<"you are helping the thief who is  trying to slip into the the facility under the cover of the dark\n Your job as a curator is to help the thief to input the correct into the security system and help him to steal the data"<<endl;
    cout<<"good luck Curator\nover and out"<<endl;
   

    
    cout << R"(
              ,;;;,
             ;;;;;;;
          .-'`\, '/_
        .'   \ ("`(_)
       / `-,.'\ \_/
       \  \/\  `--`
        \  \ \
         / /| |
        /_/ |_|
  jgs  ( _\ ( _\  #:##        #:##        #:##         #:##
                        #:##        #:##        #:##        
    )" << '\n';

    cout<<"\n\nalright curator your job is to help me break the security here  comes security level 1"<<endl;
    
}

bool Playgame(int difficulty)
{
   cout<<"\n\nalrigth onto the next one"<<endl;
    
    cout<<"here comes the next security level "<<difficulty<<endl;
   //cout<<"enter the correct password to go in\n\n";
   cout<<R"(
.-"""------.----.
|          U    |
|               |
| ====o======== |
| ============= |
|               |
|_______________|
| ________GF337 |
||  enter the  ||
||  correct    ||
||__passowrd___||
|__.---"""---.__|
|---------------|
|[Yes][(|)][ No]|
| ___  ___  ___ |
|[<-'][CLR][.->]|
| ___  ___  ___ |
|[1__][2__][3__]|
| ___  ___  ___ |
|[4__][5__][6__]|
| ___  ___  ___ |
|[7__][8__][9__]|
| ___  ___  ___ |
|[*__][0__][#__]|
`--------------'
{__|""|_______'-
`---------------'
   )"<<endl;
    
    //storing hardcodded values of the player
   const int codea=rand()%difficulty+difficulty;
   const int codeb=rand()%difficulty+difficulty;
   const int codec=rand()%difficulty+difficulty;

   const int codeSum=codea+codeb+codec;
   const int codeProduct=codea*codeb*codec;

   cout<<"there are three number int the code\n";
   cout<<"the code add upto="<<codeSum<<"\n";
   cout<<"the product gives="<<codeProduct<<"\n";

    //store player guess
   int guessA,guessB,guessC;
   
   int playerGuess;

   
   cout<<"enter your guess"<<"\n";
   cin>>guessA;
   cin>>guessB;
   cin>>guessC;

    int GuessSum=guessA+guessB+guessC;
    int GuessProduct=guessA*guessB*guessC;



//check if player guess is correct or not


   if(codeSum==GuessSum&&codeProduct==GuessProduct)
   {
        cout<<""<<endl;
        cout<<"great job curator \n";
        return true;
    }
    else
    {
        cout<<"the hell is wrong with, are you any good with this work\n";
        return false;
    }

}
int main()
{
    introduction();

    srand(time(NULL));//creates new random sequence based on time of the day

    int levelDifficulty=1;
    const int MaxLevel=2;

    while(levelDifficulty<=MaxLevel) //loops until all the level is completed 
    {
        cout<<rand()%2<<"\n";
        bool bLevelComplete=Playgame(levelDifficulty);
        
        cin.clear();//clear error 
        cin.ignore();//discards the buffer

        if (bLevelComplete)
        {
            /* increase level difficulty */
            ++levelDifficulty;

        }
    }
   
    
    cout<<"Great work, the prize is ours"<<endl;

    
   return 0;
} 
