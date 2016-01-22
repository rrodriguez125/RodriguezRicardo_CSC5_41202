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
string bdayMth,horoscp,althoro; //month of birthday
int bDay;                      //day of birth
char exitPro;                 //variable to exit program
//user can loop or quite
do{

//Input Data
cout<<"What month were you born(enter name of month)?"<<endl;
cin>>bdayMth;
cout<<"what day were you born?"<<endl;
cin>>bDay;
cout<<endl<<endl;
//output of date born
cout<<"You were born on "<<bdayMth<<" "<<bDay<<endl;

//Uppercase the month
for(int i=0;i<bdayMth.size();i++){
    bdayMth[i] = toupper(bdayMth[i]);
}


//If statments for horoscope
if(bdayMth=="MARCH"&&bDay>=21){
    horoscp="Aries";
    cout<<"Your astrological sign is "<<horoscp<<endl;
     if(bDay<=23){
    althoro="Pisces";
    cout<<"You are on the cusp of being a "<<althoro<<endl;

}}else if(bdayMth=="MARCH"&&bDay<21){
    horoscp="Pisces";
    cout<<"Your astrological sign is "<<horoscp<<endl;
     if(bDay>=19){
     althoro="Aries";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="APRIL"&&bDay<=19){
    horoscp="Aries";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=17){
    althoro="Taurus";
    cout<<"You are on the cusp of being a "<<althoro<<endl;

}}else if(bdayMth=="APRIL"&&bDay>19){
    horoscp="Taurus";
    cout<<"Your astrological sign is "<<horoscp<<endl;
     if(bDay<=21){
     althoro="Aries";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="MAY"&&bDay<=20){
    horoscp="Taurus";
    cout<<"Your astrological sign is "<<horoscp<<endl;
     if(bDay>=18){
     althoro="Gemini";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="MAY"&&bDay>20){
    horoscp="Gemini";
    cout<<"Your astrological sign is "<<horoscp<<endl;
     if(bDay<=22){
     althoro="Taurus";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="JUNE"&&bDay<=21){
    horoscp="Gemini";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=19){
     althoro="Cancer";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="JUNE"&&bDay>21){
    horoscp="Cancer";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=23){
     althoro="Gemini";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="JULY"&&bDay<=22){
    horoscp="Cancer";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=20){
    althoro="Leo";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="JULY"&&bDay>=23){
    horoscp="Leo";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=25){
    althoro="Cancer";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="AUGUST"&&bDay<=22){
    horoscp="Leo";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=20){
    althoro="Virgo";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="AUGUST"&&bDay>22){
    horoscp="Virgo";  
    cout<<"Your astrological sign is "<<horoscp<<endl; 
    if(bDay<=24){
    althoro="Leo";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="SEPTEMBER"&&bDay<=22){
    horoscp="Virgo";
    cout<<"Your astrological sign is "<<horoscp<<endl; 
    if(bDay>=20){
    althoro="Libra";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="SEPTEMBER"&&bDay>22){
    horoscp="Libra";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=24){
    althoro="Virgo";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="OCTOBER"&&bDay<=22){
    horoscp="Libra";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=20){
    althoro="Scorpio";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="OCTOBER"&&bDay>22){
    horoscp="Scorpio";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=24){
    althoro="Libra";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="NOVEMBER"&&bDay<=21){
    horoscp="Scorpio";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=19){
    althoro="Sagittarius";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="NOVEMBER"&&bDay>21){
    horoscp="Sagittarius";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=23){
    althoro="Scorpio";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="DECEMBER"&&bDay<=22){
    horoscp="Sagittarius";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=20){
    althoro="Capricorn";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="DECEMBER"&&bDay>22){
    horoscp="Capricorn";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=24){
    althoro="Sagittarius";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="JANUARY"&&bDay<=19){
    horoscp="Capricorn";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=17){
    althoro="Aquarius";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="JANUARY"&&bDay>19){
    horoscp="Aquarius";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=21){
    althoro="Capricorn";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="FEBRUARY"&&bDay<=18){
    horoscp="Aquarius";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay>=16){
    althoro="Pisces";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
    
}}else if(bdayMth=="FEBRUARY"&&bDay>18){
    horoscp="Pisces";
    cout<<"Your astrological sign is "<<horoscp<<endl;
    if(bDay<=20){
    althoro="Aquarius";
    cout<<"You are on the cusp of being a "<<althoro<<endl;
}}

//calculate or map inputs to outputs


//Output    
cout<<"Todays horoscope for "<<horoscp<<" is- "<<endl<<endl;
if(horoscp=="Aries"){
    cout<<"you will find happiness if you leave all your loved ones and worldly"
            " possessions behind and wander the Canadian tundra."<<endl<<endl;
}
 
cout<<"To enter another birthday enter Y"<<endl;
cout<<"To exit program enter N"<<endl;
cin>>exitPro;
toupper(exitPro);
}while(exitPro=='Y'||exitPro=='y');
//Exit stage right

    return 0;
}

