/* 
 * File:   main.cpp
 * Author: Ricardo Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Power function example
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
int pow(int, int);

//Execution Begins Here
int main(int argc, char** argv) {
//variables to be used in time
    unsigned int begi, endi,begd,endd,loop=1000000;// beggining and ending int vs double
//Declare and initialize variables
    int x; //base of the problem
    int y; //exponent of the problem
    int z; //result
//Input Data
    cout<<"Input a and b i.e for a^b"<<endl;
    cin>>x>>y;
    
//calculate or map inputs to outputs
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<loop;i++) z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
//Output the results
    cout<<"our function"<<endl;
    cout<<"functions are called "<<loop<<" times"<<endl;
    cout<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"total time taken = "<<endi-begi<<" secs"<<endl;
//compare out function with c math library 
    double dx=x;//copy into a double
    double dy=y;//copy into a double
    double dz;
//call math lib
    begd=static_cast<unsigned int>(time(0));
    for(int i=0;i<loop;i++) dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    cout<<"lib function"<<endl;
    cout<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"total time taken = "<<endd-begd<<" secs"<<endl;
    cout<<"same as z=exp(y*log(x))-->"<<(dy*log(dx))<<endl;
//output result
//Exit stage right

    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            power function                                  */
//Inputs
// a->Integer base
// b->Integer power-exponent
//Output
// c->Integer z=a^b
pow(int a, int b){
    if(b<=0)return 1;
    if(b==1)return a;
    int abd2=pow(a,b/2);
    if(b%2)return abd2*abd2*a;//if even
    return abd2*abd2;    //if odd

    }
