/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 31, 2016, 2:18 AM
 * Purpose: Project 1 Minesweeper
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//start game over
    char  srtOver;                        //variable to start game over
    do{
    
//random number seed
    srand(time(0));
     
//Declare and initialize variables
    int num1;                             //asigns random numbers to switch
    char   AA=' ',AB=' ',AC=' ',AD=' ';            //spaces for A row
    char   BA=' ',BB=' ',BC=' ',BD=' ';            //spaced for B row
    char   CA=' ',CB=' ',CC=' ',CD=' ';            //spaced for C row
    char   DA=' ',DB=' ',DC=' ',DD=' ';            //spaced for D row
    int clickAA,clickAB,clickAC,clickAD;//value of each A row
    int clickBA,clickBB,clickBC,clickBD;//value of each B row
    int clickCA,clickCB,clickCC,clickCD;//value of each C row
    int clickDA,clickDB,clickDC,clickDD;//value of each D row
    int sectNum=0;                      //switch statement variable
    char  row;                            //user selected row
    char  col;                            //user selected column
    int   loopFun=0;                      //do while variable
    bool  game=true,loopFn2=true,loopFn3=true;    //loop variables
    int   countAA=0,countAB=0,countAC=0,countAD=0,//determins number of mines in area
          countBA=0,countBB=0,countBC=0,countBD=0,
          countCA=0,countCB=0,countCC=0,countCD=0,
          countDA=0,countDB=0,countDC=0,countDD=0;
    int   mines=4,numMine;                //how many mines are on field
    char  diff;                           //difficulty level variable
    char  menu,extMenu;                   //menu varibales
    int   tick=0;                         //determines when you win
    int   mineWin;                        //variable that determines if you win
    int   cheat1=0,cheat2=0,cheat3=0,cheat4=0,     //anti cheating variable
          cheat5=0,cheat6=0,cheat7=0,cheat8=0,
          cheat9=0,cheat10=10,cheat11=0,cheat12=0,
          cheat13=0,cheat14=0,cheat15=0,cheat16=0;
//game menu
do{
    loopFn2=true;

cout<<"Minesweeper"<<endl;
cout<<"___________"<<endl;
cout<<"If you would like to see the directions enter A"<<endl;
cout<<"If you would like to select difficulty(default Beginner) enter B"<<endl;
cout<<"If you just want to play the game enter C"<<endl;
cin>>menu;
menu=toupper(menu);



//switch for game menu
switch(menu){
    case 'A':{cout<<"Directions:"<<endl;
               cout<<"Minesweeper is a game of strategy. ";
               cout<<"The purpose of the game is to open all the sectors of the";
               cout<<" board which do not contain a mine. You lose if you set";
               cout<<" off a mine sector. Every non-mine sector you open will tell";
               cout<<" you the total number of mines in the neighboring sectors.";
               cout<<endl;
               cout<<"Note: Due to the random nature of the game do not get";
               cout<<" discouraged if your first turn is a mine hit. This may";
               cout<<" happen several times. First turn has a 25% chance of a mine";
               cout<<" hit on beginner difficulty.";
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
                cin>>diff;
                diff=toupper(diff);
                cout<<"________________________________________________"<<endl;

                //difficulty switch statement
                switch(diff){
                    case 'A':mines=8;loopFn3=true;break;
                    case 'B':mines=6;loopFn3=true;break;
                    case 'C':mines=4;loopFn3=true;break;
                    default:{cout<<"You have input an incorrect value. Try again.";
                    cout<<endl;
                    loopFn2=false;
                }}}while(loopFn2==false);;break;  
    }case 'C':loopFn3=true;break;
    default:{cout<<"You have input an incorrect value. Try again.";
                    cout<<endl;
                    loopFn3=false;  
    }}}while(loopFn3==false);




