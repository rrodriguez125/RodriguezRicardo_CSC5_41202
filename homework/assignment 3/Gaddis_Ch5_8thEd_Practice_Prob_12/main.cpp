/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Rock Paper Scissors with computer
 */

//System Libraries
#include <iostream>
#include <cstdlib> //rand function
#include <iomanip> 
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

   
    
//problem to solve   
cout<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
cout<<"Display a Temperature Table"<<endl<<endl;

  

//Declare and initialize variables
float slope=5.0f/9;             //slope of the line for temperature conversion
char intrcpt=-32;              //scaled 9/5 deg c
unsigned char c1=0,c2=100,f1=32,f2=212;//data pts of freezing and boiling

//loop to generate degree C and output table
cout<<"    Fahrenheit Celsius   Celsius"<<endl;
cout<<fixed<<setprecision(2)<<showpoint;

for(int f=f1;f<=f2;f++){
    float ceq=slope*(f+intrcpt);
    float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
    cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
}


//Input Data


//If statements for horoscope


//calculate or map inputs to outputs


//Output    

        
//Exit stage right

    return 0;
}

