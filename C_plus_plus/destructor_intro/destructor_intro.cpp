
//Destructor is special method that are called when an object dies.
//They are needed when object needs to release some dynamic memory
//or some kind of clean up.
// there can only one destructor in a 
//class with classname preceded by ~, no parameters and no return type.
#include <iostream>
using std::cout;
class House{
    int *rooms=new int{};
    public:
        House(){
            *rooms=4;
        }
        /**
         * @brief Destroy the House object
         * Destructor can be called for wiered places:
         *      When an object is passed by value to function
         *      When a local object is returned from function(for some compilers)
         * 
         * Obvious reasons:
         *      When local stack object goes out of scope(dies)
         *      When a heap object is released with delete.
         */
        ~House(){
            delete rooms;
            cout<<"Deleted rooms"<<std::endl;
        }
        

        void get_room(){
            cout<<*rooms<<std::endl;
        }

        void showObject(House obj1){
            cout<<"Hello"<<std::endl;
        }
};

int main(){
    House *h=new House();
    h->get_room();
    //this is same as above
    (*h).get_room();
    House h1;
    h1.showObject(h1);//This create problem as it calls the destructor I think this 
                      //will be solved by copy constructor
    delete h;
    h=nullptr;
    return 0;
}