//random number generator deciding mine location
do{  
  loopFun=0;
  for(int i=0;i<17;i++){
    
    num1=rand()%100-30; 
    sectNum++;
    
            switch(sectNum){
                case  1:{clickAA=num1;break;
                }case 2:{clickAB=num1;break;
                }case 3:{clickAC=num1;break;
                }case 4:{clickAD=num1;break;
                }case 5:{clickBA=num1;break;
                }case 6:{clickBB=num1;break;
                }case 7:{clickBC=num1;break;
                }case 8:{clickBD=num1;break;
                }case 9:{clickCA=num1;break;
                }case 10:{clickCB=num1;break;
                }case 11:{clickCC=num1;break;
                }case 12:{clickCD=num1;break;
                }case 13:{clickDA=num1;break;
                }case 14:{clickDB=num1;break;
                }case 15:{clickDC=num1;break;
                }case 16:{clickDD=num1;break;  
                }
                
            }   
    
  }if(clickAA<0){loopFun++;}if(clickAB<0){loopFun++;}if(clickAC<0){loopFun++;if(clickAD<0)loopFun++;}
if(clickBA<0){loopFun++;}if(clickBB<0){loopFun++;}if(clickBC<0){loopFun++;}if(clickBD<0){loopFun++;}
if(clickCA<0){loopFun++;}if(clickCB<0){loopFun++;}if(clickCC<0){loopFun++;}if(clickCD<0){loopFun++;}
if(clickDA<0){loopFun++;}if(clickDB<0){loopFun++;}if(clickDC<0){loopFun++;}if(clickDD<0){loopFun++;}
}while(loopFun=!mines);

