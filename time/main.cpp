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
#include <fstream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int i=0;
    int timer;
    int a[10];
    int num1=0,num2=0,num3=0,num4=0,num5=0,
            num6=0,num7=0,num8=0,num9=0;
            
    
    
    for(i=0;i<10;i++){
        a[i]=i;
    }
    //create file
    ofstream outStream;
    ifstream inStream;
    outStream.open("TopScores.dat");
    inStream.open("TopScores.dat");
        outStream<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<endl;
    inStream>>num1>>num2>>num3>>num3>>num5>>num6>>num7>>num8>>num8;
    outStream.close();
    inStream.close();
    
    cout<<num1<<num2<<num3<<num4<<num5<<num6<<num7<<num8<<num9<<endl;
    
    
    
    
    
//    time_t befor;
//    befor=time(0);
//    cout<<"enter something"<<endl;
//    cin>>i;
//    time_t after;
//    after=time(0);
//    timer=after-befor;
//    cout<<"this is the timer "<<timer<<endl;
//    cout<<"this is before "<<befor<<endl;
//    cout<<"this is after "<<after<<endl;
//Input Data

//calculate or map inputs to outputs

    
    
//Output the results

    
//Exit stage right

    return 0;
}