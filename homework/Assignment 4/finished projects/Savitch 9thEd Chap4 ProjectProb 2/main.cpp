/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Calculate clothing size
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//problem to solve   
cout<<"Solution to Savitch 9thEd Chap4 ProjectProb 2"<<endl;
cout<<"Calculating Clothing Size"<<endl<<endl;
//Loop function and loop declared variables
char loopFun; //loop function input

do{

//Declare and initialize variables
    float height;      //height of user in inches
    float weight;     //weight of user in pounds
    int ageYear;     //age of user
    float jckSize;  //size of jacket in inches
    float wstSize; //size of waist in inches
    float hatSize;//size of hat
//Input Data
    cout<<"Enter your height in inches."<<endl;
    cin>>height;
    cout<<"Enter your weight in pounds."<<endl;
    cin>>weight;
    cout<<"Enter your age in years."<<endl;
    cin>>ageYear;
    

//calculate or map inputs to outputs
    hatSize=weight/height*2.9;
    
    //jacket size adjustment
        if  (ageYear<40){
            jckSize=(height*weight/288);   
        }else{
            jckSize=(height*weight/288)+(.125*(ageYear-ageYear%10-30)/10);
        }    
    //waist size adjustment
    if(ageYear<30){
    wstSize=(weight/5.7);
    }else{
       wstSize=(weight/5.7)+(.1*((ageYear-28)/2-((ageYear-28)%2)));
        
    }
//Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your hat size is "<<hatSize<< "inches"<<endl;
    cout<<"Your waist size is "<<wstSize<<" inches."<<endl;
    cout<<"Your jacket chest size is "<<jckSize<<" inches."<<endl;
    
//end of loop
cout<<"Enter Y if you would like to repeat the program."<<endl;
cin>>loopFun;
}while(loopFun=='Y'||loopFun=='y');   
//Exit stage right

    return 0;
}