//game screen do-while loop
do{
    
//game screen 
    cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<AA<<"|"<<AB<<"|"<<AC<<"|"<<AD<<"|"<<endl;
    cout<<"B |"<<BA<<"|"<<BB<<"|"<<BC<<"|"<<BD<<"|"<<endl;
    cout<<"C |"<<CA<<"|"<<CB<<"|"<<CC<<"|"<<CD<<"|"<<endl;
    cout<<"D |"<<DA<<"|"<<DB<<"|"<<DC<<"|"<<DD<<"|"<<endl;
    cout<<"________________________________________________"<<endl;
    cout<<"Input a row then column. Ex) AC"<<endl;
    cin>>row;
    cin>>col;
    row=toupper(row);
    col=toupper(col);
    cout<<"________________________________________________"<<endl;
    
    
//if statement determining action after selection of row A
    if(row=='A'&&col=='A'){
        if(clickAA<0){
            AA='X';
            game=false;
        }if(clickAA>=0&&cheat1!=1){
            if(clickAB<0)countAA++;
            if(clickBB<0)countAA++;
            if(clickBA<0)countAA++;
            AA=countAA+48;
            numMine=countAA;
            cheat1=1;
            tick++;
            
        }
    }if(row=='A'&&col=='B'){
        if(clickAB<0){
            AB='X';
            game=false;
        }if(clickAB>=0&&cheat2!=1){
            if(clickAA<0)countAB++;
            if(clickBA<0)countAB++;
            if(clickBB<0)countAB++;
            if(clickBC<0)countAB++;
            if(clickAC<0)countAB++;
            AB=countAB+48;  
            numMine=countAB;
            cheat2=1;
            tick++;
            
        }
    }if(row=='A'&&col=='C'){
        if(clickAC<0){
            AC='X';
            game=false;
        }if(clickAC>=0&&cheat3!=1){
            if(clickAB<0)countAC++;
            if(clickAD<0)countAC++;
            if(clickBB<0)countAC++;
            if(clickBC<0)countAC++;
            if(clickBD<0)countAC++;
            AC=countAC+48;
            numMine=countAC;
            cheat3=1;
            tick++;
            
        }
    }if(row=='A'&&col=='D'){
        if(clickAD<0){
            AD='X';
            game=false;
        }if(clickAD>=0&&cheat4!=1){
            if(clickAC<0)countAD++;
            if(clickBC<0)countAD++;
            if(clickBD<0)countAD++;
            AD=countAD+48;  
            numMine=countAD;
            cheat4=1;
            tick++;
            
        }
    }
//of row B******************************************************
    if(row=='B'&&col=='A'){
        if(clickBA<0){
            BA='X';
            game=false;
        }if(clickBA>=0&&cheat5!=1){
            if(clickAA<0)countBA++;
            if(clickAB<0)countBA++;
            if(clickBB<0)countBA++;
            if(clickCA<0)countBA++;
            if(clickCB<0)countBA++;
            BA=countBA+48;  
            numMine=countBA;
            cheat5=1;
            tick++;
            
        }
    }if(row=='B'&&col=='B'){
        if(clickBB<0){
            BB='X';
            game=false;
        }if(clickBB>=0&&cheat6!=1){
            if(clickAA<0)countBB++;
            if(clickAB<0)countBB++;
            if(clickAC<0)countBB++;
            if(clickBA<0)countBB++;
            if(clickBC<0)countBB++;
            if(clickCA<0)countBB++;
            if(clickCB<0)countBB++;
            if(clickCC<0)countBB++;
            BB=countBB+48;  
            numMine=countBB;
            cheat6=1;
            tick++;
            
        }
    }if(row=='B'&&col=='C'){
        if(clickBC<0){
            BC='X';
            game=false;
        }if(clickBC>=0&&cheat7!=1){
            if(clickAB<0)countBC++;
            if(clickAC<0)countBC++;
            if(clickAD<0)countBC++;
            if(clickBB<0)countBC++;
            if(clickBD<0)countBC++;
            if(clickCB<0)countBC++;
            if(clickCC<0)countBC++;
            if(clickCD<0)countBC++;
            BC=countBC+48;  
            numMine=countBC;
            cheat7=1;
            tick++;
            
        }
    }if(row=='B'&&col=='D'){
        if(clickBD<0){
            BD='X';
            game=false;
        }if(clickBD>=0&&cheat8!=1){
            if(clickAC<0)countBD++;
            if(clickAD<0)countBD++;
            if(clickBC<0)countBD++;
            if(clickCC<0)countBD++;
            if(clickCD<0)countBD++;
            BD=countBD+48;  
            numMine=countBD;
            cheat8=1;
            tick++;
            
        }
    }
//of row C******************************************************
    if(row=='C'&&col=='A'){
        if(clickCA<0){
            CA='X';
            game=false;
        }if(clickCA>=0&&cheat9!=1){
            if(clickBA<0)countCA++;
            if(clickBB<0)countCA++;
            if(clickCB<0)countCA++;
            if(clickDA<0)countCA++;
            if(clickDB<0)countCA++;
            CA=countCA+48;  
            numMine=countCA;
            cheat9=1;
            tick++;
            
        }
    }if(row=='C'&&col=='B'){
        if(clickCB<0){
            CB='X';
            game=false;
        }if(clickCB>=0&&cheat10!=1){
            if(clickBA<0)countCB++;
            if(clickBB<0)countCB++;
            if(clickBC<0)countCB++;
            if(clickCA<0)countCB++;
            if(clickCC<0)countCB++;
            if(clickDA<0)countCB++;
            if(clickDB<0)countCB++;
            if(clickDC<0)countCB++;
            CB=countCB+48; 
            numMine=countCB;
            cheat10=1;
            tick++;
            
        }
    }if(row=='C'&&col=='C'){
        if(clickCC<0){
            CC='X';
            game=false;
        }if(clickCC>=0&&cheat11!=1){
            if(clickBB<0)countCC++;
            if(clickBC<0)countCC++;
            if(clickBD<0)countCC++;
            if(clickCB<0)countCC++;
            if(clickCD<0)countCC++;
            if(clickDB<0)countCC++;
            if(clickDC<0)countCC++;
            if(clickDD<0)countCC++;
            CC=countCC+48;  
            numMine=countCC;
            cheat11=1;
            tick++;
            
        }
    }if(row=='C'&&col=='D'){
        if(clickCD<0){
            CD='X';
            game=false;
        }if(clickCD>=0&&cheat12!=1){
            if(clickBC<0)countCD++;
            if(clickBD<0)countCD++;
            if(clickCC<0)countCD++;
            if(clickDC<0)countCD++;
            if(clickDD<0)countCD++;
            CD=countCD+48;  
            numMine=countCD;
            cheat12=1;
            tick++;
            
        }
    }
//of row D******************************************************    
    if(row=='D'&&col=='A'){
        if(clickDA<0){
            DA='X';
            game=false;
        }if(clickDA>=0&&cheat13!=1){
            if(clickCA<0)countDA++;
            if(clickCB<0)countDA++;
            if(clickDB<0)countDA++;
            DA=countDA+48;  
            numMine=countDA;
            cheat13=1;
            tick++;
           
        }
    }if(row=='D'&&col=='B'){
        if(clickDB<0){
            DB='X';
            game=false;
        }if(clickDB>=0&&cheat14!=1){
            if(clickCA<0)countDB++;
            if(clickCB<0)countDB++;
            if(clickCC<0)countDB++;
            if(clickDA<0)countDB++;
            if(clickDC<0)countDB++;
            DB=countDB+48;  
            numMine=countDB;
            cheat14=1;
            tick++;
            
        }
    }if(row=='D'&&col=='C'){
        if(clickDC<0){
            DC='X';
            game=false;
        }if(clickDC>=0&&cheat15!=1){
            if(clickCD<0)countDC++;
            if(clickCB<0)countDC++;
            if(clickCC<0)countDC++;
            if(clickDB<0)countDC++;
            if(clickDD<0)countDC++;
            DC=countDC+48;  
            numMine=countDC;
            cheat15=1;
            tick++;
            
        }
    }if(row=='D'&&col=='D'){
        if(clickDD<0){
            DD='X';
            game=false;
        }if(clickDD>=0&&cheat16!=1){
            if(clickCC<0)countDD++;
            if(clickCD<0)countDD++;
            if(clickDC<0)countDD++;
            DD=countDD+48;  
            numMine=countDD;
            cheat16=1;
            tick++;
            
        }
    }
 //calculations of win variable
    mineWin=16-mines;
 
    
  
 //additional output
    cout<<"The last sector you chose = "<<row<<col<<endl;
    if(numMine>=0&&game==true&&tick<mineWin){
        cout<<"There are "<<mines<<" mines on the field."<<endl;
        cout<<"You have cleared "<<tick<<" out of "<<mineWin<<" sectors!"<<endl;
        cout<<"You are surrounded by "<<numMine<<" mine(s)!"<<endl;
        
    }
 //end of do while loop GAME OVER
}while(game==true&&tick<mineWin);
    if(tick<mines){cout<<"YOU HIT A MINE!"<<endl;
    cout<<"GAME OVER!"<<endl;
    }else if(tick==mineWin){
        cout<<"You cleared the mine field!"<<endl;
        cout<<"YOU WIN!!!"<<endl;
        
        
    }cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<AA<<"|"<<AB<<"|"<<AC<<"|"<<AD<<"|"<<endl;
    cout<<"B |"<<BA<<"|"<<BB<<"|"<<DC<<"|"<<BD<<"|"<<endl;
    cout<<"C |"<<CA<<"|"<<CB<<"|"<<CC<<"|"<<CD<<"|"<<endl;
    cout<<"D |"<<DA<<"|"<<DB<<"|"<<DC<<"|"<<DD<<"|"<<endl;
//start game over?
    cout<<"Enter Y to play again!"<<endl;
    cin>>srtOver;
    srtOver=toupper(srtOver);
}while(srtOver=='Y');

//Exit stage right

    return 0;
}