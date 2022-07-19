#include <iostream>
using std::cout;

double add(double a,double b);

//For classes we can have definition in different translation unit.
struct Point{
    double m_x;
    double m_y;
};
//We cant define class in same file but can in other class
//struct Point{
    //double m_x;
    //double m_y;
//};
int main(){
    int x{};
    //int x{};this will produce error
    x=add(10,32);
    cout<<"Result:"<<x<<std::endl;

    return 0;
}

double add(double a,double b){
    return a+b;
}
//double add(double a,double b){//Will produce error
    //return a+b;
//}