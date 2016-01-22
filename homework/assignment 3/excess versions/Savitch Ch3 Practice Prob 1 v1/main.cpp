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
 //problem to solve   
    cout<<"Solution to Savitch 9thEd Chap3 Prob1"<<endl;
    cout<<"Rock paper scissors game"<<endl<<endl;
    
 //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
//Declare and initialize variables
char player1; //Player move inputs    
char computr;               //computers play
    
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

//Output the results
cout<<endl<<"the computer played "<<computr<<endl;
cout<<"Player 1 played     "<<player1<<endl;   
//Exit stage right

    return 0;
}

