/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 8, 2016, 9:07 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare
    int x=25;              //my test value
    int *ptr;              //declaring my pointer
    int array[]={4,7,2};   //my test array
    
    //store pointer
    ptr=&x;
    
    //output address and value
    cout<<"This is the address of the value. x = "<<ptr<<endl;
    cout<<"This can be represented by prt(best), &x, or &*ptr"<<endl<<endl;;
    
    cout<<"This is the actual value. x = "<<*ptr<<endl;
    cout<<"This can be represented by *ptr(best), *&x, or *&*ptr"<<endl<<endl;
    
    cout<<"Also works with arrays"<<endl;
    cout<<"The values of the array = "<<*array<<","<<*(array+1)<<","<<*(array+2)<<endl;
    cout<<"The address of the array = "<<&array<<endl;
    cout<<"Used *array pointer to display value"<<endl;
    cout<<"Used &array pointer to display address"<<endl<<endl;

    
    //now lets edit the pointer
    (*ptr)++;  //increment the pointer
    cout<<"Incremented the pointer"<<endl;
    cout<<"The new value. x = "<<*ptr<<endl;
    cout<<"Take note that I had to use (*ptr)++ for this to work."<<endl;
    return 0;
}

