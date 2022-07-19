//Classes are blueprint of object
#include <iostream>
using std::cout;



class House{
    //access specifier
    //Members are private by default
    //Member variable can be stack variable or pointers but not &(refr) 
    //Reason is that we can not leave them uninitialized 
    public:
        int num_rooms{3};
        int get_rooms(){
            return num_rooms;
        }
};

int main(){
    House h;
    cout<< h.get_rooms()<<std::endl;
    return 0;
}