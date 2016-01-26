/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Calculating membership fee increase
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//problem to solve   
cout<<"Solution to Gaddis 6thEd Chap5 Prob 5"<<endl;
cout<<"Membership Fee Increase"<<endl<<endl;

//Loop function and loop declared variables
char loopFun; //loop function input

do{

//local constant
const float MEMINCR=.04f;//membership fee increase

//Declare and initialize variables
    float memFee=2500.0f;//mm the ocean has risen
    int yearPsd=0;//years passed
    int i;      //loop function variable
//Input Data

//calculate or map inputs to outputs

//Output the results
    cout<<"Table of membership fee increase over next six years"<<endl;
    cout<<"Years         Fee Price After Increase"<<endl;
    for(int i=0;i<6;i++){
        yearPsd==yearPsd++;
        memFee=MEMINCR*memFee+memFee;
      
        cout<<"      "<<yearPsd<<"                 "<<memFee<<endl;
        
    }
//end of loop
cout<<"Enter Y if you would like to repeat the program."<<endl;
cin>>loopFun;
}while(loopFun=='Y'||loopFun=='y');   
//Exit stage right

    return 0;
}