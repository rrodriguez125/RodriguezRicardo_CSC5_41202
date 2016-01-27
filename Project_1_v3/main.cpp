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
    short AA=0,AB=0,AC=0,AD=0;            //spaces for A row
    short BA=0,BB=0,BC=0,BD=0;            //spaced for B row
    short CA=0,CB=0,CC=0,CD=0;            //spaced for C row
    short DA=0,DB=0,DC=0,DD=0;            //spaced for D row
    short clickAA,clickAB,clickAC,clickAD;//value of each A row
    short clickBA,clickBB,clickBC,clickBD;//value of each A row
    short clickCA,clickCB,clickCC,clickCD;//value of each A row
    short clickDA,clickDB,clickDC,clickDD;//value of each A row
    short sectNum=0;                        //switch statement variable
    char row;                             //user selected row
    char col;                             //user selected column
    short loopFun=0;                      //do while variable
//random number generator


    
do{    
for(int i=0;i<100000000;i++){
    loopFun=0;
    num1=rand()%1000-250; 
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
    }
}if(clickAA<0)loopFun++;if(clickAB<0)loopFun++;if(clickAC<0)loopFun++;if(clickAD<0)loopFun++;
if(clickBA<0)loopFun++;if(clickBB<0)loopFun++;if(clickBC<0)loopFun++;if(clickBD<0)loopFun++;
if(clickCA<0)loopFun++;if(clickCB<0)loopFun++;if(clickCC<0)loopFun++;if(clickCD<0)loopFun++;
if(clickDA<0)loopFun++;if(clickDB<0)loopFun++;if(clickDC<0)loopFun++;if(clickDD<0)loopFun++;
}while(loopFun<4||loopFun>6);
    
//Input Data
    cout<<"   A B C D"<<endl;
    cout<<"   --------"<<endl;
    cout<<"A |"<<AA<<"|"<<AB<<"|"<<AC<<"|"<<AD<<"|"<<endl;
    cout<<"B |"<<BA<<"|"<<BB<<"|"<<DC<<"|"<<BD<<"|"<<endl;
    cout<<"C |"<<CA<<"|"<<CB<<"|"<<CC<<"|"<<CD<<"|"<<endl;
    cout<<"D |"<<DA<<"|"<<DB<<"|"<<DC<<"|"<<DD<<"|"<<endl;
    cout<<"___________"<<endl;
    cout<<"Input a row."<<endl;
    cin>>row;
    cout<<"Input a column."<<endl;
    cin>>col;
    row=toupper(row);
    col=toupper(col);
//if statement


//calculate or map inputs to outputs
    percent=count/1000.0*100;
//Output the results
    cout<<"________________"<<endl;
    cout<<"random number "<<num1<<" percent negative = %"<<percent<<endl;
    cout<<"count = "<<count<<endl;
    cout<<"row = "<<row<<endl;
    cout<<"col = "<<col<<endl;
    cout<<"clickAA = "<<clickAA<<endl;
    cout<<"clickAB = "<<clickAB<<endl;
    cout<<"clickAC = "<<clickAC<<endl;
    cout<<"clickAD = "<<clickAD<<endl;
    cout<<"clickBA = "<<clickAA<<endl;
    cout<<"clickBB = "<<clickAB<<endl;
    cout<<"clickBC = "<<clickAC<<endl;
    cout<<"clickBD = "<<clickAD<<endl;
    cout<<"clickCA = "<<clickAA<<endl;
    cout<<"clickCB = "<<clickAB<<endl;
    cout<<"clickCC = "<<clickAC<<endl;
    cout<<"clickCD = "<<clickAD<<endl;
    cout<<"clickDA = "<<clickAA<<endl;
    cout<<"clickDB = "<<clickAB<<endl;
    cout<<"clickDC = "<<clickAC<<endl;
    cout<<"clickDD = "<<clickAD<<endl;
    
//Exit stage right

    return 0;
}