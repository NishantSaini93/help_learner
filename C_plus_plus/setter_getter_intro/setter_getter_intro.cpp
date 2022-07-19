//Methods to read or modify member variables of a class
#include <iostream>
using std::cout;

class House
{
private:
    int rooms{};
public:
    //Getter: gets the value
    int get_rooms(){
        return rooms;
    }

    //Setter: Set the value
    void set_rooms(int rooms_set){
        rooms=rooms_set;
    }

};



int main(){
    House h;
    h.set_rooms(131243);
    cout<<h.get_rooms() <<std::endl;
    return 0;
}