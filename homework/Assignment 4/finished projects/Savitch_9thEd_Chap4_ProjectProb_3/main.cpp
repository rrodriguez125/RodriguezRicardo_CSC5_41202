/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: modified calculate clothing size
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//problem to solve   
cout<<"Solution to Savitch 9thEd Chap4 ProjectProb 3"<<endl;
cout<<"Modified Calculating Clothing Size"<<endl<<endl;
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
    int newAge;      //age of user after ten years
    float jckTen;   //size of jacket in inches after ten years
    float wstTen;  //size of waist in inches after ten years
    
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
    if(ageYear<40){
        jckSize=(height*weight/288); 
       
   }else{
        
        jckSize=(height*weight/288)+.125*((ageYear-ageYear%10-30)/10);
        
        
   }     
    //waist size adjustment
    if(ageYear<30){
        wstSize=(weight/5.7);
    }else{
        
        wstSize=(weight/5.7)+(.1*((ageYear-28)/2-((ageYear-28)%2)));
        
    }
//calculation of size after ten years
    newAge=ageYear+10;
    
//jacket size adjustment
    if(newAge<40){
        jckTen=(height*weight/288);   
    }else{
        
        jckTen=(height*weight/288)+(.125*((newAge-(newAge%10))-30)/10);
    }    
//waist size adjustment
    if(newAge<30){
    wstTen=(weight/5.7);
    }else{
       
       wstTen=(weight/5.7)+(.1*((newAge-28)/2-((newAge-28)%2)));
        
    }
    
//Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your hat size is "<<hatSize<<" inches."<<endl;
    cout<<"Your waist size is "<<wstSize<<" inches."<<endl;
    cout<<"Your jacket size is "<<jckSize<<" inches."<<endl;
    cout<<"Your waist size after ten years is "<<wstTen<<" inches."<<endl;
    cout<<"Your jacket size after ten years is "<<jckTen<<" inches."<<endl;

//end of loop
cout<<"Enter Y if you would like to repeat the program."<<endl;
cin>>loopFun;
}while(loopFun=='Y'||loopFun=='y');   
//Exit stage right

    return 0;
}