//When we loose access to memory that is dynamically allocated it cause memory leak
#include <iostream>
using std::cout;

void display(){
    if (3>2){
        int *p_number2{new int{323}};
    }
    //Memory with int{323} leaked
}

int main(){
    int *ptr1=new int{67};//Points to address containing 67

    int number{55};//Present in other address

    ptr1=&number;    //Now pointer points to address of 55 while 67 is still there
                    //but now we have lost access to that causing memory leak


    //Double initialization
    int* ptr2{new int{33}};
    //Not deleted used again
    //We should delete and reset here.
    ptr2=new int{44};//33 is leaked
    return 0;
}