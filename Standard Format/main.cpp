/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Check out IDE
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
#include <cmath>   //Power/Exponential/Log functions
#include <cstdlib> //Rand and Srand functions
#include <ctime>   //Time function
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
float add(int, int, float);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    float value=0;
    
    add(2,3,value);
    cout<<"value = "<<value<<endl;
    
    
//Input Data

//calculate or map inputs to outputs

//Output the results

    
//Exit stage right

    return 0;
}
float add(int num1, int num2, float value){
value=value+1+num2;
return value+1;
}