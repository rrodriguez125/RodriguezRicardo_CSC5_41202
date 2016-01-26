/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: solving quadratic equation
 */

//System Libraries
#include <iostream>
#include <cmath>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//declare question
    char questn; //Question, does player want to play again?
    
    
//loop until player wants to quite
    do{
    
        //problem to solve   
            cout<<"Solution to Savitch 9thEd Chap3 ProjectProb 2"<<endl;
            cout<<"Solving quadratic equation"<<endl<<endl;


        //Declare and initialize variables
            float valueA,valueB,valueC,result1,result2;//values for variables of equation

        //Input Data
            cout<<"The quadratic equation is ax^2 + bx + c = 0"<<endl;
            cout<<"Input a value for a"<<endl;
            cin>>valueA;
            cout<<"Input a value for b"<<endl;
            cin>>valueB;
            cout<<"Input a value for c"<<endl;
            cin>>valueC;
            

        //calculate or map inputs to outputs
            result1=(pow(valueB,2)-4*valueA*valueC);
            result2=(-valueB+sqrt(pow(valueB,2)-4*valueA*valueC))/(2*valueA);
          
        //Output 
                    if(result1<0){
                       cout<<"There are two complex results of your equation."
                        <<endl;
                       cout<<"result 1 = ("
                        <<-valueB<<"+i*sqrt("<<-result1<<"))/(2*"<<valueA<<")"<<endl;
                       cout<<"result 2 = ("
                        <<-valueB<<"-i*sqrt("<<-result1<<"))/(2*"<<valueA<<")"<<endl;
                    }if(result1>0){
                       cout<<"There are two results of your equation."
                        <<endl;
                       cout<<"result 1 = ("
                        <<-valueB<<"+sqrt("<<result1<<"))/(2*"<<valueA<<")"<<endl;
                       cout<<"result 2 = ("
                        <<-valueB<<"-sqrt("<<result1<<"))/(2*"<<valueA<<")"<<endl;
                    }if(result1==0){
                       cout<<"There is one result to the equation."
                        <<endl;
                       cout<<"result = ("
                        <<-valueB<<")/(2*"<<valueA<<")"<<endl;
                    }
            
            
        //Keep playing, end of loop
        cout<<endl<<"Do you want to repeat the program?"<<endl;
        cout<<"Enter Y or N"<<endl;
        cin>>questn;
    }while(toupper(questn)=='Y');
//Exit stage right

    return 0;
}

