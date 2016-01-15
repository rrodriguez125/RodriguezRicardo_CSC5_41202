/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 13, 2016, 9:00 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries



//Global Constants



//Function Prototypes



//Execution Begins Here



int main(int argc, char** argv) {

//Declare and initialize variables
    const unsigned char MAXCAP=35;//max cap of the room
    unsigned short      seatUti;  //seats utilized
    cout<<"How many seats are being utilized in BE200?"<<endl;
    char       delta;    // difference between cap and unilization
    
//Input Data
    cin>>seatUti;

    
//calculate or map inputs to outputs
    delta=MAXCAP-seatUti;
    
    
//Output the results
    cout<<"Max toom capacity of BE200 = "<<static_cast<int>(MAXCAP)<<
            " seats"<<endl;
    if(delta>=0){
        cout<<"Class will be held."<<endl;
        cout<<static_cast<int>(delta)<<" available seats remain!"<<endl;
        cout<<fixed<<setprecision(1)<<endl;
        cout<<"Percentage of capacity utilized = "<<100.0f*seatUti/MAXCAP<<
              "%"<<endl;
    }else{
        cout<<"Room capacity exceeded."<<endl;
        cout<<-delta<<" students need to leav2e"<<endl;
    }
    
    
//Exit stage right make sure to close files
    

    return 0;
}

