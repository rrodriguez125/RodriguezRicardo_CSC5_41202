/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: convert liters per mile to gallons per mile
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
cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 1"<<endl;
cout<<"Converting Liters to Miles per Gallon"<<endl<<endl;

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
//Exit stage right

    return 0;
}