/**
     * @brief There are two type of memory during program execution: real and virtual
     * program feels like it have whole RAM .MMU is responsible for this feature.
     * 
     * The entire program is not loaded in real memory by CPU and MMU.
     *Only parts that are about to be exeexecute are loaded. Making effective use of real memory,
     * a valouable and lacking resource.
     * 
     * 
     * The memory map is standard format defined by the OS.
     * All the program written for that OS mush conform to it.
     * It usually divided into some sections.
     * 
     * Memory map is devided into:
     * System, Stack, Heap ,Data, Text
     * 
     * We care about Heap and Stack
     * 
     * What are the differrences?
     * Stack: Memory is finite
     * Heap:Memory is finite
     * 
     * Stack:The developer is not in full control of the lifetime.
     * Heap:The developer is in full control of the lifetime.
     * 
     * Stack:Lifetime is controlled by scope mechanism.
     * Heap:Lifetime is controlled exiplicitly through new and delete oprators.
     */
#include <iostream>
using std::cout;
using std::endl;


int returnNumber(){
    //Stack variable
    int num{2};
    return num;
}
int main(){
    int num=returnNumber();
    cout<<num<<endl;

    //Initialize the pinter with dynamic memory.Dynamically allocate
    //memory at run time and make a pointer point to it.
    int *p_number{nullptr};


    /**
     * @brief Dynamically allocate space for a single int on heap
     * This memory belongs to program from now on.
     * The system can't use it for anything else untill we return it back
     * After this line executes,we will have a valid memory location allocated
     * The size of allocated memory can store the type pointed to by the pointer.
     */
    p_number=new int;

    *p_number=77;


    //Deleting a null pointer has no effect, so it is not necessary to check 
    //for a null pointer before calling delete.
    //This is how you delete the pointer
    //Dont delete pointer twice that is BAD
    delete p_number;
    //set to nullptr
    p_number=nullptr;



    int *p_ptr;
    
    //*p_ptr=4;//This is bad



    return 0;
}