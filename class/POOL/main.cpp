/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 11, 2016, 9:00 AM
 * Purpose: 
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
    int rate=800; //dollars per hour
    int hrs,cost;
    
//Input Data
    cout<<"How many hours of work estimated to complete the pool?"<<endl;
    cin>>hrs;
    
    if(hrs>8)
        cost=hrs*rate*1.5;
        else if (hrs>=5)
            cost =rate*hrs;
        else if (hrs<5)
            cost = 4000;
    
    cout<<"It will cost "<<cost<<"$ to make your pool."<<endl;
//calculate or map inputs to outputs
            
    
    
   
//Output the results
    
//Exit stage right make sure to close files
    

    return 0;
}

