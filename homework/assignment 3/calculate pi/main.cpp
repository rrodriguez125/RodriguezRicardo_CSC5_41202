/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 20, 2016, 8:35 AM
 * Purpose: Calculate PI
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    
//declare and initialize variables 
    float apprxPI=1;    //approximate value of PI to start
    unsigned int nTerms;//number of terms to limit sum of PI
    char sign=-1;
    
 //input
    cout<<endl<<"solition to savitch ">>endl;
    cout<<"title of question"<<endl;
    
//output
    cout<<"Input number of terms to approc PI"<<endl;
    cin>>nTerms;
 //calculation
    for(int i=2,j=3;i<=mTerms;i++,j+=2){
        apprxPI+=(sign/static_cast<float>(j));
        sign*=-1}

 //output results
    cout<<"the value of PI is "<<  <<endl;
    
//Exit stage right
}
    return 0;}

