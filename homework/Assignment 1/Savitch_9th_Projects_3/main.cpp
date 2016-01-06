/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 5, 2016, 10:18 AM
 * Purpose: Check out IDE
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    int quart, dime, nick, value;
    
//Input Data
    
    
//calculate or map inputs to outputs
    
    
    
//Output the results
    cout<< "press return after entering a number."<<endl;
    cout<< "Enter the number of quarters you have:"<<endl;
    cin>> quart;
    cout<< "Enter the number of dimes you have:"<<endl;
    cin>> dime;
    cout<<"Enter the number of nickels you have:"<<endl;
    cin>> nick;
    value = 25 * quart + 10 * dime + 5 * nick;
    cout<<"The value of your total change is "<<value<<" cents."<<endl;
    cout<<"This is the end of the program."<<endl;
            
            
//Exit stage right

    return 0;
}

