/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on February 3, 2016, 10:46 AM
 * Purpose: Conversion of Kilograms and Grams to Pounds and Ounces
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
    int   kiloG, grams;   //user input Kilograms and grams
    char  loopFun;        //do while loop variable
    int   pounds;         //total pounds
    float ounces;         //total ounces
//do-while loop
    do{
//Input Data
    input(kiloG, grams);
//calculate or map inputs to outputs
    calc(kiloG, grams,pounds,ounces);
//Output the results    
    output(pounds,ounces);
    
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
//Kg = user input kilograms
//grams = user input grams
void input(int& kg, int& grams){
    cout<<"How many kilograms have you measured?"<<endl;
    cin>>kg;
    cout<<"How many grams have you measured?"<<endl;
    cin>>grams;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                calculation
//input
//Kilo = user input kilograms
//grams = user input grams
//output
//pounds = number of pounds
//ounces = number of ounces
void calc(int kilo, int grams, int& pounds, float& ounces){
//declare variables
    const float CNVTKG=2.2046f;//conversion factor for Kg to Lbs
    const float CNVTOU=16.0f;  //converts pounds to ounces
    float       gramsKg;       //grams converted to kilograms
    float       totalKg;       //total kilograms
    float       totalLb;       //total pounds
    float       deciLb;        //decimal portion of total pounds
    
//calculation of kilograms and grams to pounds
    gramsKg=grams/1000;
    totalKg=kilo+gramsKg;
    totalLb=totalKg*CNVTKG;

    
//calculation of separation of pounds and ounces
    deciLb=totalLb-static_cast<int>(totalLb);
    ounces=deciLb*CNVTOU;
    pounds=totalLb;
    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                calculation
//input
//pounds = number of pounds
//ounces = number of ounces
void output(int pounds, float ounces){
    
        cout<<"The number of pounds = "<<pounds<<endl;
        cout<<"The number of ounces = "<<ounces<<endl;
}