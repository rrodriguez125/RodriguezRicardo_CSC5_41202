/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 13, 2016, 11:02 AM
 * Purpose: Calculate the square root by the babylonian/newton's method
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

//Declare and initialize variables
    float n;       //input the calue to obtain its square root
    float r, guess;//intermediate values which asymptotically approach sq root(n))
    
    
//Input Data
    cout<<"Input the calue to compute the sqrt of?"<<endl;
    cin>>n;
    
//Approximate the sqrt first pass
    guess=n/2;//only perform once to start process
    r=n/guess;
    guess = (guess+r)/2;
    
//calculate or map inputs to outputs

    
    
//Output the results
    cout<<"The input value       = "<<n<<endl;
    cout<<"the sqrt of "<<n<<"         = "<<sqrt(n)<<endl;
    cout<<"The first pass r      = "<<r<<endl;
    cout<<"The first pass guess  = "<<guess<<endl;
    
    
//Exit stage right make sure to close files
    r=n/guess;
    guess = (guess+r)/2; 

    cout<<"The second pass r     = "<<r<<endl;
    cout<<"The second pass guess = "<<guess<<endl;
    
    
//Exit stage right make sure to close files
    r=n/guess;
    guess = (guess+r)/2; 

    cout<<"The third pass r      = "<<r<<endl;
    cout<<"The third pass guess  = "<<guess<<endl;    

//Exit stage right make sure to close files
    r=n/guess;
    guess = (guess+r)/2; 

    cout<<"The fourth pass r     = "<<r<<endl;
    cout<<"The fourth pass guess = "<<guess<<endl;
            
    //Exit stage right make sure to close files
    r=n/guess;
    guess = (guess+r)/2; 

    cout<<"The fifth pass r      = "<<r<<endl;
    cout<<"The fifth pass guess  = "<<guess<<endl;
          
//Exit stage right make sure to close files
    r=n/guess;
    guess = (guess+r)/2; 

    cout<<"The sixth pass r      = "<<r<<endl;
    cout<<"The sixth pass guess  = "<<guess<<endl;
    return 0;
}

