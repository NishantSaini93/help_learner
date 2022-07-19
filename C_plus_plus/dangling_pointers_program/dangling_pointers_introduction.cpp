#include <iostream>
using std::cout;
/**
 * @brief A ponter that doesn't point to valid memory address.
 * Trying to dereference and use a dangling pointer will result in undefined behaviour
 * 
 * Three type of dangling pointer
 * 1.Uninitialized pointer
 * 2.Deleted pointer
 * 3.Multiple pointers pointing to same memory
 * 
 */

int main(){
    int *p_int; //1 type of pointer

    int *p_int2{new int{67}};

    delete p_int2;
    cout<<p_int2;//This is bad second type of pointer

    int *p_int3{new int{67}};
    //We initialized pointer by pointer
    int *p_int4{p_int3};//master pointer
    delete p_int3;

    cout<<p_int4;//This is bad third type of pointer


    //Solutions1

    //initialize with nullptr

    int* nl_ptr{nullptr};

    if (nl_ptr!=nullptr){
        cout<<"Can work on pointer"<<std::endl;
    }
    else{
        cout<<"Can not work on pointer"<<std::endl;
    }

    //In second case we should also assign to nullptr after 
    //deleting it so we can again check as above

    //In third case we should check for master pointer if its valid or not. 
    //We should also have it assigned to nullptr after deleting it


    /**
     * @brief When new fail? It fails rearly
     */

    //How we can handle
    try{
        int* lots_of_int{new int[1000000000000000000]};
    }catch(std::exception& ex){
        cout<<"Exception happend:"<<ex.what()<<std::endl;
    }

    //or we can use this it will return nullptr when it fails and we can cehck for it like above

    int* lots_fails{new(std::nothrow) int[10000000000000000]};//After we can check for lots_fails



    return 0;
}