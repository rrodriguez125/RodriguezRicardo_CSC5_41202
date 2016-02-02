/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Separating view from model our first array
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants
const char PERCENT=100;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    float pv=100; //present value in dollars
    int iRate=6;  //interest rate in percent %
    int nComp=12; //number of compounding periods in years
    float fv=pv;     //future value
    
    
//Input Data

//calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
//Output the results
    cout<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        int ifv=(fv+.005)*PERCENT;//shift two places
        fv=static_cast<float>(ifv)/PERCENT;//convert back
        cout<<setw(4)<<year<<setw(7)<<fv<<endl;;
        fv*=((1+static_cast<float>(iRate))/PERCENT);
    }
    
    
    
    //the mvc convept separates the view from the model
    //delcare array and initialize
    float balance[nComp+1];
    balance[0]=pv;
    
            
    //calculate array ie model
    for(int year=0;year<=nComp;year++){
        int ifv=balance[year]*PERCENT;//shift two places
        balance[year]=static_cast<float>(ifv)/PERCENT;//convert back
        balance[year+1]=balance[year]*((1+static_cast<float>(iRate))/PERCENT);
    }
    
    
    //display or view of the model
            cout<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){

        cout<<setw(4)<<year<<setw(7)<<fv<<endl;;
    }
    
//Exit stage right

    return 0;
}