/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 5, 2016, 10:18 AM
 * Purpose: Military Budget Percentage
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char cnvperc = 100

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    float milbud=600e9f;//military budget
    float fedbud=3.8e12f;  //federal budget
    float percmil; //percentage of military budget
    
//Input Data
    
    
//calculate or map inputs to outputs
    percmil=milbud/fedbud*cnvperc
    
    
//Output the results
    cout<<"The military budget = $"<<milbud<<endl;
    cout<<"The federal budget = $"<<fedbud<<endl;
    cout<<"The percentage of the Federa; Budget attributed to the military = ";
    cout<<percmil<<" *%"<<endl;

    
//EExit stage right

    return 0;
}

