/**
 * @file loops_introduction.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Pillars of any loop
 * Iterator
 * Starting Point
 * Test(Control when loop stops)
 * Increment(or Decrement)
 * Loop body
 */
#include <iostream>
using std::cout;
using std::endl;


int main(){
    //one way
    cout<<endl<<"For loop 1:"<<endl;
    for(unsigned int i{};i<10;){
        cout<<i<<endl;
        i++;

    }
    //second way
    cout<<endl<<"For loop 2:"<<endl;
    for(unsigned int i{};i<10;i++){
        cout<<i<<endl;

    }
    unsigned int out_side_i{};
    //third way
    cout<<endl<<"For loop 3:"<<endl;
    for(out_side_i;out_side_i<10;out_side_i++){
        cout<<out_side_i<<endl;

    }
    cout<<"can use outside:"<<out_side_i;
    cout<<endl<<"For loop 4:"<<endl;



    // size_t is just alias for some unsigned int representation in c++
    for(size_t i{};i<10;i++){
        cout<<i<<endl;
    }


    const size_t COUNT{10};
    size_t i1{0};
    cout<<endl<<"While loop 1:"<<endl;
    while(i1<COUNT){
        cout<<i1<<endl;
        i1++;
    }
    size_t i2{0};
    cout<<endl<<"Do While loop 1:"<<endl;

    do{
        cout<<i2<<endl;
        i2++;
    }
    while (i2<COUNT);
}