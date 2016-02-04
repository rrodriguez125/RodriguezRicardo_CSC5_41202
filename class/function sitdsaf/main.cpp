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
int input(int&, int&);
int prac(int, int);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int num1,num2;
    
    
//Input Data
input(num1,num2);

//calculate or map inputs to outputs
cout<<"num1 = "<<num1<<" num2 = "<<num2<<endl;
//Output the results

cout<<"The addition of your two numbers is "<<prac(num1,num2)<<endl;
//Exit stage right

    return 0;
}

//******************************************************************************
int input(int& num1, int& num2){
    cout<<"Input a number."<<endl;
            cin>>num1;
    cout<<"Input a number."<<endl;
            cin>>num2;

}
//******************************************************************************
//******************************************************************************
int prac(int num1, int num2){
    int num3;
    
    num3=num1+num2;
    return num3;
    
}