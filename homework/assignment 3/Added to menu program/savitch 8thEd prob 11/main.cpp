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

//Execution Begins Here
int main(int argc, char** argv) {
   //declare and initialize variables for etox
    float etox=1,x;                //e^x
    const unsigned char nTerms=13;//

//Input the value x
    cout<<"Input x of e^x computation."<<endl;
    cin>>x;

//Calculate e^x
for(int n=1;n<=nTerms;n++){   
    //Declare 
    unsigned int factN=1;//N and N
    //calc factorial
    for(int i=1;i<=n; i++) {
        factN*=i;
    }
    //calc 
    etox+=pow(x,n)/factN;
    
//output
    cout<<"the exact value of e^"<<x<<" = "<< exp(x)<<endl;
    cout<<"the approx value of e^"<<x<<"="<<etox<<endl<<endl;
    cin>>n;
    
//Exit stage right
}
    return 0;}

