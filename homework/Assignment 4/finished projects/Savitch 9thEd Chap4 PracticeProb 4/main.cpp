/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Gauging the Rate of Inflation
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
//Exit stage right

    return 0;
}