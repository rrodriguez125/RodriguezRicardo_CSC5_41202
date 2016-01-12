/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 11, 2016, 9:00 AM
 * Purpose: 
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

    
//Input Data
    int hhh;
    char choice, ggg;
    char a, b, c;
    cout<<"type a number between 1-10 then press enter"<<endl;
    cin>>hhh;
    if (hhh>=5)
       {cout<<"Type a b or c then press enter"<<endl;
        cin>>choice;
            switch(choice)
    {           case 'a': cout<<"good work"<<endl;
                break;
                case 'b': cout<<"neato"<<endl;
                break;
                case 'c': cout<<"cool beans"<<endl;
                break;
                default: cout<<"not a choice try again"<<endl;}}
    if (hhh<5)
        cout<<"notenough try agian"<<endl;
    cin>>ggg;
    
//calculate or map inputs to outputs
            
    
    
   
//Output the results
    
//Exit stage right make sure to close files
    

    return 0;
}

