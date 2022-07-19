
#include <iostream>
using std::cout;
using std::endl;

template <typename T> T maximum(T a,T b);


//This is template specialization 
std::string maximum(double a,std::string b){
    return b;
}


int main(){
    cout<< maximum(2.1,3.1)<<std::endl;
    cout<< maximum(2.1,"Hello World")<<std::endl;
    return 0;
}

template<typename T>T maximum(T a,T b){
    return a+b;
}