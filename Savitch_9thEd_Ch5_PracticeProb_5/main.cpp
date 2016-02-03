/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on February 3, 2016, 8:38 AM
 * Purpose: conversion of Pounds and Ounces to Kilograms and Grams
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void input(int&, int&);
void calc(int, int, int&, float&);
void output(int, float);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int   pounds, ounces; //user input pounds and ounces
    int   kiloG;          //total kilo grams
    float grams;          //total grams
    char  loopFun;        //do while loop variable
    
//do-while loop
    do{
//Input Data
    input(pounds, ounces);
//calculate or map inputs to outputs
    calc(pounds, ounces, kiloG, grams);
//Output the results    
    output(kiloG,grams);
    
//end of do-while loop
    cout<<"Enter Y if you would you like to repeat the program?"<<endl;
    cin>>loopFun;
    loopFun=toupper(loopFun);
    }while(loopFun=='Y');



    
//Exit stage right

    return 0;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                               input
//input
//lb = user input pounds
//ou = user input ounces
void input(int& lb, int& ou){
    cout<<"How many pounds have you measured?"<<endl;
    cin>>lb;
    cout<<"How many ounces have you measured?"<<endl;
    cin>>ou;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                calculation
//input
//lb = user input pounds
//ou = user input ounces
//output
//kiloG = number of kilograms
//grams = number of grams
void calc(int lb, int ou, int& kiloG, float& grams){
//declare variables
    const float CNVTLB=1/2.2046f;//conversion factor for pounds to Kg
    const float CNVTOU=1.0/16.0f;//converts ounces to pounds
    float ouPound;               //ounces converted to pounds
    float totalLb;               //total pounds including ounces
    float totalKg;               //total kilograms from total pounds
    float deciKg;                //decimal portion of total Kg value

    
    //calculation of pounds and ounces to Kg
    ouPound=ou*CNVTOU;
    totalLb=lb+ouPound;
    totalKg=totalLb*CNVTLB;
    
//calculation of separation of Kg and g
    deciKg=totalKg-static_cast<int>(totalKg);
    grams=deciKg*1000;
    kiloG=totalKg;
    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                calculation
//input
//kiloG = number of kilograms
//grams = number of grams
void output(int kiloG, float grams){
    
        cout<<"The number of Kg = "<<kiloG<<endl;
        cout<<"The number of g = "<<grams<<endl;
}