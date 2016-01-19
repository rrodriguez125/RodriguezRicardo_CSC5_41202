/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 19, 2016, 8:35 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    cout<<"Type 1 to Display Savitch 8thEd Chap3 prob10"<<endl;
    cout<<"Type 2 to Display Problem 2"<<endl;
    cout<<"Type 3 to Display Problem 3"<<endl;
    cout<<"Type anything else to exit"<<endl<<endl;
    cin>>nSoltn;
   
    
    
        //solutions to all problems
        switch(nSoltn){
            case 1:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 8thEd Chap3 prob10"<<endl;
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
                cout<<"Solution to problem 2"<<endl<<endl;;
                //declare and initialize variables for etox
    float etox=1,x;                //e^x
    const unsigned char nTerms=13;//

//Input the value x
    cout<<"Input x of e^x computation."<<endl;
    cin>>x;

//Calculate e^x
for(int n=1;n<=nTerms;n++){   
    //Declare 
    unsigned int factN=1;//N and N
    //calc factorial
    for(int i=1;i<=n; i++) {
        factN*=i;
    }
    //calc 
    etox+=pow(x,n)/factN;
    
//output
    cout<<"the exact value of e^"<<x<<" = "<< exp(x)<<endl;
    cout<<"the approx value of e^"<<x<<"="<<etox<<endl<<endl;
    cin>>n;
                break;
            }case 3:{
                cout<<"Solution to problem 3"<<endl<<endl;
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

