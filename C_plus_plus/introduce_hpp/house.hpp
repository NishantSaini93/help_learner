#ifndef HOUSE_HPP //if already not defined
#define HOUSE_HPP //define
class House
{
private:
    int rooms{};
public:
    int get_rooms();
    
    void set_rooms(int rooms_set);

};

#endif//end of defination