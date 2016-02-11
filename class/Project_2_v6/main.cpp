/* 
    File:   main.cpp
    Author: Dr. Mark E. Lehr
    Created on February 9th, 2016, 8:45 PM
    Purpose:  Project 2 Minesweeper
 */

//System Libraries
#include <iostream> //I/O
#include <fstream>  //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants
const int COL=4;
const int ROW=4;

//Function prototypes
void read(int *,string *,int *);
void menu(char &);
void switMen(char, bool &, int &,int &, int[],string[]);
void level(char, int &, bool &, bool &);
void  fillSect(int [ROW][COL],int);
void screen(char [], char &, char &, int, time_t &);
void screen2(char [], char &, char &,bool, int, int, int, int [], int,
             time_t ,time_t, int &);
void dispVal(char []);
void  mineVal(int [ROW][COL], int []);
void convert(char , char , int &, int&, int&);
void propSec(int , int , int , int [ROW][COL],char *, bool &,int [], int &,
             int *);
void top(int,int *, string *, bool &,int, int, char &);

//Execution Begins Here
int main(int argc, char** argv) {
    //start game over do while loop
    char srtOver;                //starts the program over if = Y
    do{
    
    //Declare variables
    int  sector[ROW][COL];        //array determines sector value
    const int  AR=16;             //defaulted per 
    const int  PR=4;              //defaulted per
    char disp[AR];                //array display game screen
    char row;                     //row player input of screen
    char col;                     //column player input of screen
    int  mineNum[AR];             //array for counting mines around currenst sector
    int  conv=0;                  //row col converted to integer
    int  rowInt=0,                //row and column converted to integer
         colInt=0;
    bool game=true;               //loop variable that determines when you lose
    char gameMen;                 //character for the menu switch statement 
    bool loopFn3=true;            //exits menu loop
    int  mines=4;                 //number of mines of field
    int  tick=0;                  //counts sectors cleared
    int  cheat[16];               //anti cheat variable
    int  totSec=0;                //total number of sectors to clear
    time_t  after=0;              //timer stops
    time_t  start=0;              //timer starts 
    int     timeOvr;              //time elapsed
    int     scoreT[PR];            //top time
    string  topIn[PR];             //initials of user with top score
    
    
    // read in top scores
    read(scoreT,topIn,cheat);
    
    //game menu display  
    do{
    menu(gameMen);
    
    //game menu switch statement
    switMen(gameMen,loopFn3, mines,totSec,scoreT,topIn);
    }while(loopFn3==false);
    
    //Fill sectors using array
    fillSect(sector, mines);
    
    //calculate number of mines around each sector
    mineVal(sector, mineNum);

    //Fill display screen
    dispVal(disp);
    
    
    //display first game screen
    screen(disp, row, col, mines,start);
    
    do{
    //converts row/column input to integer for array
    convert(row,col,conv,rowInt,colInt);
    
    //Determines properties of sector chosen
    propSec(conv,rowInt, colInt,sector,disp,game,mineNum,tick,cheat);
    
    
    //display second game screen
    screen2(disp, row, col, game, mines, tick, totSec,mineNum, conv,
            after,start,timeOvr);
    //top score calculations
    top(timeOvr, scoreT,topIn, game,tick,totSec,srtOver);
    }while(game==true);
    
    
    //start game over do while loop
    }while(srtOver=='Y');
    
    
    return 0;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                               Read in Top Scores
void read(int *scoreT,string *topIn,int *cheat){
//    ofstream outStrm;
//    outStrm.open("TopScores.dat");
//        outStrm<<500<<endl;
//        outStrm<<510<<endl;
//        outStrm<<520<<endl;
//        outStrm<<530<<endl;
//        outStrm<<"SH"<<endl;
//        outStrm<<"VD"<<endl;
//        outStrm<<"JC"<<endl;
//        outStrm<<"KS"<<endl;
//         outStrm.close();
//    read in top scores
    ifstream inStrm;
    inStrm.open("TopScores.dat");
    inStrm>>*(scoreT+0)>>*(scoreT+1)>>*(scoreT+2)>>*(scoreT+3);
    inStrm>>*(topIn+0)>>*(topIn+1)>>*(topIn+2)>>*(topIn+3); 
    inStrm.close();
    //initialize cheat
    for(int i=0;i<16;i++)*(cheat+i)=0;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                Top Score Calculations
void top(int timeOvr,int *scoreT,string *topIn, bool &game,int tick, int totSec
         ,char &srtOver){
    //declare variables
    bool   check=true; //checks if user is qualified for leader board
    string userI;       //user input initials
    int    num1=0;
    
    
    //input user initials and determine rank
    if(game==true&&tick>=totSec){
    for(int j=3;j>=0;j--){
        if(timeOvr<*(scoreT+j)&&game==true){
            check=false;
            num1=j;
        }
    }if(check==false){  
        cout<<"You got a high score!"<<endl;
        cout<<"Enter your two character initials for the Leader Board."<<endl;
        cin>>userI;

    //calculation of top score
              *(scoreT+num1)=timeOvr;
              *(topIn+num1)=userI;
               game=false;
            
    }}      
    
        ofstream outStrm;
        outStrm.open("TopScores.dat");
        outStrm<<*(scoreT+0)<<endl;
        outStrm<<*(scoreT+1)<<endl;
        outStrm<<*(scoreT+2)<<endl;
        outStrm<<*(scoreT+3)<<endl;
        outStrm<<*(topIn+0)<<endl;
        outStrm<<*(topIn+1)<<endl;
        outStrm<<*(topIn+2)<<endl;
        outStrm<<*(topIn+3)<<endl;
        outStrm.close();
    
    if(game==false||tick==totSec){
        cout<<"Enter Y to play again!"<<endl;
        cin>>srtOver;
        srtOver=toupper(srtOver);
    }}


//******************************************************************************
//******************************************************************************
//******************************************************************************
//                           Game menu Switch Statement
void switMen(char gameMen, bool &loopFn3,int &mines,int &totSec,int scoreT[],
             string topIn[]){
    //timer starts
    
    //declare variables
    bool loopFn2=true;   //difficulty switch exit variable
    char extMenu;        //input to exit menu and continue to game
    char diff;           //difficulty switch statement character
    int  rank[4];        //array for rank
    
    //switch statement
    switch(gameMen){
    case 'A':{cout<<"Directions:"<<endl;
               cout<<"Minesweeper is a game of strategy. "<<endl;
               cout<<"The purpose of the game is to open"<<endl;
               cout<<"all the sectors of the board which"<<endl;
               cout<<"do not contain a mine. You lose if"<<endl;
               cout<<"you set off a mine sector. Every"<<endl;
               cout<<"non-mine sector you open will tell"<<endl;
               cout<<"you the total number of mines in"<<endl;
               cout<<"the neighboring sectors."<<endl;
               cout<<endl;
               cout<<"Note: Due to the random nature of the game do not get"<<endl;
               cout<<"discouraged if your first turn is a mine hit. This"<<endl;
               cout<<"may happen several times. First turn has a 25%"<<endl;
               cout<<"chance to a mine hit on beginner difficulty."<<endl;
               cout<<endl;
               cout<<"To continue enter any character."<<endl;
               cin>>extMenu;loopFn3=false;break;
    }case 'B':{//switch for game difficulty
                do{
                loopFn2=true;
                cout<<"Select a Difficulty."<<endl;
                cout<<"For veteran mode(8 mines) input A"<<endl;
                cout<<"For skilled mode(6 mines) input B"<<endl;
                cout<<"For Beginner mode(4 mines) input C"<<endl;
                cout<<"For custom difficulty input D"<<endl;
                cin>>diff;
                diff=toupper(diff);
                cout<<"________________________________________________"<<endl;

                //difficulty function call
                level(diff,mines,loopFn3,loopFn2);
                }while(loopFn2==false);;break;  
    }case 'C':{//leaderboard
               cout<<"Leader Board"<<endl;
               cout<<"Rank     Initials     time(s)"<<endl;
               for(int i=0;i<4;i++){
                   rank[i]=i+1;
                   cout<<rank[i]<<"           "<<topIn[i]<<"         "<<scoreT[i];
                   cout<<endl;;
               }cout<<endl;
                
               
               loopFn3=false;
               break;
    
    
    
    
    
    }case 'D':{cout<<"________________________________________________"<<endl;
              loopFn3=true;break;}
    default:{cout<<"You have input an incorrect value. Try again.";
                    cout<<endl;
                    loopFn3=false;  
    }}
    totSec=16-mines;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                            difficulty level
void level(char diff, int &mines, bool &loopFn3, bool &loopFn2){
    switch(diff){
                    case 'A':mines=8;loopFn3=true;break;
                    case 'B':mines=6;loopFn3=true;break;
                    case 'C':mines=4;loopFn3=true;break;
                    case 'D':{cout<<"Enter how many mines you want on the field";
                    cout<<" (Max 16)"<<endl;
                    cin>>mines;loopFn3=true;break;
                    }default:{cout<<"You have input an incorrect value. Try again.";
                    cout<<endl;
                    loopFn2=false;
                }}
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                           Game menu Display
void menu(char &gameMen){
    //timer starts here
    
    //menu starts here
    cout<<"Minesweeper"<<endl;
    cout<<"___________"<<endl;
    cout<<"If you would like to see the directions enter A"<<endl;
    cout<<"If you would like to select difficulty(default Beginner) enter B"<<endl;
    cout<<"If you would like to see the Leader Board enter C"<<endl;
    cout<<"If you just want to play the game enter D"<<endl;
    cin>>gameMen;
    gameMen=toupper(gameMen);
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                           Filles Sectors with values

void fillSect(int sector[ROW][COL], int mines){
    
    //random number seed
    srand(time(0));
   
    //declare variable
    int num1=0;     //random variable for array     
    int loopFn1=0; //loop function variable
    
    //loop function to set mines
    do{
    
    //reset variables   
//    int i=0;
        loopFn1=0; 
        
        
    //generate values of sectors
        for(int row=0;row<ROW;row++){
            for(int col=0;col<COL;col++){
            
                num1=rand()%100-30; 
                sector[row][col]=num1;
              
        
                if(num1<0){loopFn1++;}
        
////    TAKE OUT WHEN NO LONGER NEED. tests filled array
//                cout<<"sector "<<i<<" = "<<sector[row][col]<<endl;
//                if(i==15){
//                    cout<<"------------------------------------------------------------"<<endl;
//                }
//                i++;
        }
    }
    }while(loopFn1!=mines);
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                       fill display sector array
void dispVal(char disp[]){
    char row;
    char col;
    
    for(int i=0;i<17;i++){
        disp[i]=' ';
    }   
}


//******************************************************************************
//******************************************************************************
//******************************************************************************
//                            Game Screen
void screen(char disp[], char &row, char &col, int mines,time_t &start){
    start=time(0);
    cout<<"There are "<<mines<<" mines on the field."<<endl;
    cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<disp[0]<<"|"<<disp[1]<<"|"<<disp[2]<<"|"<<disp[3]<<"|"<<endl;
    cout<<"B |"<<disp[4]<<"|"<<disp[5]<<"|"<<disp[6]<<"|"<<disp[7]<<"|"<<endl;
    cout<<"C |"<<disp[8]<<"|"<<disp[9]<<"|"<<disp[10]<<"|"<<disp[11]<<"|"<<endl;
    cout<<"D |"<<disp[12]<<"|"<<disp[13]<<"|"<<disp[14]<<"|"<<disp[15]<<"|"<<endl;
    cout<<"________________________________________________"<<endl;
    cout<<"Input a row then column. Ex) AC"<<endl;
    cin>>row;
    cin>>col;
    row=toupper(row);
    col=toupper(col);
    cout<<"________________________________________________"<<endl;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                 Game Screen 2
void screen2(char disp[], char &row, char &col,bool game, int mines, int tick,
             int totSec, int mineNum[], int conv, time_t after,
              time_t start, int &timeOvr){
    cout<<"The last sector you chose = "<<row<<col<<endl;
    
    if(game==true&&tick<totSec){
    cout<<"There are "<<mines<<" mines on the field."<<endl;
    cout<<"You have cleared "<<tick<<" out of "<<totSec<<" sectors!"<<endl;
    cout<<"You are surrounded by "<<mineNum[conv]<<" mines!"<<endl;
    }if(game==true&&tick>=totSec){
        cout<<"YOU CLEARED THE MINE FIELD"<<endl;
        cout<<"YOU WIN!"<<endl;   
        after=time(0);
        timeOvr=after-start;
        cout<<"You completed the game in "<<timeOvr<<" seconds!"<<endl;
    }if(game==false){
        cout<<"YOU HIT A MINE!"<<endl;
        cout<<"GAME OVER!"<<endl;
    }
    
    cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<disp[0]<<"|"<<disp[1]<<"|"<<disp[2]<<"|"<<disp[3]<<"|"<<endl;
    cout<<"B |"<<disp[4]<<"|"<<disp[5]<<"|"<<disp[6]<<"|"<<disp[7]<<"|"<<endl;
    cout<<"C |"<<disp[8]<<"|"<<disp[9]<<"|"<<disp[10]<<"|"<<disp[11]<<"|"<<endl;
    cout<<"D |"<<disp[12]<<"|"<<disp[13]<<"|"<<disp[14]<<"|"<<disp[15]<<"|"<<endl;
    cout<<"________________________________________________"<<endl;
 
    
    if(game==true&&tick<totSec){
        cout<<"Input a row then column. Ex) AC"<<endl;
        cin>>row;
        cin>>col;
        row=toupper(row);
        col=toupper(col);
    }
    
    cout<<"________________________________________________"<<endl;
}
        
        
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                   Number of values around current sectors
void mineVal(int sector[ROW][COL], int secVal[]){
    
    //declare variables
    int i=0;   //fills array
    
    //initialize secVal
    for(int j=0;j<16;j++){
        secVal[j]=0;
    }
    
    //determines number of mines in each sector
    for(int row=0;row<ROW;row++){
        for(int col=0;col<COL;col++){
            if((row==1||row==2)&&(col==1||col==2)){
                if(sector[row-1][col-1]<0)secVal[i]++;
                if(sector[row-1][col]<0)secVal[i]++;
                if(sector[row-1][col+1]<0)secVal[i]++;
                if(sector[row][col-1]<0)secVal[i]++;
                if(sector[row][col+1]<0)secVal[i]++;
                if(sector[row+1][col-1]<0)secVal[i]++;
                if(sector[row+1][col]<0)secVal[i]++;
                if(sector[row+1][col+1]<0)secVal[i]++;
                i++;
            }else if((row==0)&&(col==1||col==2)){
                if(sector[row][col-1]<0)secVal[i]++;
                if(sector[row][col+1]<0)secVal[i]++;
                if(sector[row+1][col-1]<0)secVal[i]++;
                if(sector[row+1][col]<0)secVal[i]++;
                if(sector[row+1][col+1]<0)secVal[i]++;
                i++;
            }else if((row==3)&&(col==1||col==2)){
                if(sector[row-1][col-1]<0)secVal[i]++;
                if(sector[row-1][col]<0)secVal[i]++;
                if(sector[row-1][col+1]<0)secVal[i]++;
                if(sector[row][col-1]<0)secVal[i]++;
                if(sector[row][col+1]<0)secVal[i]++;
                i++;
            }else if((row==1||row==2)&&(col==0)){
                if(sector[row-1][col]<0)secVal[i]++;
                if(sector[row-1][col+1]<0)secVal[i]++;
                if(sector[row][col+1]<0)secVal[i]++;
                if(sector[row+1][col]<0)secVal[i]++;
                if(sector[row+1][col+1]<0)secVal[i]++;
                i++;
            }else if((row==1||row==2)&&(col==3)){
                if(sector[row-1][col-1]<0)secVal[i]++;
                if(sector[row-1][col]<0)secVal[i]++;
                if(sector[row][col-1]<0)secVal[i]++;
                if(sector[row+1][col-1]<0)secVal[i]++;
                if(sector[row+1][col]<0)secVal[i]++;
                i++;
            }else if(row==0&&col==0){
                if(sector[row][col+1]<0)secVal[i]++;
                if(sector[row+1][col]<0)secVal[i]++;
                if(sector[row+1][col+1]<0)secVal[i]++;
                i++;
            }else if((row==0)&&(col==3)){
                if(sector[row][col-1]<0)secVal[i]++;
                if(sector[row+1][col-1]<0)secVal[i]++;
                if(sector[row+1][col]<0)secVal[i]++;
                i++;
            }else if((row==3)&&(col==0)){
                if(sector[row-1][col]<0)secVal[i]++;
                if(sector[row-1][col+1]<0)secVal[i]++;
                if(sector[row][col+1]<0)secVal[i]++;
                i++;
            }else if((row==3)&&(col==3)){
                if(sector[row-1][col-1]<0)secVal[i]++;
                if(sector[row-1][col]<0)secVal[i]++;
                if(sector[row][col-1]<0)secVal[i]++;
                i++;
            }       
        } 
}       

//    cout<<"-------------------------------------------------"<<endl;
//    cout<<"Mines around sector 0 = "<<secVal[0]<<endl;
//    cout<<"Mines around sector 1 = "<<secVal[1]<<endl;
//    cout<<"Mines around sector 2 = "<<secVal[2]<<endl;
//    cout<<"Mines around sector 3 = "<<secVal[3]<<endl;
//    cout<<"Mines around sector 4 = "<<secVal[4]<<endl;
//    cout<<"Mines around sector 5 = "<<secVal[5]<<endl;
//    cout<<"Mines around sector 6 = "<<secVal[6]<<endl;
//    cout<<"Mines around sector 7 = "<<secVal[7]<<endl;
//    cout<<"Mines around sector 8 = "<<secVal[8]<<endl;
//    cout<<"Mines around sector 9 = "<<secVal[9]<<endl;
//    cout<<"Mines around sector 10 = "<<secVal[10]<<endl;
//    cout<<"Mines around sector 11 = "<<secVal[11]<<endl;
//    cout<<"Mines around sector 12 = "<<secVal[12]<<endl;
//    cout<<"Mines around sector 13 = "<<secVal[13]<<endl;
//    cout<<"Mines around sector 14 = "<<secVal[14]<<endl;
//    cout<<"Mines around sector 15 = "<<secVal[15]<<endl;
    
        }

//******************************************************************************
//******************************************************************************
//******************************************************************************
//                       convert row and column input to integer
void convert(char row, char col, int &conv, int &rowInt, int &colInt){
    
    if(row=='A'&&col=='A'){
        conv=0; rowInt=0; colInt=0;
    }if(row=='A'&&col=='B'){
        conv=1; rowInt=0; colInt=1;
    }if(row=='A'&&col=='C'){
        conv=2; rowInt=0; colInt=2;
    }if(row=='A'&&col=='D'){
        conv=3; rowInt=0; colInt=3;
    }if(row=='B'&&col=='A'){
        conv=4; rowInt=1; colInt=0;
    }if(row=='B'&&col=='B'){
        conv=5; rowInt=1; colInt=1;
    }if(row=='B'&&col=='C'){
        conv=6; rowInt=1; colInt=2;
    }if(row=='B'&&col=='D'){
        conv=7; rowInt=1; colInt=3;
    }if(row=='C'&&col=='A'){
        conv=8; rowInt=2; colInt=0;
    }if(row=='C'&&col=='B'){
        conv=9; rowInt=2; colInt=1;
    }if(row=='C'&&col=='C'){
        conv=10; rowInt=2; colInt=2;
    }if(row=='C'&&col=='D'){
        conv=11; rowInt=2; colInt=3;
    }if(row=='D'&&col=='A'){
        conv=12; rowInt=3; colInt=0;
    }if(row=='D'&&col=='B'){
        conv=13; rowInt=3; colInt=1;
    }if(row=='D'&&col=='C'){
        conv=14; rowInt=3; colInt=2;
    }if(row=='D'&&col=='D'){
        conv=15; rowInt=3; colInt=3;
    }
    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                   Determines properties of selected sector
void propSec(int conv, int rowInt, int colInt, int sector[ROW][COL],
             char *disp, bool &game,int mineNum[],int &tick, int *cheat){

    //determine properties
    if(sector[rowInt][colInt]<0){
        *(disp+conv)='X';
        game=false;
    }else if((sector[rowInt][colInt]>=0)&&(*(cheat+conv)!=116611)){
        tick++;
        *(disp+conv)=mineNum[conv]+48;
        *(cheat+conv)=116611;
        game=true;
    }
    
    
    
}