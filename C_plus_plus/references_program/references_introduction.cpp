#include <iostream>
using std::cout;
using std::endl;
//References vs pointer

/**
 * @brief Difference
 * 
 * References:Don't use deferencing for reading and writing.
 * Pointers:Use deferencing to read and write.
 * 
 * Ref:Can't be changed to reference something else
 * Ptr:Can be changed to point something else
 * 
 * Ref:Must be initialized and declared
 * Ptr:Can be declared uninitialized
 */

int main(){

    int int_value{11};
    double double_value{1.1};

    //Declaring
    //& can be anywhere
    //We can not do like int& somename;  we have do declare and initialize
    int &ref_int_value{int_value};
    int & ref_int_value2{int_value};
    double& ref_to_double{double_value};

    ref_int_value+=2;
    cout<<int_value<<endl;
    cout<<double_value<<endl;
    cout<<ref_int_value<<endl;
    cout<<ref_int_value2<<endl;
    cout<<ref_to_double<<endl;

    //One amazing thing we have done before but remmember & gives us the address
    //We can check the addresses
    cout<<&int_value<<endl;

    //Can't make a reference refer to something else

    int in11{1};
    int& int22{in11};
    int int33{123};

    int22=int33;

    int22=3;

    cout<<in11<<":"<<&in11<<endl;
    cout<<int22<<":"<<&int22<<endl;
    cout<<int33<<":"<<&int33<<endl;

    int age{0};
    //Read it from left to right
    const int* const num123{&age};

    cout<<"Pointer :>>>"<<*num123<<endl;





    

    return 0;
}