//Each clas member fxn contains a hidden pointer called "this",
//It contains the address of the current object,for which the method is
//being executed.
//It also applies to constructor and destructor.
#include <iostream>
using std::cout;

class House{
    public:
        int num_rooms{3};
        int get_rooms(){
            return num_rooms;
        }
        void set_rooms(int num_rooms){
            //this->member variable=parameter
            this->num_rooms=num_rooms;

        }
};

int main(){
    House h;
    h.set_rooms(43);
    cout<< h.get_rooms()<<std::endl;
    return 0;
}
