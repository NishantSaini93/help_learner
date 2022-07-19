#include <iostream>
using std::cout;
#include "house.hpp"





int main(){
    House h;
    h.set_rooms(131243);
    cout<<h.get_rooms() <<std::endl;
    return 0;
}