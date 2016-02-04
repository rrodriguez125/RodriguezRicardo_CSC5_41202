/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on February 4, 2016, 10:26 AM
 * Purpose: Average of Array
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
    cout<<"This program determines the average of the array";
    cout<<endl<<endl;
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
    int sum;        //sum of the array
    float average=0;//average of array
    
    //fill array
    
    for(int i=0;i<sz;i++){
        ar[i]=rand()%90+10;
    }
    //display array
    for(int i=0;i<sz;i++){
    cout<<ar[i]<<" ";
        if(i%5==(5-1))cout<<endl;
    }
    cout<<endl;


    for(int i=0;i<sz;i++){
        sum=ar[i]+sum;
  
    }
    average=sum/sz;
    cout<<"The average of the array = "<<average<<endl;
    
}