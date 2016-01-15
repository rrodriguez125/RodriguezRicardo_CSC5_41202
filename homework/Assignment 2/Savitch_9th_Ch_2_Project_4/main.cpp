/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 13, 2016, 6:52 pm
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
float const CNVRATE = .01;

//Function Prototypes


//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    float desLoan,
          intRate,
          decRate,
          loanDur,
          faceVal;
    
//Input Data
    cout<<"How much is your desired loan?"<<endl;
    cin>>desLoan;
    cout<<"What is the interest rate in percent?"<<endl;
    cin>>intRate;
    cout<<"What is the loan duration in years?"<<endl;
    cin>>loanDur;

//calculate or map inputs to outputs
    decRate = intRate*CNVRATE;
    faceVal = desLoan/(1-decRate*loanDur);
//Output the results
    cout<<"Interest rate = "<<decRate<<endl;
    cout<<"The loans initial value to recieve "<<desLoan<<"$ is "<<faceVal<<"$"<<endl;
    
//Exit stage right

    
    
    return 0;
}

