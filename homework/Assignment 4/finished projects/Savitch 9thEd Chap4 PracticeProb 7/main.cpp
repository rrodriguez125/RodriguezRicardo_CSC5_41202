/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Calculate Gravitational Force of Two Stellar Bodies
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8;//gravitatonal constant in cm^3/(g*sec^2))
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//problem to solve   
cout<<"Solution to Savitch 9thEd Chap4 PracticeProb 7"<<endl;
cout<<"Calculate Gravitational Force of Two Stellar Bodies"<<endl<<endl;
//Global Constants
const float G=6.673e-8;//gravitatonal constant in cm^3/(g*sec^2))

//Loop function and loop declared variables
char loopFun; //loop function input

do{

//Declare and initialize variables
    float mass1;    //mass of body 1
    float mass2;   //mass of body 2
    float distnce;//distance between the two bodies
    float forceG;//force due to gravity on stellar bodies
//Input Data
    cout<<"Enter mass of 1st stellar body in grams."<<endl;
    cin>>mass1;
    cout<<"Enter mass of 2nd stellar body in grams."<<endl;
    cin>>mass2;        
    cout<<"Enter distance between the two bodies in cm."<<endl;
    cin>>distnce;
//calculate or map inputs to outputs
    forceG=G*mass1*mass2/(pow(distnce,2));//calc for force due to gravity
    
//Output the results
    
//end of loop
cout<<"Enter Y if you would like to repeat the program."<<endl;
cin>>loopFun;
}while(loopFun=='Y'||loopFun=='y');   
//Exit stage right

    return 0;
}