/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Check out IDE
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes

void prac(int, int);


//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int num1;
    int num2;
    
    
//Input Data
    cout<<"a+b=?"<<endl;
    cout<<"Input a"<<endl;
    cin>>num1;
    cout<<"Input b"<<endl;
    cin>>num2;
    
//practic
    
    prac(num1, num2);
  
//calculate or map inputs to outputs

//Output the results

    
//Exit stage right

    return 0;
}
//******************************************************************************
void prac(int a, int b){
    int C;
    for(int i=0;i<5;i++){
    C=a+b;
            cout<<a<<" + "<<b<<" = "<<C<<endl;
            a++;
            b++;
    }}