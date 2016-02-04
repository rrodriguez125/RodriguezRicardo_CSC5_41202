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
void input(int[],int);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    const int SIZE=20; //size of array
    int array[SIZE];   //array
   
    
    
//Input Data
    cout<<"This program determines if the first or last element = 2"<<endl<<endl;
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
void input(int ar[], int sz){
    //random number seed
    srand(time(0));
    
    //declar variables
    int count;  //determins how many 2s are in array
    
    
    //fill array
    
    for(int i=0;i<sz;i++){
        ar[i]=rand()%10;
    }
    //display array
    for(int i=0;i<sz;i++){
    cout<<ar[i]<<" ";
        if(i%5==(5-1))cout<<endl;
     
    }
    cout<<endl;
    if(ar[0]==2&&ar[sz-1]!=2){
        cout<<"The first element in this array = 2"<<endl;
    }else if(ar[0]==2&&ar[sz-1]==2){
        cout<<"The first and last element in this array = 2"<<endl;
    }else if(ar[0]!=2&&ar[sz-1]!=2){
        cout<<"Neither the first or last element in this array = 2"<<endl;
    }else if(ar[0]!=2&&ar[sz-1]==2){
        cout<<"The last element in this array = 2"<<endl;
    }
    
    
}