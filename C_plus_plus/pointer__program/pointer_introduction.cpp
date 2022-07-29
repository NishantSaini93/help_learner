//Pointer introduction
//A variable which stores the address of another variable is called a pointer
//Pointer is used to access the heap memory
//Pointer are useful in call by reference
//accessing files
//accessing printer
#include <iostream>
using std::cout;
using std::endl;
using std::cin;


void printNum(int *ptr1){
    cout<<*ptr1<<endl;

}

void print(void*ptr1,char type){
    if (type=='i'){
        cout<<*((int*)(ptr1))<<endl;
    }
}




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
    char* char_pointer{"Hello World"};//This will be exended as array and char_pointer points to H

    cout<<char_pointer<<endl;//Gives whole "Hello World"

    cout<<*char_pointer<<endl;//Gives H


    //Some extra examples

    int n{5};
    cout<<"Address of n:"<<&n<<std::endl;

    //How will we create the pointer to hold the address
    //int *ptr11={&n};
    //int *ptr11=&n;
    //int *ptr11{&n};
    int *ptr11(&n);
    cout<<"Address of n:"<<ptr11<<std::endl;
    cout<<"Value of n:"<<*ptr11<<std::endl;
    *ptr11=23;
    cout<<"Value of n:"<<*ptr11<<std::endl;

    //void pointers 
    //It can hold value any types
    //You can not deference is directly
    int num_var1=5;

    printNum(&num_var1);
    print(&num_var1,'i');


    //working with array

    int luckyN[5]{1,2,3,4,5};
    cout<<luckyN<<endl;//This gives address x
    cout<<luckyN[1]<<endl;
    cout<<&luckyN<<endl;//this gives also give same address x
    cout<<&luckyN[0]<<endl;//This also gives same address x
    cout<<*(luckyN+1)<<endl;//this gives element 2
    cout<<*(&luckyN[0]+1)<<endl;//this gives element 2
    cout<<*(&luckyN+1)<<endl;// This gives some address ???








    

}