/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 5, 2016, 10:18 AM
 * Purpose: Check out IDE
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
    float         payRate=1e1f;//payrate in $/hr
    unsigned char hrsWrkd=40;  //Hours worked (hrs)
    
//Input Data
    
    
//calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;
    
    
//Output the results
    cout<<"Pay Rate     = $"<<payRate<<"/hr"<<endl;
    cout<<"Hours Worked =  "<<static_cast<int>(hrsWrkd)<<"hrs"<<endl;
    cout<<"Pay Check    = $"<<payChk<<endl;

    
//Exit stage right

    return 0;
}

