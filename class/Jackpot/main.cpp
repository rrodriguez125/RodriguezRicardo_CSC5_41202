/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 11, 2016, 9:00 AM
 * Purpose: Truth Table and Display SWAPS
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
    // your code goes here
	float jackpot,lumpsum,afteTax,marrid;
	float pen = .62,taxpen=.52,marpen=.5;
	
	//input
	cout<<"How much is the jackpot in millions?"<<endl;
	cin>>jackpot;
        
        //calculations
	lumpsum =pen*jackpot;
	afteTax = taxpen*lumpsum;
	marrid = marpen*afteTax;
	
	
	cout<<"You will recieve a lumpsum of "<<lumpsum<<" million"<<endl;
	cout<<"After tax you will get "<<afteTax<<" million"<<endl;
	cout<<"If you are married you will get "<<marrid<<" million"<<endl;
//Input Data
   
    
    
//calculate or map inputs to outputs
            
    
    
//Output the results
    
//EExit stage right make sure to close files
    

    return 0;
}

