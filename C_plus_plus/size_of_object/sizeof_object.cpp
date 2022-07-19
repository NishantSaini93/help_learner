//Size of object is size of member variable we have
#include <iostream>
using std::cout;
struct House
{
    int rooms{12};
    int x{2};
    int get_room(){
        rooms=rooms+x;
        return rooms;
    }

};


int main(){
    House h;
    cout<< "Size of object:"<< sizeof(h)<<std::endl;
    cout<< "Size of int:"<< sizeof(int)<<std::endl;
    
    return 0;
}
