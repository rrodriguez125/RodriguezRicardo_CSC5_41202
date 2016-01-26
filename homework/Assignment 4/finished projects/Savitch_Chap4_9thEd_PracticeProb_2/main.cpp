/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:Modified convert liters per mile to gallons per mile
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float CNVGAL=.264179f;//conversion factor gallons to liters

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//problem to solve   
cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 2"<<endl;
cout<<"Modified Converting liters to miles per gallon"<<endl<<endl;

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
//Exit stage right

    return 0;
}