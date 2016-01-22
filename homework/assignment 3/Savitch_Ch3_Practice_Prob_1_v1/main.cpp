/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Rock Paper Scissors with computer
 */

//System Libraries
#include <iostream>
#include <cstdlib> //rand function
#include <ctime>   //time to set the random number seed

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//declare question
    char questn; //Question, does player want to play again?
    
    
//loop until player wants to quite
    do{
    
        //problem to solve   
            cout<<"Solution to Savitch 9thEd Chap3 Prob1"<<endl;
            cout<<"Rock paper scissors game"<<endl<<endl;

         //set random number seed
            srand(static_cast<unsigned int>(time(0)));

        //Declare and initialize variables
        char player1;  //Player move inputs    
        char computr; //computers play

        //Input Data
        do{ 
            cout<<"Enter R for rock, S for scissors, or P for paper"<<endl;
            cout<<"Player 1 submit your move."<<endl;
            cin>>player1;
            player1=toupper(player1);}
        while(!(player1=='R'||player1=='S'||player1=='P'));



        //computer generated play
        do{
            computr=rand()%4+80;


        }while(computr=='Q');    

        //calculate or map inputs to outputs

        //Output the moves by computer and player
        cout<<endl<<"the computer played "<<computr<<endl;
        cout<<"Player 1 played     "<<player1<<endl;   

        //determine result
        //comparison of player vs computer moves
        if(player1==computr){
            cout<<"The result is a tie"<<endl;
        }else if(player1=='P'&&computr=='R'){
            cout<<"Player 1 wins!"<<endl;
        }else if(player1=='R'&&computr=='S'){
            cout<<"Player 1 wins!"<<endl;
            }else if(player1=='S'&&computr=='P'){
            cout<<"Player 1 wins!"<<endl;
            }else{
                cout<<"Player 1 loses"<<endl;
            }
        //Keep playing, end of loop
        cout<<endl<<"Do you want to continue playing?"<<endl;
        cout<<"Enter Y or N"<<endl;
        cin>>questn;
    }while(toupper(questn)=='Y');
    cout<<"GAME OVER!"<<endl;
//Exit stage right

    return 0;
}

