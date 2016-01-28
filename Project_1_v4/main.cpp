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
    int   countAA=0,countAB=0,countAC=0,countAD=0,//determins number of mines in area
          countBA=0,countBB=0,countBC=0,countBD=0,
          countCA=0,countCB=0,countCC=0,countCD=0,
          countDA=0,countDB=0,countDC=0,countDD=0;
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
            AA=11;
            game=false;
        }if(clickAA>=0){
            if(clickAB<0)countAA++;
            if(clickBB<0)countAA++;
            if(clickBA<0)countAA++;
            AA=countAA;
            
        }
    }if(row=='A'&&col=='B'){
        if(clickAB<0){
            AB=11;
            game=false;
        }if(clickAB>=0){
            if(clickAA<0)countAB++;
            if(clickBA<0)countAB++;
            if(clickBB<0)countAB++;
            if(clickBC<0)countAB++;
            if(clickAC<0)countAB++;
            AB=countAB;  
        }
    }if(row=='A'&&col=='C'){
        if(clickAC<0){
            AC=11;
            game=false;
        }if(clickAC>=0){
            if(clickAB<0)countAC++;
            if(clickAD<0)countAC++;
            if(clickBB<0)countAC++;
            if(clickBC<0)countAC++;
            if(clickBD<0)countAC++;
            AC=countAC;  
        }
    }if(row=='A'&&col=='D'){
        if(clickAD<0){
            AD=11;
            game=false;
        }if(clickAD>=0){
            if(clickAC<0)countAD++;
            if(clickBC<0)countAD++;
            if(clickBD<0)countAD++;
            AD=countAD;  
        }
    }if(row=='B'&&col=='A'){
        if(clickBA<0){
            BA=11;
            game=false;
        }if(clickBA>=0){
            if(clickAA<0)countBA++;
            if(clickAB<0)countBA++;
            if(clickBB<0)countBA++;
            if(clickCA<0)countBA++;
            if(clickCB<0)countBA++;
            BA=countBA;  
        }
    }if(row=='B'&&col=='B'){
        if(clickBB<0){
            BB=11;
            game=false;
        }if(clickBB>=0){
            if(clickAA<0)countBB++;
            if(clickAB<0)countBB++;
            if(clickAC<0)countBB++;
            if(clickBA<0)countBB++;
            if(clickBC<0)countBB++;
            if(clickCA<0)countBB++;
            if(clickCB<0)countBB++;
            if(clickCC<0)countBB++;
            BB=countBB;  
        }
    }if(row=='B'&&col=='C'){
        if(clickBC<0){
            BC=11;
            game=false;
        }if(clickBC>=0){
            if(clickAB<0)countBC++;
            if(clickAC<0)countBC++;
            if(clickAD<0)countBC++;
            if(clickBB<0)countBC++;
            if(clickBD<0)countBC++;
            if(clickCB<0)countBC++;
            if(clickCC<0)countBC++;
            if(clickCD<0)countBC++;
            BC=countBC;  
        }
    }if(row=='B'&&col=='D'){
        if(clickBD<0){
            BD=11;
            game=false;
        }if(clickBD>=0){
            if(clickAC<0)countBD++;
            if(clickAD<0)countBD++;
            if(clickBC<0)countBD++;
            if(clickCC<0)countBD++;
            if(clickCD<0)countBD++;
            BD=countBD;  
        }
    }if(row=='C'&&col=='A'){
        if(clickCA<0){
            CA=11;
            game=false;
        }if(clickCA>=0){
            if(clickBA<0)countCA++;
            if(clickBB<0)countCA++;
            if(clickCB<0)countCA++;
            if(clickDA<0)countCA++;
            if(clickDB<0)countCA++;
            CA=countCA;  
        }
    }if(row=='C'&&col=='B'){
        if(clickCB<0){
            CB=11;
            game=false;
        }if(clickCB>=0){
            if(clickBA<0)countCB++;
            if(clickBB<0)countCB++;
            if(clickBC<0)countCB++;
            if(clickCA<0)countCB++;
            if(clickCC<0)countCB++;
            if(clickDA<0)countCB++;
            if(clickDB<0)countCB++;
            if(clickDC<0)countCB++;
            CB=countCB;  
        }
    }if(row=='C'&&col=='C'){
        if(clickCC<0){
            CC=11;
            game=false;
        }if(clickCC>=0){
            if(clickBB<0)countCC++;
            if(clickBC<0)countCC++;
            if(clickBD<0)countCC++;
            if(clickCB<0)countCC++;
            if(clickCD<0)countCC++;
            if(clickDB<0)countCC++;
            if(clickDC<0)countCC++;
            if(clickDD<0)countCC++;
            CC=countCC;  
        }
    }if(row=='C'&&col=='D'){
        if(clickCD<0){
            CD=11;
            game=false;
        }if(clickCD>=0){
            if(clickBC<0)countCD++;
            if(clickBD<0)countCD++;
            if(clickCC<0)countCD++;
            if(clickDC<0)countCD++;
            if(clickDD<0)countCD++;
            CD=countCD;  
        }
    }if(row=='D'&&col=='A'){
        if(clickDA<0){
            DA=11;
            game=false;
        }if(clickDA>=0){
            if(clickCA<0)countDA++;
            if(clickCB<0)countDA++;
            if(clickDB<0)countDA++;
            DA=countDA;  
        }
    }if(row=='D'&&col=='B'){
        if(clickDB<0){
            DB=11;
            game=false;
        }if(clickDB>=0){
            if(clickCA<0)countDB++;
            if(clickCB<0)countDB++;
            if(clickCC<0)countDB++;
            if(clickDA<0)countDB++;
            if(clickDC<0)countDB++;
            DB=countDB;  
        }
    }if(row=='D'&&col=='C'){
        if(clickDC<0){
            DC=11;
            game=false;
        }if(clickDC>=0){
            if(clickCD<0)countDC++;
            if(clickCB<0)countDC++;
            if(clickCC<0)countDC++;
            if(clickDB<0)countDC++;
            if(clickDD<0)countDC++;
            DC=countDC;  
        }
    }if(row=='D'&&col=='D'){
        if(clickDD<0){
            DD=11;
            game=false;
        }if(clickDD>=0){
            if(clickCC<0)countDD++;
            if(clickCD<0)countDD++;
            if(clickDC<0)countDD++;
            DD=countDD;  
        }
    }
    
    
 //additional output
    cout<<"The last sector you chose = "<<row<<col<<endl;
    
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