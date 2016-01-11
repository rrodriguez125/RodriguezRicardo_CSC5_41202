/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 5, 2016, 11:55 AM
 * Purpose: Homework Problem 4
 */

//System Libraries
#include <iostream>
#include <cstdlib>//random function lib
#include <cmath>//math functions
#include <ctime>///time to set the random seed
#include <iomanip>//formal lib
#include <fstream>//reading and writing to a file
using namespace std;

//User Libraries

//Global Constants
const float GRAVITY = 32.174f;//sea level earth acceleration in ft/sec^2

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

//Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
//Declare and initialize variables
    float drptime,distance; //time is sec, distance in ft
    ofstream out; //reading/writing to a file--declared a file stream output
   
    
//Input Data, time with randome number and opening a file
    drptime=rand()%11+10; //range between 10-20 sec
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    
//calculate or map inputs to outputs
            distance=0.5f*GRAVITY*pow(drptime,2);
    
    
//Output the results
    cout<<showpoint;
    cout<<"Drop time = "<<drptime<<" sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint; //three decimal places in distance
    cout<<"Free-fall distance = "<<setw(9)<<distance<<" ft"<<endl;
   
    out<<showpoint;
    out<<"Drop time = "<<drptime<<" sec"<<endl;
    out<<fixed<<setprecision(3)<<showpoint; //three decimal places in distance
    out<<"Free-fall distance = "<<setw(9)<<distance<<" ft"<<endl;
    
//EExit stage right make sure to close files
    out.close();

    return 0;
}

