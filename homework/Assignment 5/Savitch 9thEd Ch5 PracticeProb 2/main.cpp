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
const float CVNMETR=.3048f;//meter to foot conversion
const float CNVINCH=1.0f/12.0f;//inches to feet conversion

//Function Prototypes
void input(int&, int&);
void calc(float, float);


//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int feet, inches;
    float inchFt;
    
    
//Input Data
    input(feet, inches);
    calc(feet, inches);
    
//calculate or map inputs to outputs

//Output the results

    
//Exit stage right

    return 0;
}
//******************************************************************************
//                               input
void input(int& ft, int& inch){
    cout<<"How many feet have you measured?"<<endl;
    cin>>ft;
    cout<<"How many inches have you measured?"<<endl;
    cin>>inch;
}

//******************************************************************************
//                                calculation
void calc(float ft, float inch){
//declare variables
    const float CVNMETR=.3048f;//meter to foot conversion
    const float CVNINCH=1.0f/12.0f;//inches to feet conversion
    float inchFt,newFeet, numCent, numMetr,cen1;
    float meter;
    
//calculation    
    inchFt=inch*CVNINCH;
    newFeet=ft+inchFt;
    meter=newFeet*CVNMETR;
    
if(meter>1){
    cen1=meter/static_cast<int>(meter);
            numMetr=meter-cen1;
            numCent=cen1*100;

            
cout<<"number of meters with decimal = "<<meter<<endl;
cout<<"cen1 = "<<cen1<<endl;
cout<<"Inches in feet = "<<inchFt<<endl;
cout<<"total feet = "<<newFeet<<endl;
cout<<"number of meters = "<<numMetr<<endl;
cout<<"number of Centimeters = "<<numCent<<endl;

}else {
    numCent=meter*100;
            
            cout<<"Inches in feet = "<<inchFt<<endl;
            cout<<"total feet = "<<newFeet<<endl;
            cout<<"number of meters = 0"<<endl;
            cout<<"number of Centimeters = "<<numCent<<endl;
}
}