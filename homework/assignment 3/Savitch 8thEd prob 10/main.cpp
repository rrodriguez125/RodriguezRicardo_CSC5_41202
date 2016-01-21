/* 
 * File:   main.cpp
 * Author: rcc
 *Fibinacci problem
 * Created on January 19, 2016, 9:31 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 8thEd Chap3 prob10"<<endl;
                cout<<"The Fibonacci Sequence"<<endl<<endl;
                
                //Declare Variables
                unsigned int fi,fim1,fim2;//designation in the sequence
                unsigned short nTerms;    //Number of terms in the sequence
                unsigned short counter;   //current position in the sequence
                //Initialize sequence
                fim2=fim1=1;              //start sequence
                counter=2;                 //initialize the counter
                //Input the number of terms in the sequence
                cout<<"Input the number of the term in the sequence."<<endl;
                cin>>nTerms;
                //Output or calculate the output 
                if(nTerms==1){
                    cout<<"Term "<<nTerms<<" in the sequence = ";
                    cout<<fim2<<endl<<endl;
                    cout<<"----------------------------------"<<endl;
                }else if(nTerms==2){
                    cout<<"Term "<<nTerms<<" in the sequence = ";
                    cout<<fim2<<endl<<endl;
                    cout<<"----------------------------------"<<endl;
                }else{
                    do{
                    fi=fim1+fim2;
                    counter++;
                    fim2=fim1;
                    fim1=fi;
                    }while(counter<nTerms);
                    cout<<"Term "<<nTerms<<" in the sequence = ";
                    cout<<fi<<endl<<endl;
                    cout<<"----------------------------------"<<endl;
                
                }
 
}

