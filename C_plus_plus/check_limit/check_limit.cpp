#include <iostream>
using std::cout;
#include <limits>
using std::numeric_limits;
using std::endl;


int main(){
    cout<<"Max for short"<<numeric_limits<short>::max()<<endl;
    cout<<"Max for unsigned short"<<numeric_limits<unsigned short>::max()<<endl;
    //cout<<"Max for int"<<numeric_limits<int>::max()<<endl;
    //cout<<"Max for unsigned int"<<numeric_limits<unsigned int>::max()<<endl;
    //cout<<"Max for long"<<numeric_limits<long>::max()<<endl;
    //cout<<"Max for double"<<numeric_limits<double>::max()<<endl;
    //cout<<"Max for float"<<numeric_limits<float>::max()<<endl;
    //cout<<"Max for long double"<<numeric_limits<long double>::max()<<endl;

    cout<<"Min for short"<<numeric_limits<short>::min()<<endl;
    cout<<"Min for unsigned short"<<numeric_limits<unsigned short>::min()<<endl;

    /**Returns the lowest finite value representable by the numeric type T, 
     * that is, a finite value x such that there is no other finite 
     * value y where y < x. This is different from std::numeric_limits<T>::min() 
     * for floating-point types. Only meaningful for bounded types.*/
    cout<<"Lowest for short"<<numeric_limits<short>::lowest()<<endl;
    cout<<"Lowest for unsigned short"<<numeric_limits<unsigned short>::lowest()<<endl;


    return 0;
}