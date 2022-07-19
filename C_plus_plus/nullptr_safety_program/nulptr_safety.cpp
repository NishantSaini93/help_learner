
#include <iostream>
using std::cout;
using std::endl;
/**
 * @brief Making sure you are working with pointers containing valid
 * memory addresses.
 * 
 * check for nullptr
 */

int main(){
    //This is one solution
    int *ptr1{};

    if(!(ptr1==nullptr)){
        cout<<"Good to use"<<endl;
    }
    else{
        cout<<"Bad to use"<<endl;
    }

    // we can also use if(ptr1){} else{} as if valid ptr it will run if condition otherwise else part
    return 0;
}