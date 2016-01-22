/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 19, 2016, 8:35 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib> //rand function
#include <ctime>   //time to set the random number seed
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
    cout<<"Type 1 to Display Savitch 8thEd Chap3 Prob10"<<endl;
    cout<<"Type 2 to Display Savitch 8thEd Chap3 Prob 11"<<endl;
    cout<<"Type 3 to Display Savitch 9thEd Chap3 PracticeProb 6"<<endl;
    cout<<"Type 4 to Display Gaddis 8thEd Chap5 Prob7"<<endl;
    cout<<"Type 5 to Display Problem Gaddis 8thEd Chap5 Prob12"<<endl;
    cout<<"Type 6 to Display Savitch 9thEd Chap3 PracticeProb1"<<endl;
    cout<<"Type 7 to Display Problem Savitch 9thEd Chap3 ProjectProb 2"<<endl;
    cout<<"Type 8 to Display Problem 8"<<endl;
    cout<<"Type 9 to Display Problem 9"<<endl;
    cout<<"Type 10 to Display Problem 10"<<endl;
    cout<<"Type anything else to exit"<<endl<<endl;
    cin>>nSoltn;
   
    
    
        //solutions to all problems
        switch(nSoltn){
            case 1:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 8thEd Chap3 prob 10"<<endl;
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
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 8thEd Prob 11"<<endl;
                cout<<"The Finite Sum of e^x"<<endl<<endl;
                //declare and initialize variables for etox
                float etox=1,x;                //e^x
                const unsigned char nTerms=1;//

                //Input the value x
                    cout<<"Input x of e^x computation."<<endl;
                    cin>>x;
                    cout<<endl;

                //Calculate e^x
                for(int n=1;n<=nTerms;n++){   
                    //Declare 
                    unsigned int factN=1,numb=1;//N and N
                    //calc factorial
                    for(int i=1;i<=n; i++) {
                        factN*=i;
                    }
                    //calc 
                    etox+=pow(x,n)/factN;

                //output
                    cout<<"the exact value of e^"<<x<<" = "<< exp(x)<<endl;
                    cout<<"the approx value of e^"<<x<<" = "<<etox<<endl<<endl;
                    cout<<"----------------------------------"<<endl;                             
                }break;                     
            }case 3:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 PracticeProb 6"<<endl;
                cout<<"Buoyancy Force"<<endl<<endl;
                    //Global Constants
                        const float SPCWT=62.4f;//specific weight of water in lb/ft^3
                        const float FRACTN=1.33333333;
                        const double PI= 3.141592653589793; //the value of Pi
                    //Declare and initialize variables
                        float wtSphr,  //weight of sphere
                              rdSphr, //radius of sphere
                              vlSphr,//volume of sphere      
                              Fb;   //Buoyancy force
                        //input
                            cout<<"Input the weight of the sphere in pounds."<<endl;
                            cin>>wtSphr;
                            cout<<"Input the radius of the sphere in feet."<<endl;
                            cin>>rdSphr;

                        //calculate or map inputs to outputs
                            vlSphr=FRACTN*PI*pow(rdSphr,3.0);
                            Fb=vlSphr*SPCWT;
                        //Output the results
                            cout<<"The volume of your sphere is "<<vlSphr<<" ft^3"<<endl;
                            cout<<"The weight of your sphere is "<<wtSphr<<" lbs"<<endl;
                            cout<<"The buoyancy force associated with your sphere is "<<Fb<<endl;
                        if(Fb>=wtSphr){
                            cout<<"Your sphere will float."<<endl;
                        }else{
                            cout<<"Your Sphere will sink."<<endl;
                        }
                            cout<<endl;
                            cout<<"----------------------------------"<<endl;
         
                
                break;
                }case 4:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
                cout<<"Salary Doubling"<<endl<<endl;
                //Declare and initialize variables
                unsigned int salary=1; //salary starting at a penny
                float totPay=salary;         //total pay by summing salaries


                //loop to generate the salary table and total pay
                cout<<"  Day        $Salary         $Total"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                for(int day=2;day<=31;day++){
                    salary*=2;
                    totPay+=salary;
                    cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                }
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                    
                
                
                break;
                }case 5:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
                cout<<"Display a Temperature Table"<<endl<<endl;
                //Declare and initialize variables
                float slope=5.0f/9;             //slope of the line for temperature conversion
                char intrcpt=-32;              //scaled 9/5 deg c
                unsigned char c1=0,c2=100,f1=32,f2=212;//data pts of freezing and boiling

                //loop to generate degree C and output table
                cout<<"    Fahrenheit Celsius   Celsius"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;

                for(int f=f1;f<=f2;f++){
                    float ceq=slope*(f+intrcpt);
                    float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                    cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
                }cout<<endl;
                cout<<"----------------------------------"<<endl;
                    
                
                
                break;
                }case 6:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 Prob1"<<endl;
                cout<<"Rock paper scissors game"<<endl<<endl;
                //declare question
                    char questn; //Question, does player want to play again?


                //loop until player wants to quite
                    do{
                //set random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare and initialize variables
                char player1;  //Player move inputs    
                char computr; //computers play

                //Input Data
                do{ 
                    cout<<"Enter R for rock, S for scissors, or P for paper"<<endl;
                    cout<<"Player 1 submit your move."<<endl;
                    cin>>player1;
                    player1=toupper(player1);}
                while(!(player1=='R'||player1=='S'||player1=='P'));



                //computer generated play
                do{
                    computr=rand()%4+80;


                }while(computr=='Q');    

                //calculate or map inputs to outputs

                //Output the moves by computer and player
                cout<<endl<<"the computer played "<<computr<<endl;
                cout<<"Player 1 played     "<<player1<<endl;   

                //determine result
                //comparison of player vs computer moves
                if(player1==computr){
                    cout<<"The result is a tie"<<endl;
                }else if(player1=='P'&&computr=='R'){
                    cout<<"Player 1 wins!"<<endl;
                }else if(player1=='R'&&computr=='S'){
                    cout<<"Player 1 wins!"<<endl;
                    }else if(player1=='S'&&computr=='P'){
                    cout<<"Player 1 wins!"<<endl;
                    }else{
                        cout<<"Player 1 loses"<<endl;
                    }
                //Keep playing, end of loop
                cout<<endl<<"Do you want to continue playing?"<<endl;
                cout<<"Enter Y or N"<<endl;
                cin>>questn;
            }while(toupper(questn)=='Y');
            cout<<"GAME OVER!"<<endl;
            cout<<endl;
            cout<<"----------------------------------"<<endl;
                
                
                break;
                }case 7:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 ProjectProb 2"<<endl;
                cout<<"Solving quadratic equation"<<endl<<endl;
                //declare loop variable
                char questn; //Question, does player want to play again?
                do{
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
            cout<<endl;
            cout<<"----------------------------------"<<endl;
        
             
                break;
                }case 8:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 PracticeProb 6"<<endl;
                cout<<"Buoyancy Force"<<endl<<endl;
                    
                
                
                break;
                }case 9:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 PracticeProb 6"<<endl;
                cout<<"Buoyancy Force"<<endl<<endl;
                    
                
                
                break;
                }case 10:{
                cout<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Solution to Savitch 9thEd Chap3 PracticeProb 6"<<endl;
                cout<<"Buoyancy Force"<<endl<<endl;
                    
                
                
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

