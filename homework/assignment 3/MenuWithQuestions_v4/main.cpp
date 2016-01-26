/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 19, 2016, 8:35 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib> //rand function
#include <ctime>   //time to set the random number seed
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 
    
//Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to Display
    bool reDsply=true;//exit program
    


//Menu to display solution
    do{
        //Input Data (problem to display)
    cout<<"Assignment 3 Problem Set"<<endl;
    cout<<"Type 1 to Display Savitch 8thEd Chap3 Prob 10"<<endl;
    cout<<"Type 2 to Display Savitch 8thEd Chap3 Prob 11"<<endl;
    cout<<"Type 3 to Display Savitch 9thEd Chap3 PracticeProb 6"<<endl;
    cout<<"Type 4 to Display Gaddis 8thEd Chap5 Prob 7"<<endl;
    cout<<"Type 5 to Display Gaddis 8thEd Chap5 Prob 12"<<endl;
    cout<<"Type 6 to Display Savitch 9thEd Chap3 PracticeProb 1"<<endl;
    cout<<"Type 7 to Display Savitch 9thEd Chap3 ProjectProb 2"<<endl;
    cout<<"Type 8 to Display Savitch 9thEd Chap3 ProjectProb 3"<<endl;
    cout<<"Type 9 to Display Savitch 9thEd Chap3 PracticeProb 3"<<endl;
    cout<<"Type 10 to Display Savitch 9thEd Chap3 PracticeProb 4"<<endl;
    cout<<"Type anything else to exit"<<endl<<endl;
    cin>>nSoltn;
   
    
    
        //solutions to all problems
        switch(nSoltn){
            case 1:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 8thEd Chap3 prob 10"<<endl;
                cout<<"The Fibonacci Sequence"<<endl<<endl;
                
                //Declare Variables
                unsigned int fi,fim1,fim2;//designation in the sequence
                unsigned short nTerms;    //Number of terms in the sequence
                unsigned short counter;   //current position in the sequence
                float crudWt;             //weight of crud
                unsigned int nDays;       //Number of days to Grow crud
                const char DREPRO=5;        //Days to reproduce
                //Initialize sequence
                fim2=fim1=1;              //start sequence
                counter=2;                 //initialize the counter
                //Input the number of terms in the sequence
                cout<<"Input the initial weight of the crud."<<endl;
                cin>>crudWt;
                cout<<"How many days will the crud be allowed to grow?"<<endl;
                cin>>nDays;
                //calc number of terms
                nTerms=nDays/DREPRO+1;
               
                //Output or calculate the output 
                if(nTerms==1){
                    cout<<"After "<<nDays<<" day(s) the crud weighs ";
                    cout<<fim2*crudWt<<" lbs"<<endl<<endl;
                    cout<<"----------------------------------"<<endl;
                }else if(nTerms==2){
                    cout<<"After "<<nDays<<" day(s) the crud weighs ";
                    cout<<fim1*crudWt<<" lbs"<<endl<<endl;
                    cout<<"----------------------------------"<<endl;
                }else{
                    do{
                    fi=fim1+fim2;
                    counter++;
                    fim2=fim1;
                    fim1=fi;
                    }while(counter<nTerms);
                    cout<<"Term "<<nTerms<<" in the sequence = ";
                    cout<<fi<<endl;
                    //crud result is
                    cout<<"After "<<nDays<<" days the crud weighs "
                        <<fi*crudWt<<" lbs"<<endl<<endl;
                    
                    cout<<"----------------------------------"<<endl;
                
                }
                break;
            }case 2:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 8thEd Prob 11"<<endl;
                cout<<"The Finite Sum of e^x"<<endl<<endl;
                //declare and initialize variables for etox
                float etox=1,x;                //e^x
                const unsigned char nTerms=1;//

                //Input the value x
                    cout<<"Input x of e^x computation."<<endl;
                    cin>>x;
                    cout<<endl;

                //Calculate e^x
                for(int n=1;n<=nTerms;n++){   
                    //Declare 
                    unsigned int factN=1,numb=1;//N and N
                    //calc factorial
                    for(int i=1;i<=n; i++) {
                        factN*=i;
                    }
                    //calc 
                    etox+=pow(x,n)/factN;

                //output
                    cout<<"the exact value of e^"<<x<<" = "<< exp(x)<<endl;
                    cout<<"the approx value of e^"<<x<<" = "<<etox<<endl<<endl;
                    cout<<"----------------------------------"<<endl;                             
                }break;                     
            }case 3:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 PracticeProb 6"<<endl;
                cout<<"Buoyancy Force"<<endl<<endl;
                    //Global Constants
                        const float SPCWT=62.4f;//specific weight of water in lb/ft^3
                        const float FRACTN=1.33333333;
                        const double PI= 3.141592653589793; //the value of Pi
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
                            cout<<endl;
                            cout<<"----------------------------------"<<endl;
         
                
                break;
                }case 4:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
                cout<<"Salary Doubling"<<endl<<endl;
                //Declare and initialize variables
                unsigned int salary=1; //salary starting at a penny
                float totPay=salary;         //total pay by summing salaries


                //loop to generate the salary table and total pay
                cout<<"  Day        $Salary         $Total"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                for(int day=2;day<=31;day++){
                    salary*=2;
                    totPay+=salary;
                    cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                }
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                    
                
                
                break;
                }case 5:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
                cout<<"Display a Temperature Table"<<endl<<endl;
                //Declare and initialize variables
                float slope=5.0f/9;             //slope of the line for temperature conversion
                char intrcpt=-32;              //scaled 9/5 deg c
                unsigned char c1=0,c2=100,f1=32,f2=212;//data pts of freezing and boiling

                //loop to generate degree C and output table
                cout<<"    Fahrenheit Celsius   Celsius"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;

                for(int f=f1;f<=f2;f++){
                    float ceq=slope*(f+intrcpt);
                    float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                    cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
                }cout<<endl;
                cout<<"----------------------------------"<<endl;
                    
                
                
                break;
                }case 6:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 Prob1"<<endl;
                cout<<"Rock paper scissors game"<<endl<<endl;
                //declare question
                    char questn; //Question, does player want to play again?


                //loop until player wants to quite
                    do{
                //set random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare and initialize variables
                char player1;  //Player move inputs    
                char computr; //computers play

                //Input Data
                do{ 
                    cout<<"Enter R for rock, S for scissors, or P for paper"<<endl;
                    cout<<"Player 1 submit your move."<<endl;
                    cin>>player1;
                    player1=toupper(player1);}
                while(!(player1=='R'||player1=='S'||player1=='P'));



                //computer generated play
                do{
                    computr=rand()%4+80;


                }while(computr=='Q');    

                //calculate or map inputs to outputs

                //Output the moves by computer and player
                cout<<endl<<"the computer played "<<computr<<endl;
                cout<<"Player 1 played     "<<player1<<endl;   

                //determine result
                //comparison of player vs computer moves
                if(player1==computr){
                    cout<<"The result is a tie"<<endl;
                }else if(player1=='P'&&computr=='R'){
                    cout<<"Player 1 wins!"<<endl;
                }else if(player1=='R'&&computr=='S'){
                    cout<<"Player 1 wins!"<<endl;
                    }else if(player1=='S'&&computr=='P'){
                    cout<<"Player 1 wins!"<<endl;
                    }else{
                        cout<<"Player 1 loses"<<endl;
                    }
                //Keep playing, end of loop
                cout<<endl<<"Do you want to continue playing?"<<endl;
                cout<<"Enter Y or N"<<endl;
                cin>>questn;
            }while(toupper(questn)=='Y');
            cout<<"GAME OVER!"<<endl;
            cout<<endl;
            cout<<"----------------------------------"<<endl;
                
                
                break;
                }case 7:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 ProjectProb 2"<<endl;
                cout<<"Solving quadratic equation"<<endl<<endl;
                //declare loop variable
                char questn; //Question, does player want to play again?
                do{
                //Declare and initialize variables
                    float valueA,valueB,valueC,result1,result2;//values for variables of equation

                //Input Data
                    cout<<"The quadratic equation is ax^2 + bx + c = 0"<<endl;
                    cout<<"Input a value for a"<<endl;
                    cin>>valueA;
                    cout<<"Input a value for b"<<endl;
                    cin>>valueB;
                    cout<<"Input a value for c"<<endl;
                    cin>>valueC;


                //calculate or map inputs to outputs
                    result1=(pow(valueB,2)-4*valueA*valueC);
                    result2=(-valueB+sqrt(pow(valueB,2)-4*valueA*valueC))/(2*valueA);

                //Output 
                            if(result1<0){
                               cout<<"There are two complex results of your equation."
                                <<endl;
                               cout<<"result 1 = ("
                                <<-valueB<<"+i*sqrt("<<-result1<<"))/(2*"<<valueA<<")"<<endl;
                               cout<<"result 2 = ("
                                <<-valueB<<"-i*sqrt("<<-result1<<"))/(2*"<<valueA<<")"<<endl;
                            }if(result1>0){
                               cout<<"There are two results of your equation."
                                <<endl;
                               cout<<"result 1 = ("
                                <<-valueB<<"+sqrt("<<result1<<"))/(2*"<<valueA<<")"<<endl;
                               cout<<"result 2 = ("
                                <<-valueB<<"-sqrt("<<result1<<"))/(2*"<<valueA<<")"<<endl;
                            }if(result1==0){
                               cout<<"There is one result to the equation."
                                <<endl;
                               cout<<"result = ("
                                <<-valueB<<")/(2*"<<valueA<<")"<<endl;
                            }


                //Keep playing, end of loop
                cout<<endl<<"Do you want to repeat the program?"<<endl;
                cout<<"Enter Y or N"<<endl;
                cin>>questn;
                }while(toupper(questn)=='Y');   
                cout<<endl;
                cout<<"----------------------------------"<<endl;
        
             
                break;
                }case 8:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<endl<<"Solution to Savitch 9thEd Chap3 ProjectProb3"<<endl;
                cout<<"Roman Numberal Conversion"<<endl<<endl;
                //Declare and initialize variables
                unsigned short number=rand()%2001+1000;//[1000,3000]
                unsigned char n1000,n100,n10,n1;      //number of 10^x
                cout<<"The number to convert = "<<number<<endl;

                //caclulate the number of 1000,100,10,1
                n1000=(number-number%1000)/1000; //number of 1000s
                number=(number-n1000*1000);     //subtract off 1000s
                n100=(number-number%100)/100;  //number of 100s
                number=(number-n100*100);     //subtract off 100s
                n10=(number-number%10)/10;   //number of 10s
                number=(number-n10*10);     //subtract off 10s
                n1=(number-number%1)/1;    //number of 1000s


                //output the number and its components

                cout<<"The number of 1000's = "<<static_cast<int>(n1000)<<endl;
                cout<<"The number of 100's = "<<static_cast<int>(n100)<<endl;
                cout<<"The number of 10's = "<<static_cast<int>(n10)<<endl;
                cout<<"The number of 1's = "<<static_cast<int>(n1)<<endl;

                //Input Data



                //calculate or map inputs to outputs



                //Output the results
                cout<<"The Roman numeral equivalent = ";


                //output 1000s
                switch(n1000){
                    case 3: cout<<"M";
                    case 2: cout<<"M";
                    case 1: cout<<"M";       
                }
                //output 100s
                switch(n100){
                    case 9: cout<<"CM"; break;
                    case 8: cout<<"DCCC"; break;
                    case 7: cout<<"DCC"; break; 
                    case 6: cout<<"DC"; break;
                    case 5: cout<<"D"; break;
                    case 4: cout<<"CD"; break; 
                    case 3: cout<<"C"; 
                    case 2: cout<<"C"; 
                    case 1: cout<<"C"; 
                }
                //output 10s
                switch(n10){
                    case 9: cout<<"XC"; break;
                    case 8: cout<<"LXXX"; break;
                    case 7: cout<<"LXX"; break; 
                    case 6: cout<<"LX"; break;
                    case 5: cout<<"L"; break;
                    case 4: cout<<"XL"; break; 
                    case 3: cout<<"XXX"; 
                    case 2: cout<<"XX"; 
                    case 1: cout<<"X"; 
                }
                //output 1s
                switch(n1){
                    switch(n10){
                    case 9: cout<<"IX"; break;
                    case 8: cout<<"VIII"; break;
                    case 7: cout<<"VII"; break; 
                    case 6: cout<<"VI"; break;
                    case 5: cout<<"V"; break;
                    case 4: cout<<"IV"; break; 
                    case 3: cout<<"III"; 
                    case 2: cout<<"II"; 
                    case 1: cout<<"I";  
                    }}cout<<endl;
                    cout<<"----------------------------------"<<endl;    
                
                
                break;
                }case 9:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
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
                //horoscopes
                if(horoscp=="Aries"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Taurus"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Gemini"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Cancer"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Leo"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Virgo"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Libra"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Scorpio"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Sagittarius"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Capricorn"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Aquarius"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }if(horoscp=="Pisces"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                }
                //final output
                cout<<"To enter another birthday enter Y"<<endl;
                cout<<"To exit program enter N"<<endl;
                cin>>exitPro;
                toupper(exitPro);
                }while(exitPro=='Y'||exitPro=='y');    
                
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                break;
                
                
                }case 10:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 Prob"<<endl;
                cout<<"Modified Astrology Program"<<endl<<endl;
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
                cout<<"Todays horoscope for "<<horoscp<<" is- "<<endl;
                //horoscopes
                if(horoscp=="Aries"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Aries, Leo, and Sagittarius."<<endl;
                }if(horoscp=="Taurus"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Taurus, Virgo, and Capricorn."<<endl;
                }if(horoscp=="Gemini"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Libra, Gemini, and Aquarius."<<endl;
                }if(horoscp=="Cancer"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Aries, Leo, and Sagittarius."<<endl;
                }if(horoscp=="Leo"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Aries, Leo, and Aquarius."<<endl;
                }if(horoscp=="Virgo"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Taurus, Virgo, and Capricorn."<<endl;
                }if(horoscp=="Libra"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Libra, Gemini, and Aquarius."<<endl;
                }if(horoscp=="Scorpio"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Pisces, Scorpio, and Cancer."<<endl;
                }if(horoscp=="Sagittarius"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Aries, Leo, and Sagittarius."<<endl;
                }if(horoscp=="Capricorn"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Taurus, Virgo, and Capricorn."<<endl;
                }if(horoscp=="Aquarius"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Libra, Gemini, and Aquarius."<<endl;
                }if(horoscp=="Pisces"){
                    cout<<"you will find happiness if you leave all your loved ones and worldly"
                            " possessions behind and wander the Canadian tundra."<<endl<<endl;
                    cout<<"You are most compatible with Pisces, Scorpio, and Cancer."<<endl;
                }
                //final output
                cout<<"To enter another birthday enter Y"<<endl;
                cout<<"To exit program enter N"<<endl;
                cin>>exitPro;
                toupper(exitPro);
                }while(exitPro=='Y'||exitPro=='y');   
                
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                break;
            }default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;}
        }
        
    }while(reDsply);
    
    
//calculate or map inputs to outputs

    
    
//Output the results
  
    
//Exit stage right

    return 0;
}

