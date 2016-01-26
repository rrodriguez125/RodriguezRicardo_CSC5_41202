/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 8:25 AM
 * Purpose: roman numeral conversion
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//The problem to solve
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
    }}


//Exit stage right

    return 0;
}