/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 13, 2016, 9:00 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <cmath>


using namespace std;

//User Libraries



//Global Constants
 float CNVRATE = 12*100;


//Function Prototypes



//Execution Begins Here



int main(int argc, char** argv) {

    
    
//Declare and initialize variables
    float rate,loan,numb,payment,eqrate,subrate,interes;

    
//Input Data
    cout<<"input rate"<<endl;
    cin>>rate;
    cout<<"input loan"<<endl;
    cin>>loan;
    cout<<"input number of payments"<<endl;
    cin>>numb;
    
    
//calculate or map inputs to outputs
    subrate=rate/CNVRATE + 1;
    eqrate= pow ((subrate),numb);
    payment=(rate/CNVRATE*loan* eqrate)/(eqrate-1);
    interes=numb*payment-loan;
//Output the results
    cout<<"Your interest rate = "<<rate<<"%"<<endl;
    cout<<"Your loan amount is = "<<loan<<"$"<<endl;
    cout<<"Number of months for payment = "<<numb<<" months"<<endl;
    cout<<"Your payment = "<<payment<<"$"<<endl;
    cout<<"Your interest paid = "<<interes<<"$"<<endl;
    
//Exit stage right make sure to close files
    

    return 0;
}

