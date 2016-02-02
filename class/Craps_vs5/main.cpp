/* 
    File:   main.cpp
    Author: 
    Created on January 25, 2016, 10:08 AM
    Purpose:  Simple Game of Craps
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //srand and rand function
#include <ctime>   //time to set the random number seed
#include <fstream> //File I/O
#include <iomanip> //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned int LIMIT=1500;//Table single bet limit = $1500
    unsigned short wins=0,losses=0,games;
    unsigned int totRoll=0,cntRoll,maxRoll=0;
    float wallet,bet;//$'s
    char  yes;//Character to answer if winning double the bet
    ofstream out;
    //Open the file
    out.open("CardGame.dat");
    
    //Input data and validate
    cout<<"How many games of Craps would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000||games>40000){
        cout<<"How many games of Craps would you like to play"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000"<<endl;
        cin>>games;
    }
    cout<<"How much do you have to gamble$?"<<endl;
    cin>>wallet;
    cout<<"How much would you like to bet/game$?"<<endl;
    cin>>bet;
    cout<<"If you win would you like to double your bet (y/n)"<<endl;
    cin>>yes;
    //Modify the bet based upon the table limiit
    bet=bet<LIMIT?bet:LIMIT;//Ternary Operator
    
    //Throw the dice
    for(int game=1;game<=games;game++){
        cntRoll=0;
        char die1=rand()%6+1;//Number between [1,6]
        char die2=rand()%6+1;//Number between [1,6]
        char sum=die1+die2;
        cntRoll++;//every time dice are thrown increment
        if(sum==2||sum==3||sum==12){
            losses++;
            wallet-=bet;
        }else if(sum==7||sum==11){
            wins++;
            wallet+=bet;
            bet=(yes=='y')?2*bet:bet;//Another Ternary
            bet=bet<LIMIT?bet:LIMIT;//Ternary Operator
        }else{
            //roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;//Number between [1,6]
                die2=rand()%6+1;//Number between [1,6]
                char sum2=die1+die2;
                cntRoll++;//every time dice are thrown increment
                switch(sum2==7){
                    case true:{
                        losses++;
                        wallet-=bet;
                        kpRln=false;
                    }
                    default:
                        if(sum==sum2){
                            wins++;
                            wallet+=bet;
                            kpRln=false;
                        }
                }
            }while(kpRln);
        }
        totRoll+=cntRoll;
        if(cntRoll>maxRoll)maxRoll=cntRoll;
    }
    
    //Output the results to screen
    cout<<"Out of "<<games<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You won "<<100.0f*wins/games<<" % games and "<<endl;
    cout<<"You lost "<<100.0f*losses/games<<" % games"<<endl;
    cout<<"The average roll per game = "
            <<static_cast<float>(totRoll)/games<<endl;
    cout<<"The max roll per game = "<<maxRoll<<endl;

    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    cout<<"My Wallet Contains $"<<wallet<<endl;
    cout<<"My Bets were = $"<<bet<<endl;
    
    //Output the results to a file
    out<<"Out of "<<games<<" played"<<endl;
    out<<"You won "<<wins<<" games and "<<endl;
    out<<"You lost "<<losses<<" games"<<endl;
    out<<"Percentage wise"<<endl;
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"You won "<<100.0f*wins/games<<" % games and "<<endl;
    out<<"You lost "<<100.0f*losses/games<<" % games"<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;
    out<<"My Wallet Contains $"<<wallet<<endl;
    out<<"My Bets were = $"<<bet<<endl;
    
    //Exit stage right
    out.close();
    return 0;
}