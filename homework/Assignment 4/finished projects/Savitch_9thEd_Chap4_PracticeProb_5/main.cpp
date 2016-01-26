/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Modified Gauging the Rate of Inflation
 */

//System Libraries
#include <iostream>
#include <iomanip> 

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//problem to solve   
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
//Exit stage right

    return 0;
}