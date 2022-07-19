#include <iostream>
using std::cout;
class House{
    int rooms{};
    public:
        House(){
            rooms=4;
        }

        int get_room(){
            return rooms;
        }
};

int main(){
    House *h=new House();
    cout<< h->get_room()<<std::endl;
    //this is same as above
    cout<< (*h).get_room()<<std::endl;
    delete h;
    h=nullptr;
    return 0;
}

