/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Check out IDE
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//problem to solve   
cout<<"Solution to Gaddis 6thEd Chap5 Prob 1"<<endl;
cout<<"Summing up Integers"<<endl<<endl;
//Loop function and loop declared variables
char loopFun; //loop function input

do{
    
//Declare and initialize variables
    int userInt;   //user selected integer
    int strtNum=0;//starting value in summation 
    int outNum=0;//number output
//Input Data
    cout<<"Enter a positive integer."<<endl;
    cin>>userInt;
//if statement confirming userInt is positive integer
if(userInt>=0){
//calculate or map inputs to outputs
    do{
        strtNum==strtNum++;
        cout<<"test"<<endl;
        outNum=outNum+strtNum;
    }while(strtNum<userInt);
//Output the results
        cout<<"The sum of all the integers from 0 to "<<userInt<<" is ";
        cout<<outNum<<endl;
}else
    cout<<"User input was invalid. Repeat program and enter a positive integer.";
    cout<<endl;
        
//end of loop
cout<<"Enter Y if you would like to repeat the program."<<endl;
cin>>loopFun;
}while(loopFun=='Y'||loopFun=='y');   
//Exit stage right

    return 0;
}