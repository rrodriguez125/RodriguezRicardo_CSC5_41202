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
void problem4();
void problem5();
void input6(int&, int&);
void calc6(int, int, int&, float&);
void output6(int, float);

//Execution Begins Here
int main(int argc, char** argv) {
 
    
//Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to Display
    bool reDsply=true;//exit program
    


//Menu to display solution
    do{
        //Input Data (problem to display)
    cout<<"Assignment 5 Problem Set"<<endl;
    cout<<"Type 1 to Display Problem 1"<<endl;
    cout<<"Type 2 to Display Problem 2"<<endl;
    cout<<"Type 3 to Display Problem 3"<<endl;
    cout<<"Type 4 to Display Problem 4"<<endl;
    cout<<"Type 5 to Display Problem 5"<<endl;
    cout<<"Type 6 to Display Savitch_9thEd_Ch5_PracticeProb_6"<<endl;
    cout<<"Type anything else to exit"<<endl<<endl;
    cin>>nSoltn;
   
    
    
        //solutions to all problems
        switch(nSoltn){
            case 1:
                ;break;
           
            
            case 2:
                ;break;
           
            
            case 3:
                ;break;
           
            
            case 4:
                ;break;
           
            
            case 5:
                ;break;

            
            
            
            case 6:{
                cout<<"Savitch_9thEd_Ch5_PracticeProb_6"<<endl;
                cout<<"Converting Kilograms and Grams to Pounds and Ounces"
            //Declare and initialize variables
                int   kiloG, grams;   //user input Kilograms and grams
                char  loopFun;        //do while loop variable
                int   pounds;         //total pounds
                float ounces;         //total ounces
            //do-while loop
                do{
            //Input Data
                input6(kiloG, grams);
            //calculate or map inputs to outputs
                calc6(kiloG, grams,pounds,ounces);
            //Output the results    
                output6(pounds,ounces);

            //end of do-while loop
                cout<<"Enter Y if you would you like to repeat the program?"<<endl;
                cin>>loopFun;
                loopFun=toupper(loopFun);
                }while(loopFun=='Y');




            //Exit stage right

                return 0;
            };break;
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

//666666666666666666666666666666666666666666666666666666666666666666666666666666
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                               input
//input
//Kg = user input kilograms
//grams = user input grams
void input6(int& kg, int& grams){
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
void calc6(int kilo, int grams, int& pounds, float& ounces){
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
void output6(int pounds, float ounces){
    
        cout<<"The number of pounds = "<<pounds<<endl;
        cout<<"The number of ounces = "<<ounces<<endl;
}