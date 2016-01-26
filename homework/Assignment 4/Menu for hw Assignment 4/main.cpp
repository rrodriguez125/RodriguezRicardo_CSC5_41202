/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 19, 2016, 8:35 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 
    
//Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to Display
    bool reDsply=true;//exit program
    


//Menu to display solution
    do{
        //Input Data (problem to display)
    cout<<"Assignment 3 Problem Set"<<endl;
    cout<<"Type 1 to Display Gaddis 6thEd Chap5 Prob 3"<<endl;
    cout<<"Type 2 to Display Gaddis 6thEd Chap5 Prob 1"<<endl;
    cout<<"Type 3 to Display Savitch 9thEd Chap4 PracticeProb 4"<<endl;
    cout<<"Type 4 to Display Savitch 9thEd Chap4 PracticeProb 7"<<endl;
    cout<<"Type 5 to Display Savitch 9thEd Chap4 ProjectProb 2"<<endl;
    cout<<"Type 6 to Display Savitch 9thEd Chap4 PracticeProb 1"<<endl;
    cout<<"Type 7 to Display Savitch 9thEd Chap4 PracticeProb 5"<<endl;
    cout<<"Type 8 to Display Savitch 9thEd Chap4 ProjectProb 3"<<endl;
    cout<<"Type 9 to Display Savitch 9thEd Chap4 PracticeProb 2"<<endl;
    cout<<"Type 10 to Display Gaddis 6thEd Chap5 Prob 5"<<endl;
    cout<<"Type anything else to exit"<<endl<<endl;
    cin>>nSoltn;
   
    
    
        //solutions to all problems
        switch(nSoltn){
            case 1:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Gaddis 6thEd Chap5 Prob 3"<<endl;
                cout<<"Membership Fee Increase"<<endl<<endl;
                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //local constant
                const float MEMINCR=.04f;//membership fee increase

                //Declare and initialize variables
                    float memFee=2500.0f;//mm the ocean has risen
                    int yearPsd=0;//years passed
                    int i;      //loop function variable
                //Input Data

                //calculate or map inputs to outputs

                //Output the results
                    cout<<"Table of membership fee increase over next six years"<<endl;
                    cout<<"Years         Fee Price After Increase"<<endl;
                    for(int i=0;i<6;i++){
                        yearPsd==yearPsd++;
                        memFee=MEMINCR*memFee+memFee;

                        cout<<"      "<<yearPsd<<"                 "<<memFee<<endl;

                    }
                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y'); 
                
                
                    
                cout<<"----------------------------------"<<endl;
                
                }
                break;
            case 2:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Gaddis 6thEd Chap5 Prob 1"<<endl;
                cout<<"Summing up Integers"<<endl<<endl;
                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //Declare and initialize variables
                    int userInt;   //user selected integer
                    int strtNum=0;//starting value in summation 
                    int outNum=0;//number output
                //Input Data
                    cout<<"Enter a positive integer."<<endl;
                    cin>>userInt;
                //if statement confirming userInt is positive integer
                if(userInt>=0){
                //calculate or map inputs to outputs
                    do{
                        strtNum==strtNum++;
                        
                        outNum=outNum+strtNum;
                    }while(strtNum<userInt);
                //Output the results
                        cout<<"The sum of all the integers from 0 to "<<userInt<<" is ";
                        cout<<outNum<<endl;
                }else
                    cout<<"User input was invalid. Repeat program and enter a positive integer.";
                    cout<<endl;

                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
               
            }break;
            
            case 3:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                //problem to solve   
                cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 4"<<endl;
                cout<<"Gauging the Rate of Inflation"<<endl<<endl;
                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //Declare and initialize variables
                float priceYr;  //price of item 1 year ago
                float priceNw; //price of item today
                float infRate;//inflation rate

                //Input Data
                cout<<"Enter the price of your item 1 year ago."<<endl;
                cin>>priceYr;
                cout<<"Enter the price of your item today."<<endl;
                cin>>priceNw;


                //calculate or map inputs to outputs
                infRate = (priceNw-priceYr)/priceYr*100;

                //set precision of infRate output
                cout<<fixed<<setprecision(1)<<showpoint;
                //Output the results
                cout<<"the inflation rate is approximately "<<infRate<<"%"<<endl;   

                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
                
                }
                break;
            case 4:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 7"<<endl;
                cout<<"Calculate Gravitational Force of Two Stellar Bodies"<<endl<<endl;
                //Global Constants
                const float G=6.673e-8;//gravitatonal constant in cm^3/(g*sec^2))

                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //Declare and initialize variables
                    float mass1;    //mass of body 1
                    float mass2;   //mass of body 2
                    float distnce;//distance between the two bodies
                    float forceG;//force due to gravity on stellar bodies
                //Input Data
                    cout<<"Enter mass of 1st stellar body in grams."<<endl;
                    cin>>mass1;
                    cout<<"Enter mass of 2nd stellar body in grams."<<endl;
                    cin>>mass2;        
                    cout<<"Enter distance between the two bodies in cm."<<endl;
                    cin>>distnce;
                //calculate or map inputs to outputs
                    forceG=G*mass1*mass2/(pow(distnce,2));//calc for force due to gravity

                //Output the results

                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
               
            }break;
            
            case 5:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap4 ProjectProb 2"<<endl;
                cout<<"Calculating Clothing Size"<<endl<<endl;
                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //Declare and initialize variables
                    float height;      //height of user in inches
                    float weight;     //weight of user in pounds
                    int ageYear;     //age of user
                    float jckSize;  //size of jacket in inches
                    float wstSize; //size of waist in inches
                    float hatSize;//size of hat
                //Input Data
                    cout<<"Enter your height in inches."<<endl;
                    cin>>height;
                    cout<<"Enter your weight in pounds."<<endl;
                    cin>>weight;
                    cout<<"Enter your age in years."<<endl;
                    cin>>ageYear;


                //calculate or map inputs to outputs
                    hatSize=weight/height*2.9;

                    //jacket size adjustment
                        if  (ageYear<40){
                            jckSize=(height*weight/288);   
                        }else{
                            jckSize=(height*weight/288)+(.125*(ageYear-ageYear%10-30)/10);
                        }    
                    //waist size adjustment
                    if(ageYear<30){
                    wstSize=(weight/5.7);
                    }else{
                       wstSize=(weight/5.7)+(.1*((ageYear-28)/2-((ageYear-28)%2)));

                    }
                //Output the results
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Your hat size is "<<hatSize<< "inches"<<endl;
                    cout<<"Your waist size is "<<wstSize<<" inches."<<endl;
                    cout<<"Your jacket chest size is "<<jckSize<<" inches."<<endl;

                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
                
                }
                break;
            case 6:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 1"<<endl;
                cout<<"Converting Liters to Miles per Gallon"<<endl<<endl;

                //Global Constants
                const float CNVGAL=.264179f;//conversion factor gallons to liters

                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{
                //Declare and initialize variables
                float litrGas;   //liters of gas comsumed
                float milesTr;  //miles traveled on consumed gas
                float cnvGal;  //liters to gallons conversion
                float milGal; //miles per gallon


                //Input Data
                cout<<"How many liters of gas were consumed?"<<endl;
                cin>>litrGas;
                cout<<"How many miles were traveled on consumed gas?"<<endl;
                cin>>milesTr;

                //calculate or map inputs to outputs
                cnvGal=litrGas*CNVGAL;
                milGal=milesTr/cnvGal;

                //Output the results
                cout<<"Your car gets "<<milGal<<" miles per gallon"<<endl;

                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
               
            }break;
            
            case 7:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 5"<<endl;
                cout<<"Modified Gauging the Rate of Inflation"<<endl<<endl;
                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //Declare and initialize variables
                float priceYr;    //price of item 1 year ago
                float priceNw;   //price of item today
                float infRate;  //inflation rate
                float infPrc1; //price of item after 1 year
                float infPrc2;//price of item after 2 year2
                //Input Data
                cout<<"Enter the price of your item 1 year ago."<<endl;
                cin>>priceYr;
                cout<<"Enter the price of your item today."<<endl;
                cin>>priceNw;


                //calculate or map inputs to outputs
                infRate = (priceNw-priceYr)/priceYr*100;
                infPrc1 = (infRate*priceNw/100)+priceNw;
                infPrc2 = (infRate*infPrc1/100)+infPrc1;

                //set precision of infRate output
                cout<<fixed<<setprecision(1)<<showpoint;
                //Output the results
                cout<<"the inflation rate is approximately "<<infRate<<"%"<<endl;   

                //set precision of infRate output
                cout<<fixed<<setprecision(2)<<showpoint;

                //Additional outputs
                cout<<"The price of your item in a year will be $"<<infPrc1<<endl;
                cout<<"The price of your item in 2 years will be $"<<infPrc2<<endl;
                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
                
                }
                break;
            case 8:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap4 ProjectProb 3"<<endl;
                cout<<"Modified Calculating Clothing Size"<<endl<<endl;
                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //Declare and initialize variables
                    float height;      //height of user in inches
                    float weight;     //weight of user in pounds
                    int ageYear;     //age of user
                    float jckSize;  //size of jacket in inches
                    float wstSize; //size of waist in inches
                    float hatSize;//size of hat
                    int newAge;      //age of user after ten years
                    float jckTen;   //size of jacket in inches after ten years
                    float wstTen;  //size of waist in inches after ten years

                //Input Data
                    cout<<"Enter your height in inches."<<endl;
                    cin>>height;
                    cout<<"Enter your weight in pounds."<<endl;
                    cin>>weight;
                    cout<<"Enter your age in years."<<endl;
                    cin>>ageYear;

                //calculate or map inputs to outputs
                    hatSize=weight/height*2.9;

                //jacket size adjustment
                    if(ageYear<40){
                        jckSize=(height*weight/288); 

                   }else{

                        jckSize=(height*weight/288)+.125*((ageYear-ageYear%10-30)/10);


                   }     
                    //waist size adjustment
                    if(ageYear<30){
                        wstSize=(weight/5.7);
                    }else{

                        wstSize=(weight/5.7)+(.1*((ageYear-28)/2-((ageYear-28)%2)));

                    }
                //calculation of size after ten years
                    newAge=ageYear+10;

                //jacket size adjustment
                    if(newAge<40){
                        jckTen=(height*weight/288);   
                    }else{

                        jckTen=(height*weight/288)+(.125*((newAge-(newAge%10))-30)/10);
                    }    
                //waist size adjustment
                    if(newAge<30){
                    wstTen=(weight/5.7);
                    }else{

                       wstTen=(weight/5.7)+(.1*((newAge-28)/2-((newAge-28)%2)));

                    }

                //Output the results
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Your hat size is "<<hatSize<<" inches."<<endl;
                    cout<<"Your waist size is "<<wstSize<<" inches."<<endl;
                    cout<<"Your jacket size is "<<jckSize<<" inches."<<endl;
                    cout<<"Your waist size after ten years is "<<wstTen<<" inches."<<endl;
                    cout<<"Your jacket size after ten years is "<<jckTen<<" inches."<<endl;

                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
               
            }break;
            
            case 9:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 2"<<endl;
                cout<<"Modified Converting liters to miles per gallon"<<endl<<endl;

                //Global Constants
                const float CNVGAL=.264179f;//conversion factor gallons to liters

                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{
                //Declare and initialize variables
                float litGas1;   //liters of gas comsumed car1
                float mileTr1;  //miles traveled on consumed gas car1
                float litGas2;   //liters of gas comsumed car 2
                float mileTr2;  //miles traveled on consumed gas car2
                float cnvGal;  //liters to gallons conversion car 1
                float milGal; //miles per gallon car 1
                float cnvGal2;  //liters to gallons conversion car 2
                float milGal2; //miles per gallon car 2

                //Input Data
                cout<<"How many liters of gas were consumed by car 1?"<<endl;
                cin>>litGas1;
                cout<<"How many miles were traveled on consumed gas by car 1?"<<endl;
                cin>>mileTr1;
                cout<<"How many liters of gas were consumed by car 2?"<<endl;
                cin>>litGas2;
                cout<<"How many miles were traveled on consumed gas by car 2?"<<endl;
                cin>>mileTr2;

                //calculate or map inputs to outputs
                cnvGal=litGas1*CNVGAL;
                milGal=mileTr1/cnvGal;
                cnvGal2=litGas2*CNVGAL;
                milGal2=mileTr2/cnvGal2;

                //Output the results
                cout<<"Car 1 gets "<<milGal<<" miles per gallon."<<endl;
                cout<<"Car 2 gets "<<milGal2<<" miles per gallon."<<endl;

                //if else statement for better gas millage
                if(milGal>milGal2){
                    cout<<"Car 1 has better gas millage."<<endl;
                }else if(milGal==milGal2){
                    cout<<"Car 1 and Car 2 have the same gas millage."<<endl;
                }else{
                    cout<<"Car 2 has better gas millage."<<endl;
                }

                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
                
                }
                break;
            case 10:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Gaddis 6thEd Chap5 Prob 5"<<endl;
                cout<<"Ocean levels rising"<<endl<<endl;
                //Loop function and loop declared variables
                char loopFun; //loop function input

                do{

                //Declare and initialize variables
                    int year;     //year user is using program
                    float mmRisen=0.0f;//mm the ocean has risen
                    int yearPsd=0;//years passed
                    int i;      //loop function variable
                //Input Data
                    cout<<"What year is it?"<<endl;
                    cin>>year;
                //calculate or map inputs to outputs

                //Output the results
                    cout<<"Table of millimeters the ocean will rise over 25 years"<<endl;
                    cout<<"Years since "<<year<<"    mm ocean has risen"<<endl;
                    for(int i=0;i<25;i++){
                        yearPsd==yearPsd++;
                        mmRisen=1.5+mmRisen;

                        cout<<"      "<<yearPsd<<"                 "<<mmRisen<<endl;

                    }
                //end of loop
                cout<<"Enter Y if you would like to repeat the program."<<endl;
                cin>>loopFun;
                }while(loopFun=='Y'||loopFun=='y');
                
                
                    
                cout<<"----------------------------------"<<endl;
               
            }break;
        }}while(reDsply);
    
    
//calculate or map inputs to outputs

    
    
//Output the results
  
    
//Exit stage right

    return 0;
}

