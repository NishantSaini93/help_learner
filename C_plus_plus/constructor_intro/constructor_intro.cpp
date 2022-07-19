#include <iostream>
using std::cout;
/**
 * A special type of method that is called when an class is created
 * No return type
 * Same as name of the class
 * Can have parameters.Can have an empty parameter list
 * Usually used to initialize member variables tof the class
 */

class House{
    int rooms{};
    public:

        //generate default constructor House()=default; if you dnt want to do with default one 
        //and have parameterized constructor
        //Default constructor
        House(){
            rooms=4;
        }
        //Parameterized constructor
        House(int room_passsed){
            rooms=room_passsed;
        }

        int get_room(){
            return rooms;
        }
};

int main(){
    House h;
    House h1(72);
    cout<< h.get_room()<<std::endl;
    cout<< h1.get_room()<<std::endl;
    return 0;
}