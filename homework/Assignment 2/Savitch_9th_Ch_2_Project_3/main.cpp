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
const float PAYINCR=.076;

//Function Prototypes


//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    float anulPay, //initial anual pay
          retoPay, //retroactive pay for 6 months
          NewAnul, //new anual pay
          montPay, //new monthly pay
          retrMon; //number of retroactive months
//Input Data
    cout<<"What is your current annual pay?"<<endl;
    cin>>anulPay;
    cout<<"Enter the number of months of retroactive pay."<<endl;
    cin>>retrMon;

//calculate or map inputs to outputs
    retoPay = (anulPay/12)*PAYINCR*retrMon+(anulPay/12)*retrMon;
    NewAnul = anulPay*PAYINCR+anulPay;
    montPay = NewAnul/12;        
    
//Output the results
    cout<<"Your retroactive pay = "<<retoPay<<"$"<<endl;
    cout<<"Your new annual pay = "<<NewAnul<<"$"<<endl;
    cout<<"Your new monthly pay = "<<montPay<<"$"<<endl;
//Exit stage right

    
    
    return 0;
}

