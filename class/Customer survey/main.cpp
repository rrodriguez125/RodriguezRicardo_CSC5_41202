/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 6, 2016, 9:35 AM
 * Purpose: Energy Drink Survey
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char cnvperc=100;

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    unsigned short cstsur=16500;//surveyed customers
    unsigned char pedrnk=15;  //purchase energy drinks
    unsigned char pcdrnk=58; //citrus flavored drinks
    unsigned short nedrnk, ncdrnk; //number of energy and citrus energy drink
//Input Data
    
    
//calculate or map inputs to outputs
    nedrnk = cstsur* pedrnk/cnvperc;
    ncdrnk = nedrnk * pcdrnk/cnvperc;
    
    
//Output the results
    cout<<"Number of customers surveyed = "<<cstsur<<endl;
    cout<<"Percent of energy drinkers = "<<static_cast<int>(pedrnk)<<"%"<<endl;
    cout<<"Percent of citrus energy drinkers = "<<static_cast<int>(pcdrnk)<<"%"<<endl;
    cout<<"Number of energy drinkers = "<<nedrnk<<endl;
    cout<<"Number of citrus energy drinkers = "<<ncdrnk<<endl;
    
//EExit stage right

    return 0;
}

