/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 11, 2016, 9:00 AM
 * Purpose: Truth Table and Display SWAPS
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants


//Function Prototypes


//Execution Begins Here

int main(int argc, char** argv) {
  
//Declare and initialize variables
   bool x=true;
   bool y=true;
    
//Create Heading    

    cout<<"X  Y !x !y x&&y x||y x^y (x^y)^y (x^y)^x !(x&&y) !x||!y !(x||y) !x&&!y "<<endl;
            
//First Row

    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    
    
//Second Row

    x=true;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    
//Third Row
 
    x=false;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    
//Fourth Row

    x=false;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    cout<<endl;
        cout<<endl;
//Swap using temp
    char temp;
    unsigned short a = 2;
    unsigned short b = 3;
    cout<<"Before switch using temp"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After switch using temp"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl; 
    cout<<endl;
    cout<<endl;

//Swap using exclusive or operator            
    a=2,b=3;
    cout<<"Swap using Operator"<<endl;
    cout<<"Before swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"After swap"<<endl;
    a=(a^b)^a;
    b=(a^b)^b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
            
//Input Data
   
    
    
//calculate or map inputs to outputs
            
    
    
//Output the results
    
//EExit stage right make sure to close files
    

    return 0;
}

