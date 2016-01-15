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


//Function Prototypes


//Execution Begins Here


int main(int argc, char** argv) {

//Declare and initialize variables
   signed int number1,number2,number3,number4,number5,number6,number7,number8,number9,
        numbeR1,sumAll,posNumb,negNumb,
        numb1,numb2,numb3,numb4,numb5,numb6,numb7,numb8,numb9,numb10;  
//Input Data
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number1;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number2;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number3;  
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number4;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number5;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number6;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number7;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number8;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>number9;
    cout<<"Enter any number between -9 and 9."<<endl;
    cin>>numbeR1;
    
//calculate or map inputs to outputs
    sumAll=number1+number2+number3+number4+number5+number6+number7+number8+
           number9+numbeR1;
    if(number1>0)
        numb1=0;
    if(number2>0)
        numb2=0;
    if(number3>0)
        numb3=0;
    if(number4>0)
        numb4=0;
    if(number5>0)
        numb5=0;
    if(number6>0)
        numb6=0;
    if(number7>0)
        numb7=0;
    if(number8>0)
        numb8=0;
    if(number9>0)
        numb9=0;
    if(numbeR1>0)
        numb10=0;
    negNumb=numb1+numb2+numb3+numb4+numb5+numb6+numb7+numb8+numb9+numb10;
//Output the results
    cout<<"The sum of all the number = "<<sumAll<<endl;
    cout<<"The sum of all numbers greater than zero = "<<posNumb<<endl;
    cout<<"The sum of all numbers less than 1 = "<<static_cast<int>(negNumb)<<endl;
//Exit stage right
   
    
    
    return 0;
}

