/* 
    File:   main.cpp
    Author: Dr. Mark E. Lehr
    Created on February 4th, 2016, 8:45 PM
    Purpose:  Game of Life
 */

//System Libraries
#include <iostream> //I/O
#include <fstream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants
const int COL=4;
const int ROW=4;

//Function prototypes
int fillSect(int [ROW][COL]);
void screen(char [], char &, char &);
char dispVal(char []);
int mineVal(int [ROW][COL], int []);
void convert(char , char , int &, int&, int&);
void propSec(int , int , int , int [ROW][COL],char *, bool &,int [] );
void screen2(char [], char &, char &,bool);

//Execution Begins Here
int main(int argc, char** argv) {
    
    
    //Declare variables
    int  sector[ROW][COL];//array determines sector value
    char disp[16];            //array display game screen
    char row;                 //row player input of screen
    char col;                 //column player input of screen
    int  mineNum[16];         //array for counting mines around currenst sector
    int  conv;                //row col converted to integer
    int  rowInt,              //row and column converted to integer
         colInt;
    bool game=true;          //loop variable that determines when you lose
    
    
    //Fill sectors using array
    fillSect(sector);
    
    //calculate number of mines around each sector
    mineVal(sector, mineNum);

    //Fill display screen
    dispVal(disp);
    
    
    //display first game screen
    screen(disp, row, col);
    
    do{
    //converts row column input to integer for array
    convert(row,col,conv,rowInt,colInt);
    
    //Determines properties of sector chosen
    propSec(conv,rowInt, colInt,sector,disp,game,mineNum);
    
    
    //display second game screen
    screen2(disp, row, col, game);
    
    
    }while(game==true);
    
    
    
    return 0;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                  Filles Sectors with values

int fillSect(int sector[ROW][COL]){
    
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
    }while(loopFn1!=4);
    return 0;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                fill display sector array
char dispVal(char disp[]){
    char row;
    char col;
    
    for(int i=0;i<17;i++){
        disp[i]=' ';
    }
return 0;    
}


//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                 Game Screen
void screen(char disp[], char &row, char &col ){
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
void screen2(char disp[], char &row, char &col,bool game ){
    cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<disp[0]<<"|"<<disp[1]<<"|"<<disp[2]<<"|"<<disp[3]<<"|"<<endl;
    cout<<"B |"<<disp[4]<<"|"<<disp[5]<<"|"<<disp[6]<<"|"<<disp[7]<<"|"<<endl;
    cout<<"C |"<<disp[8]<<"|"<<disp[9]<<"|"<<disp[10]<<"|"<<disp[11]<<"|"<<endl;
    cout<<"D |"<<disp[12]<<"|"<<disp[13]<<"|"<<disp[14]<<"|"<<disp[15]<<"|"<<endl;
    cout<<"________________________________________________"<<endl;
 
    
    if(game==true){
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
int mineVal(int sector[ROW][COL], int secVal[]){
    
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
    
    return 0;
        }

//******************************************************************************
//******************************************************************************
//******************************************************************************
//                       convert row and column input to integer
void convert(char row, char col, int &conv, int &rowInt, int &colInt){
    
    if(row=='A'&&col=='A'){
        conv=0; rowInt=0; colInt=0;
    }if(row=='A'&&col=='B'){
        conv=1; rowInt=1; colInt=1;
    }if(row=='A'&&col=='C'){
        conv=2; rowInt=2; colInt=2;
    }if(row=='A'&&col=='D'){
        conv=3; rowInt=3; colInt=3;
    }if(row=='B'&&col=='A'){
        conv=4; rowInt=0; colInt=0;
    }if(row=='B'&&col=='B'){
        conv=5; rowInt=1; colInt=1;
    }if(row=='B'&&col=='C'){
        conv=6; rowInt=2; colInt=2;
    }if(row=='B'&&col=='D'){
        conv=7; rowInt=3; colInt=3;
    }if(row=='C'&&col=='A'){
        conv=8; rowInt=0; colInt=0;
    }if(row=='C'&&col=='B'){
        conv=9; rowInt=1; colInt=1;
    }if(row=='C'&&col=='C'){
        conv=10; rowInt=2; colInt=2;
    }if(row=='C'&&col=='D'){
        conv=11; rowInt=3; colInt=3;
    }if(row=='D'&&col=='A'){
        conv=12; rowInt=0; colInt=0;
    }if(row=='D'&&col=='B'){
        conv=13; rowInt=1; colInt=1;
    }if(row=='D'&&col=='C'){
        conv=14; rowInt=2; colInt=2;
    }if(row=='D'&&col=='D'){
        conv=15; rowInt=3; colInt=3;
    }
    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                   Determines properties of selected sector
void propSec(int conv, int rowInt, int colInt, int sector[ROW][COL],
             char *disp, bool &game,int mineNum[]){
    
    if(sector[rowInt][colInt]<0){
        *(disp+conv)='X';
        game=false;
    }else if(sector[rowInt][colInt]>=0){
        
        *(disp+conv)=mineNum[conv]+48;
    }
    
    
}
