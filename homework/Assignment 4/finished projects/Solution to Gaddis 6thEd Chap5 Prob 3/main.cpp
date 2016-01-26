/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Calculating Ocean Levels Rising
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
cout<<"Solution to Gaddis 6thEd Chap5 Prob 3"<<endl;
cout<<"Ocean levels rising"<<endl<<endl;
//Loop function and loop declared variables
char loopFun; //loop function input

do{

//Declare and initialize variables
    int year;     //year user is using program
    float mmRisen=0.0f;//mm the ocean has risen
    int yearPsd=0;//years passed
    int i;      //loop function variable
//Input Data
    cout<<"What year is it?"<<endl;
    cin>>year;
//calculate or map inputs to outputs

//Output the results
    cout<<"Table of millimeters the ocean will rise over 25 years"<<endl;
    cout<<"Years since "<<year<<"    mm ocean has risen"<<endl;
    for(int i=0;i<25;i++){
        yearPsd==yearPsd++;
        mmRisen=1.5+mmRisen;
      
        cout<<"      "<<yearPsd<<"                 "<<mmRisen<<endl;
        
    }
//end of loop
cout<<"Enter Y if you would like to repeat the program."<<endl;
cin>>loopFun;
}while(loopFun=='Y'||loopFun=='y');   
//Exit stage right

    return 0;
}