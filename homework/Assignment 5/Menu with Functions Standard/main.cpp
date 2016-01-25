/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 19, 2016, 8:35 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

void problem1();
void problem2();
void problem3();

//Execution Begins Here
int main(int argc, char** argv) {
 
    
//Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to Display
    bool reDsply=true;//exit program
    


//Menu to display solution
    do{
        //Input Data (problem to display)
    cout<<"Assignment 3 Problem Set"<<endl;
    cout<<"Type 1 to Display Problem 1"<<endl;
    cout<<"Type 2 to Display Problem 2"<<endl;
    cout<<"Type 3 to Display Problem 3"<<endl;
    cout<<"Type anything else to exit"<<endl<<endl;
    cin>>nSoltn;
   
    
    
        //solutions to all problems
        switch(nSoltn){
            case 1: problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            default:{ 
            cout<<"Exiting the Program"<<endl;
            reDsply=false;}
    }
        
}while(reDsply);
    
    
//calculate or map inputs to outputs

    
    
//Output the results
  
    
//Exit stage right

    return 0;
}

//*****************************************************************************
//************************************ problem1  *******************************
//*****************************************************************************
void problem1(){
    cout<<"this is where we would copy paste problem 1"<<endl;
}
//*****************************************************************************
//************************************ problem2  *******************************
//*****************************************************************************
void problem2(){
    cout<<"this is where we would copy paste problem 2"<<endl;
}
//*****************************************************************************
//************************************ problem3  *******************************
//*****************************************************************************
void problem3(){
    cout<<"this is where we would copy paste problem 3"<<endl;
    }  