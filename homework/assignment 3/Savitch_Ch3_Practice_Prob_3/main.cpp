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
cout<<"Solution to Savitch 9thEd Chap3 Prob"<<endl;
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
if(bdayMth=="MARCH"&&bDay>=21)   
    horoscp="Aries";
    
else if(bdayMth=="APRIL"&&bDay<=19)
    horoscp="Aries";

else if(bdayMth=="APRIL"&&bDay>19)
    horoscp="Taurus";
    
else if(bdayMth=="MAY"&&bDay<=20)
    horoscp="Taurus";

else if(bdayMth=="MAY"&&bDay>20)
    horoscp="Gemini";
 
else if(bdayMth=="JUNE"&&bDay<=21)
    horoscp="Gemini";

else if(bdayMth=="JUNE"&&bDay>21)
    horoscp="Cancer";
    
else if(bdayMth=="JULY"&&bDay<=22)
    horoscp="Cancer";

else if(bdayMth=="JULY"&&bDay>=23)
    horoscp="Leo";

else if(bdayMth=="AUGUST"&&bDay<=22)
    horoscp="Leo";

else if(bdayMth=="AUGUST"&&bDay>22)
    horoscp="Virgo";  

else if(bdayMth=="SEPTEMBER"&&bDay<=22)
    horoscp="Virgo";

else if(bdayMth=="SEPTEMBER"&&bDay>22)
    horoscp="Libra";

else if(bdayMth=="OCTOBER"&&bDay<=22)
    horoscp="Libra";

else if(bdayMth=="OCTOBER"&&bDay>22)
    horoscp="Scorpio";

else if(bdayMth=="NOVEMBER"&&bDay<=21)
    horoscp="Scorpio";

else if(bdayMth=="NOVEMBER"&&bDay>21)
    horoscp="Sagittarius";

else if(bdayMth=="DECEMBER"&&bDay<=22)
    horoscp="Sagittarius";

else if(bdayMth=="DECEMBER"&&bDay>22)
    horoscp="Capricorn";

else if(bdayMth=="JANUARY"&&bDay<=19)
    horoscp="Capricorn";

else if(bdayMth=="JANUARY"&&bDay>19)
    horoscp="Aquarius";

else if(bdayMth=="FEBRUARY"&&bDay<=18)
    horoscp="Pisces";

else if(bdayMth=="FEBRUARY"&&bDay>18)
    horoscp="Pisces";

//calculate or map inputs to outputs


//Output    
cout<<"Your astrological sign is "<<horoscp<<endl;
        
//Exit stage right

    return 0;
}

