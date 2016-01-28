/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Check out IDE
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
//random number seed
    srand(time(0));
    
//Declare and initialize variables
    float count=0;
    int num1;
    float percent;
    int   AA=9,AB=9,AC=9,AD=9;            //spaces for A row
    short BA=9,BB=9,BC=9,BD=9;            //spaced for B row
    short CA=9,CB=9,CC=9,CD=9;            //spaced for C row
    short DA=9,DB=9,DC=9,DD=9;            //spaced for D row
    short clickAA,clickAB,clickAC,clickAD;//value of each A row
    short clickBA,clickBB,clickBC,clickBD;//value of each A row
    short clickCA,clickCB,clickCC,clickCD;//value of each A row
    short clickDA,clickDB,clickDC,clickDD;//value of each A row
    short sectNum=0;                        //switch statement variable
    char  row;                             //user selected row
    char  col;                             //user selected column
    int   loopFun=0;                      //do while variable
    bool  game=true;                      //do while loop game menu 
    int   countAA=0;
//random number generator


    
do{  
  loopFun=0;
  for(int i=0;i<17;i++){
    
    num1=rand()%100-30; 
    sectNum=sectNum+1;
    
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
}while(loopFun<4||loopFun>6);
 
//game screen do while loop
do{
//Input Data where the game starts!
    cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<AA<<"|"<<AB<<"|"<<AC<<"|"<<AD<<"|"<<endl;
    cout<<"B |"<<BA<<"|"<<BB<<"|"<<BC<<"|"<<BD<<"|"<<endl;
    cout<<"C |"<<CA<<"|"<<CB<<"|"<<CC<<"|"<<CD<<"|"<<endl;
    cout<<"D |"<<DA<<"|"<<DB<<"|"<<DC<<"|"<<DD<<"|"<<endl;
    cout<<"___________"<<endl;
    cout<<"Input a row."<<endl;
    cin>>row;
    cout<<"Input a column."<<endl;
    cin>>col;
    row=toupper(row);
    col=toupper(col);
    cout<<"___________"<<endl;
    
    
//if statement determining action after selection
    if(row=='A'&&col=='A'){
        if(clickAA<0){
            AA='X';
            game=false;
        }if(clickAA>=0){
            if(clickAB<0)countAA++;
            if(clickBB<0)countAA++;
            if(clickBA<0)countAA++;
            AA=countAA;
            
        }
    }
    
 //additional output
    cout<<"The was sector you chose = "<<row<<col<<endl;
    
 //end of do while loop GAME OVER
}while(game==true);
    cout<<"YOU HIT A MINE!"<<endl;
    cout<<"GAME OVER!"<<endl;
    cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<AA<<"|"<<AB<<"|"<<AC<<"|"<<AD<<"|"<<endl;
    cout<<"B |"<<BA<<"|"<<BB<<"|"<<DC<<"|"<<BD<<"|"<<endl;
    cout<<"C |"<<CA<<"|"<<CB<<"|"<<CC<<"|"<<CD<<"|"<<endl;
    cout<<"D |"<<DA<<"|"<<DB<<"|"<<DC<<"|"<<DD<<"|"<<endl;

//Output the results
//    cout<<"________________"<<endl;

//    cout<<"clickAA = "<<clickAA<<endl;
//    cout<<"clickAB = "<<clickAB<<endl;
//    cout<<"clickAC = "<<clickAC<<endl;
//    cout<<"clickAD = "<<clickAD<<endl;
//    cout<<"clickBA = "<<clickBA<<endl;
//    cout<<"clickBB = "<<clickBB<<endl;
//    cout<<"clickBC = "<<clickBC<<endl;
//    cout<<"clickBD = "<<clickBD<<endl;
//    cout<<"clickCA = "<<clickCA<<endl;
//    cout<<"clickCB = "<<clickCB<<endl;
//    cout<<"clickCC = "<<clickCC<<endl;
//    cout<<"clickCD = "<<clickCD<<endl;
//    cout<<"clickDA = "<<clickDA<<endl;
//    cout<<"clickDB = "<<clickDB<<endl;
//    cout<<"clickDC = "<<clickDC<<endl;
//    cout<<"clickDD = "<<clickDD<<endl;
//    cout<<"loopFun = "<<loopFun<<endl;
    
//Exit stage right

    return 0;
}