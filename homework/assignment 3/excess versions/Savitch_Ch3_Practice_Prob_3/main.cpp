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
     if(bDay<=23)
    althoro="Pisces";

}else if(bdayMth=="MARCH"&&bDay<21){
    horoscp="Pisces";
     if(bDay>=19)
     althoro="Aries";
    
    
}else if(bdayMth=="APRIL"&&bDay<=19){
    horoscp="Aries";
    if(bDay>=17)
    althoro="Taurus";

}else if(bdayMth=="APRIL"&&bDay>19){
    horoscp="Taurus";
     if(bDay<=21)
     althoro="Aries";
    
}else if(bdayMth=="MAY"&&bDay<=20){
    horoscp="Taurus";
     if(bDay>=18)
     althoro="Gemini";

}else if(bdayMth=="MAY"&&bDay>20){
    horoscp="Gemini";
     if(bDay<=22)
     althoro="Taurus";
}else if(bdayMth=="JUNE"&&bDay<=21){
    horoscp="Gemini";
     if(bDay>=19)
     althoro="Cancer";
    
}else if(bdayMth=="JUNE"&&bDay>21){
    horoscp="Cancer";
     if(bDay<=23)
     althoro="Gemini";
}else if(bdayMth=="JULY"&&bDay<=22){
    horoscp="Cancer";
     if(bDay>=20)
    althoro="Leo";

}else if(bdayMth=="JULY"&&bDay>=23){
    horoscp="Leo";
     if(bDay<=25)
    althoro="Cancer";

}else if(bdayMth=="AUGUST"&&bDay<=22){
    horoscp="Leo";
     if(bDay>=20)
    althoro="Virgo";
    
}else if(bdayMth=="AUGUST"&&bDay>22){
    horoscp="Virgo";  
     if(bDay<=24)
    althoro="Leo";
}else if(bdayMth=="SEPTEMBER"&&bDay<=22){
    horoscp="Virgo";
     if(bDay>=20)
    althoro="Libra";
    
}else if(bdayMth=="SEPTEMBER"&&bDay>22){
    horoscp="Libra";
     if(bDay<=24)
    althoro="Virgo";
    
}else if(bdayMth=="OCTOBER"&&bDay<=22){
    horoscp="Libra";
     if(bDay>=20)
    althoro="Scorpio";
    
}else if(bdayMth=="OCTOBER"&&bDay>22){
    horoscp="Scorpio";
     if(bDay<=24)
    althoro="Libra";
    
}else if(bdayMth=="NOVEMBER"&&bDay<=21){
    horoscp="Scorpio";
     if(bDay>=19)
    althoro="Sagittarius";
    
}else if(bdayMth=="NOVEMBER"&&bDay>21){
    horoscp="Sagittarius";
     if(bDay<=23)
    althoro="Scorpio";
    
}else if(bdayMth=="DECEMBER"&&bDay<=22){
    horoscp="Sagittarius";
     if(bDay>=20)
    althoro="Capricorn";

}else if(bdayMth=="DECEMBER"&&bDay>22){
    horoscp="Capricorn";
     if(bDay<=24)
    althoro="Sagittarius";
    
}else if(bdayMth=="JANUARY"&&bDay<=19){
    horoscp="Capricorn";
     if(bDay>=17)
    althoro="Aquarius";
    
}else if(bdayMth=="JANUARY"&&bDay>19){
    horoscp="Aquarius";
     if(bDay<=21)
    althoro="Capricorn";
    
}else if(bdayMth=="FEBRUARY"&&bDay<=18){
    horoscp="Aquarius";
     if(bDay>=16)
    althoro="Pisces";
    
}else if(bdayMth=="FEBRUARY"&&bDay>18){
    horoscp="Pisces";
     if(bDay<=20)
    althoro="Aquarius";
}

//calculate or map inputs to outputs


//Output    
cout<<"Your astrological sign is "<<horoscp<<endl;
cout<<"You are on the cusp of being a "<<althoro<<endl;



cout<<"Todays horoscope for "<<horoscp<<" is- "<<endl<<endl<<endl;
if(horoscp=="Aries"){
    cout<<"you will find happiness if you leave all your loved ones and worldly"
            " possessions behind and wander the Canadian tundra."<<endl<<endl;
}
 
cout<<"To enter another birthday enter Y"<<endl;
cout<<"To exit program enter N"<<endl;
cin>>exitPro;
toupper(exitPro);
}while(exitPro=='Y');
//Exit stage right

    return 0;
}

