#include <iostream>
using std::cout;
using std::endl;

// default access specifier is public for struct and for class it is public

struct House
{
    int rooms{12};
    int get_room(){
        return rooms;
    }

};


int main(){
    House h;
    cout<< h.get_room()<<std::endl;
    return 0;
}