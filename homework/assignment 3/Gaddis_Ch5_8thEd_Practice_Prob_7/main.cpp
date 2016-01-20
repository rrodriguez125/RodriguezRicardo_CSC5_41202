/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 11:18 AM
 * Purpose: Table of Salary Doubling Starting at a Penny
 */

//System Libraries
#include <iostream>
#include <cstdlib> //rand function
#include <iomanip> 
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

   
    
//problem to solve   
cout<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
cout<<"Salary Doubling"<<endl<<endl;

  

//Declare and initialize variables
unsigned int salary=1; //salary starting at a penny
float totPay=salary;         //total pay by summing salaries


//loop to generate the salary table and total pay
cout<<"  Day        $Salary         $Total"<<endl;
cout<<fixed<<setprecision(2)<<showpoint;
cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
for(int day=2;day<=31;day++){
    salary*=2;
    totPay+=salary;
    cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
}



//Input Data


//If statements for horoscope


//calculate or map inputs to outputs


//Output    

        
//Exit stage right

    return 0;
}

