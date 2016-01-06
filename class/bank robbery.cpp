/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 5, 2016, 11:55 AM
 * Purpose: Bank Robbery
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char wtbill=1;//weight in grams
const float cnvlbs=1.0f/453.5f;//conversion from grams to pounds
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    unsigned int  amtstl;//amount to steal
    unsigned short denom;//denomination of bills
    unsigned char wtpers=80;//weight each person can carry
    unsigned char nperps;//number of perps

//Input Data
cout<<"How much money would you like to aquire?"<<endl;
cin>>amtstl;
cout<<"What is the bill denomination desired?"<<endl;
cin>>denom;    
//calculate or map inputs to outputs
nperps = cnvlbs*amtstl*wtbill/denom/wtpers+1;
    
//Output the results
cout<<"Amount Desired = $"<<amtstl<<endl;
cout<<"denomination desired = $"<<denom<<endl;
cout"Number of individuals required for the job =";
cout<<static_cast<int>(nperps)<<endl;

    
//Exit stage right

    return 0;
}

