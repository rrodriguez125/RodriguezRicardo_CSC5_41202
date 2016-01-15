/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 12, 2016, 5:52 pm
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CONVSEC = 3600/1; //sec/hr conversion
const float CONVMIN = 60/1; //min/hr conversion
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    float veltime, //users velocity
          invtime, //inverted velocity
          sectime, //pac in seconds per mile
            secondt;
            int   mintime; //pace in minutes per mile
    
    
//Input Data
    cout<<"What is your current velocity?"<<endl;
    cin>>veltime;
    
//calculate or map inputs to outputs
    sectime=(CONVSEC/veltime);
    mintime=CONVMIN/veltime;
    secondt=sectime -(mintime*CONVMIN);
    
//Output the results
    cout<<"Your pace is "<<mintime<<" minutes and "<<secondt<<
     " seconds per mile."<<endl;       

    //Exit stage right

    return 0;
}

