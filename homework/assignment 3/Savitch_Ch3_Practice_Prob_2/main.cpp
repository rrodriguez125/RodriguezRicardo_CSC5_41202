/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Rock Paper Scissors with computer
 */

//System Libraries
#include <iostream>
#include <cstdlib> //rand function
#include <ctime>   //time to set the random number seed
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    
    
//loop until player wants to quite
   
    
//problem to solve   
cout<<"Solution to Savitch 9thEd Chap3 Prob2"<<endl;
cout<<"Astrology Program"<<endl<<endl;

    

//Declare and initialize variables
string bdayMth,horoscp,month; //month of birthday
int bDay;               //day of birth

//Input Data
cout<<"What month were you born(enter name of month)?"<<endl;
cin>>bdayMth;
cout<<"what day were you born?"<<endl;
cin>>bDay;

//output of date born
cout<<"You were born on "<<bdayMth<<" "<<bDay<<endl;

//Uppercase the month
for(int i=0;i<bdayMth.size();i++){
    bdayMth[i] = toupper(bdayMth[i]);
}


//If statments for horoscope
if(bdayMth=="MARCH"&&bDay<=19){
    
    horoscp="Aries";
    
}else horoscp="none";

//calculate or map inputs to outputs


//Output    
cout<<"Your astrological sign is "<<horoscp<<endl;
        
//Exit stage right

    return 0;
}

