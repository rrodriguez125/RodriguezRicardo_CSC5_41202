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
const float CONV = 1/35273.92f; //tons/ounces conversion factor
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    float cereal, //input of cereal weight
          wtcer, //weight of cereal in tons
          numbox;// number of cereal boxes needed to weigh a ton
//Input Data
    cout<<"How much does your box of cereal weigh?"<<endl;
    cin>>cereal;
    
//calculate or map inputs to outputs
    wtcer=cereal*CONV;
    numbox=35273.92/wtcer;
    
    
//Output the results
    cout<<"Your cereal weighs "<<wtcer<<" tons."<<endl;
    cout<<"You would need "<<numbox<<" boxes of cereal to weigh 1 ton."<<endl;       
//Exit stage right

    return 0;
}

