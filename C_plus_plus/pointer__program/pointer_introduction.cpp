//Pointer introduction
//A variable which stores the address of another variable is called a pointer
#include <iostream>
using std::cout;
using std::endl;
using std::cin;



int main(){

    //***very important initialize pointer never do like int *numb;  do nulptr or actually value
    //We can do any way
    //int* everything work
    int * p_integr{nullptr};//this should only contain address to integer type
    double *p_double{};//This shoul only have address to double type

    int value{23};
    //We can reuse pointer
    int* address_of_value{&value};


    cout<<"Value:"<<*address_of_value<<" is at address:"<<address_of_value<<endl;

    // in adddition to do like char* pinter to car we can also do as folows
    //Some compiler may give error when you will try to compile it.
    char* char_pointer={"Hello World"};//This will be exended as array and char_pointer points to H

    cout<<char_pointer<<endl;//Gives whole "Hello World"

    cout<<*char_pointer<<endl;//Gives H



    

    

}