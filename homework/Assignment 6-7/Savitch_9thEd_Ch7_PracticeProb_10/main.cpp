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
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void input(char[],int);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    const int SIZE=9; //size of array
    char array[SIZE];   //array
   
    
    
//Input Data
    cout<<"Two player Tic Tac Towe"<<endl<<endl;
    input(array, SIZE);

//calculate or map inputs to outputs

//Output the results

    
//Exit stage right

    return 0;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//                                   input
void input(char ar[], int sz){
    
    //declar variables
    int playX=0, playO=0; 
    int tick=0;
    
    
    //fill array
    
    for(int i=0;i<sz;i++){
        ar[i]=i+48;
    }
    //display array
    for(int i=0;i<sz;i++){
    cout<<ar[i]<<" ";
        if(i%3==(3-1))cout<<endl;
    }cout<<endl;
    do{
    cout<<"Player X input the number where you would like to place your X"<<endl;
    cin>>playX;
    cout<<"Player Q input the number where you would like to place your Q"<<endl;
    cin>>playO;
    ar[playX]='X';
    ar[playO]='Q';
    cout<<endl;
    //display array
    for(int i=0;i<sz;i++){
    cout<<ar[i]<<" ";
        if(i%3==(3-1))cout<<endl;
    }tick++;
    }while(tick++!=9);
    
}