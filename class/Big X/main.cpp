/* 
    File:   main.cpp
    Author: Dr. Mark E. Lehr
    Created on February 2nd, 2016, 8:20 AM
    Purpose:  How big on an X do we want to print
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants
cont int COL=50


//Function prototypes
void fillAry(int [][COL],int);
void prntAry(int [][COL],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare variables
    const int ROW=50;
    int array[ROW],[COL];
    //Fill the array with random 2 digit numbers

    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Test finding the smallest element in the list
    markSrt(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Exit stage right
    return 0;
}



//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Array
//Inputs:
//  a->List
//  ROW->number of rows in array
//  perLine->How many list elements per line to print
//Outputs:
//  a->Printed List
//******************************************************************************
void fillAry(int a[],int n,int perLine){
    //Loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
