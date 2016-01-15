/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 12, 2016, 5:52 pm
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here

int main(int argc, char** argv) {

//Declare and initialize variables
    string frtName,lstName, usrName, usrFood,usrAdjv, animal, usColor;
    float usrNumb;
    
    
//Input Data
    cout<<"What is the first name of your instructor??"<<endl;
    cin>>frtName;
    cout<<"What is the last name of your instructor??"<<endl;
    cin>>lstName;
    cout<<"What is your first name?"<<endl;
    cin>>usrName;
    cout<<"Name a food."<<endl;
    cin>>usrFood;
    cout<<"Pick a number between 100 and 120."<<endl;
    cin>>usrNumb;
    cout<<"Pick and adjective."<<endl;
    cin>>usrAdjv;
    cout<<"Pick an animal"<<endl;
    cin>>animal;    
    cout<<"Pick a color."<<endl;
    cin>>usColor;    
//calculate or map inputs to outputs

    
//Output the results
cout<<"Dear Dr. "<<frtName + " " +lstName<<","<<endl;
cout<<"I am sorry that I am unable to turn in my homework at this time."<<endl;
cout<<"First, I ate a rotten "<<usrFood<<", which made me turn "<<usColor<<endl;
cout<<"and extremely ill. I came down with a fever of "<<usrNumb<<"."<<endl;
cout<<"Next, my "<<usrAdjv<<" pet "<<animal<< " must have smelled the remains "<<endl;
cout<<"of the "<<usrFood<< " on my homework, because he ate it."<<endl;
cout<<"I am currently rewriting my homework and hope you will accept it"<<endl;
cout<<"late."<<endl;
cout<<"Sincerely,"<<endl;
cout<<usrName<<endl;
    
    
//Exit stage right

    
    
    return 0;
}

