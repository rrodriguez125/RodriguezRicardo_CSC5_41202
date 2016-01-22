/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 29, 2016, 9:00 AM
 * Purpose: Buoyancy Force
 */

//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants
const float SPCWT=62.4f;             //specific weight of water in lb/ft^3
const float FRACTN=1.33333333;
const double PI= 3.141592653589793; //the value of Pi
//Function Prototypes


//Execution Begins Here

int main(int argc, char** argv) {
  
//Declare and initialize variables
float wtSphr,  //weight of sphere
      rdSphr, //radius of sphere
      vlSphr,//volume of sphere      
      Fb;   //Buoyancy force
//input
    cout<<"Input the weight of the sphere in pounds."<<endl;
    cin>>wtSphr;
    cout<<"Input the radius of the sphere in feet."<<endl;
    cin>>rdSphr;
    
//calculate or map inputs to outputs
    vlSphr=FRACTN*PI*pow(rdSphr,3.0);
    Fb=vlSphr*SPCWT;
//Output the results
    cout<<"The volume of your sphere is "<<vlSphr<<" ft^3"<<endl;
    cout<<"The weight of your sphere is "<<wtSphr<<" lbs"<<endl;
    cout<<"The buoyancy force associated with your sphere is "<<Fb<<endl;
if(Fb>=wtSphr){
    cout<<"Your sphere will float."<<endl;
}else{
    cout<<"Your Sphere will sink."<<endl;
}    
//EExit stage right make sure to close files
    

    return 0;
}

